
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int pModule; } ;
typedef TYPE_4__ sqlite3_vtab ;
struct TYPE_19__ {char* zName; } ;
struct TYPE_18__ {int nArg; int zName; } ;
struct TYPE_17__ {int nField; int * aSortOrder; TYPE_9__** aColl; } ;
struct TYPE_11__ {int i; } ;
struct TYPE_16__ {int flags; char* z; int r; TYPE_1__ u; } ;
struct TYPE_13__ {char* z; TYPE_2__* pVtab; TYPE_6__* pMem; int * pReal; int i; int * pI64; TYPE_8__* pFunc; TYPE_9__* pColl; TYPE_7__* pKeyInfo; } ;
struct TYPE_15__ {int p4type; TYPE_3__ p4; } ;
struct TYPE_12__ {TYPE_4__* pVtab; } ;
typedef TYPE_5__ Op ;
typedef TYPE_6__ Mem ;
typedef TYPE_7__ KeyInfo ;
typedef TYPE_8__ FuncDef ;
typedef TYPE_9__ CollSeq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int,char*,char*,...) ;

__attribute__((used)) static char *FUNC_4(Op *VAR_5, char *VAR_6, int VAR_7){
  char *VAR_8 = VAR_6;
  FUNC_0( VAR_7>=20 );
  switch( VAR_5->p4type ){
    case 132:
    case 133: {
      int VAR_9, VAR_10;
      KeyInfo *VAR_11 = VAR_5->p4.pKeyInfo;
      FUNC_0( VAR_11->aSortOrder!=0 );
      FUNC_3(VAR_7, VAR_6, "keyinfo(%d", VAR_11->nField);
      VAR_9 = FUNC_2(VAR_6);
      for(VAR_10=0; VAR_10<VAR_11->nField; VAR_10++){
        CollSeq *VAR_12 = VAR_11->aColl[VAR_10];
        const char *VAR_13 = VAR_12 ? VAR_12->zName : "nil";
        int VAR_14 = FUNC_2(VAR_13);
        if( VAR_9+VAR_14>VAR_7-6 ){
          FUNC_1(&VAR_6[VAR_9],",...",4);
          break;
        }
        VAR_6[VAR_9++] = ',';
        if( VAR_11->aSortOrder[VAR_10] ){
          VAR_6[VAR_9++] = '-';
        }
        FUNC_1(&VAR_6[VAR_9], VAR_13, VAR_14+1);
        VAR_9 += VAR_14;
      }
      VAR_6[VAR_9++] = ')';
      VAR_6[VAR_9] = 0;
      FUNC_0( VAR_9<VAR_7 );
      break;
    }
    case 138: {
      CollSeq *VAR_15 = VAR_5->p4.pColl;
      FUNC_3(VAR_7, VAR_6, "collseq(%.20s)", VAR_15->zName);
      break;
    }
    case 137: {
      FuncDef *VAR_16 = VAR_5->p4.pFunc;
      FUNC_3(VAR_7, VAR_6, "%s(%d)", VAR_16->zName, VAR_16->nArg);
      break;
    }
    case 135: {
      FUNC_3(VAR_7, VAR_6, "%lld", *VAR_5->p4.pI64);
      break;
    }
    case 136: {
      FUNC_3(VAR_7, VAR_6, "%d", VAR_5->p4.i);
      break;
    }
    case 130: {
      FUNC_3(VAR_7, VAR_6, "%.16g", *VAR_5->p4.pReal);
      break;
    }
    case 131: {
      Mem *VAR_17 = VAR_5->p4.pMem;
      if( VAR_17->flags & VAR_4 ){
        VAR_8 = VAR_17->z;
      }else if( VAR_17->flags & VAR_1 ){
        FUNC_3(VAR_7, VAR_6, "%lld", VAR_17->u.i);
      }else if( VAR_17->flags & VAR_3 ){
        FUNC_3(VAR_7, VAR_6, "%.16g", VAR_17->r);
      }else if( VAR_17->flags & VAR_2 ){
        FUNC_3(VAR_7, VAR_6, "NULL");
      }else{
        FUNC_0( VAR_17->flags & VAR_0 );
        VAR_8 = "(blob)";
      }
      break;
    }

    case 128: {
      sqlite3_vtab *VAR_18 = VAR_5->p4.pVtab->pVtab;
      FUNC_3(VAR_7, VAR_6, "vtab:%p:%p", VAR_18, VAR_18->pModule);
      break;
    }

    case 134: {
      FUNC_3(VAR_7, VAR_6, "intarray");
      break;
    }
    case 129: {
      FUNC_3(VAR_7, VAR_6, "program");
      break;
    }
    case 139: {
      VAR_6[0] = 0;
      break;
    }
    default: {
      VAR_8 = VAR_5->p4.z;
      if( VAR_8==0 ){
        VAR_8 = VAR_6;
        VAR_6[0] = 0;
      }
    }
  }
  FUNC_0( VAR_8!=0 );
  return VAR_8;
}
