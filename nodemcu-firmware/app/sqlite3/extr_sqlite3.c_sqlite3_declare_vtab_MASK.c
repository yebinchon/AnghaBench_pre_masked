
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_28__ {int mutex; int mallocFailed; TYPE_5__* pVtabCtx; } ;
typedef TYPE_4__ sqlite3 ;
struct TYPE_29__ {int bDeclared; TYPE_3__* pVTable; TYPE_6__* pTab; } ;
typedef TYPE_5__ VtabCtx ;
struct TYPE_30__ {int tabFlags; TYPE_8__* pIndex; scalar_t__ aCol; scalar_t__ nCol; int pSelect; } ;
typedef TYPE_6__ Table ;
struct TYPE_32__ {scalar_t__ pNext; TYPE_6__* pTable; } ;
struct TYPE_31__ {int declareVtab; int nQueryLoop; TYPE_6__* pNewTable; scalar_t__ pVdbe; TYPE_4__* db; } ;
struct TYPE_27__ {TYPE_2__* pMod; } ;
struct TYPE_26__ {TYPE_1__* pModule; } ;
struct TYPE_25__ {scalar_t__ xUpdate; } ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ Index ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,int,char*,char*) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*,char const*,char**) ;
 int FUNC_10 (TYPE_4__*) ;
 TYPE_7__* FUNC_11 (TYPE_4__*,int) ;
 int FUNC_12 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

int FUNC_16(sqlite3 *VAR_7, const char *VAR_8){
  VtabCtx *VAR_9;
  Parse *VAR_10;
  int VAR_11 = VAR_4;
  Table *VAR_12;
  char *VAR_13 = 0;






  FUNC_14(VAR_7->mutex);
  VAR_9 = VAR_7->pVtabCtx;
  if( !VAR_9 || VAR_9->bDeclared ){
    FUNC_6(VAR_7, VAR_1);
    FUNC_15(VAR_7->mutex);
    return VAR_2;
  }
  VAR_12 = VAR_9->pTab;
  FUNC_2( FUNC_1(VAR_12) );

  VAR_10 = FUNC_11(VAR_7, sizeof(*VAR_10));
  if( VAR_10==0 ){
    VAR_11 = VAR_3;
  }else{
    VAR_10->declareVtab = 1;
    VAR_10->db = VAR_7;
    VAR_10->nQueryLoop = 1;

    if( VAR_4==FUNC_9(VAR_10, VAR_8, &VAR_13)
     && VAR_10->pNewTable
     && !VAR_7->mallocFailed
     && !VAR_10->pNewTable->pSelect
     && !FUNC_1(VAR_10->pNewTable)
    ){
      if( !VAR_12->aCol ){
        Table *VAR_14 = VAR_10->pNewTable;
        Index *VAR_15;
        VAR_12->aCol = VAR_14->aCol;
        VAR_12->nCol = VAR_14->nCol;
        VAR_12->tabFlags |= VAR_14->tabFlags & (VAR_6|VAR_5);
        VAR_14->nCol = 0;
        VAR_14->aCol = 0;
        FUNC_2( VAR_12->pIndex==0 );
        if( !FUNC_0(VAR_14) && VAR_9->pVTable->pMod->pModule->xUpdate!=0 ){
          VAR_11 = VAR_0;
        }
        VAR_15 = VAR_14->pIndex;
        if( VAR_15 ){
          FUNC_2( VAR_15->pNext==0 );
          VAR_12->pIndex = VAR_15;
          VAR_14->pIndex = 0;
          VAR_15->pTable = VAR_12;
        }
      }
      VAR_9->bDeclared = 1;
    }else{
      FUNC_7(VAR_7, VAR_0, (VAR_13 ? "%s" : 0), VAR_13);
      FUNC_4(VAR_7, VAR_13);
      VAR_11 = VAR_0;
    }
    VAR_10->declareVtab = 0;

    if( VAR_10->pVdbe ){
      FUNC_13(VAR_10->pVdbe);
    }
    FUNC_5(VAR_7, VAR_10->pNewTable);
    FUNC_8(VAR_10);
    FUNC_12(VAR_7, VAR_10);
  }

  FUNC_2( (VAR_11&0xff)==VAR_11 );
  VAR_11 = FUNC_3(VAR_7, VAR_11);
  FUNC_15(VAR_7->mutex);
  return VAR_11;
}
