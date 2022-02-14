
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
typedef char* sqlite3_int64 ;
struct TYPE_13__ {int pCursor; } ;
struct TYPE_14__ {int nHdrParsed; int* aType; size_t nField; TYPE_4__ uc; } ;
typedef TYPE_5__ VdbeCursor ;
struct TYPE_15__ {int pc; TYPE_5__** apCsr; TYPE_3__* aOp; TYPE_2__* aMem; } ;
typedef TYPE_6__ Vdbe ;
struct TYPE_16__ {int iCol; int iOffset; int db; scalar_t__ pStmt; int pCsr; int nByte; } ;
struct TYPE_12__ {scalar_t__ opcode; } ;
struct TYPE_10__ {char* i; } ;
struct TYPE_11__ {TYPE_1__ u; int flags; } ;
typedef TYPE_7__ Incrblob ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(Incrblob *VAR_6, sqlite3_int64 VAR_7, char **VAR_8){
  int VAR_9;
  char *VAR_10 = 0;
  Vdbe *VAR_11 = (Vdbe *)VAR_6->pStmt;




  VAR_11->aMem[1].flags = VAR_0;
  VAR_11->aMem[1].u.i = VAR_7;





  if( VAR_11->pc>4 ){
    VAR_11->pc = 4;
    FUNC_0( VAR_11->aOp[VAR_11->pc].opcode==VAR_1 );
    VAR_9 = FUNC_3(VAR_11);
  }else{
    VAR_9 = FUNC_7(VAR_6->pStmt);
  }
  if( VAR_9==VAR_5 ){
    VdbeCursor *VAR_12 = VAR_11->apCsr[0];
    u32 VAR_13 = VAR_12->nHdrParsed>VAR_6->iCol ? VAR_12->aType[VAR_6->iCol] : 0;
    FUNC_8( VAR_12->nHdrParsed==VAR_6->iCol );
    FUNC_8( VAR_12->nHdrParsed==VAR_6->iCol+1 );
    if( VAR_13<12 ){
      VAR_10 = FUNC_2(VAR_6->db, "cannot open value of type %s",
          VAR_13==0?"null": VAR_13==7?"real": "integer"
      );
      VAR_9 = VAR_3;
      FUNC_6(VAR_6->pStmt);
      VAR_6->pStmt = 0;
    }else{
      VAR_6->iOffset = VAR_12->aType[VAR_6->iCol + VAR_12->nField];
      VAR_6->nByte = FUNC_4(VAR_13);
      VAR_6->pCsr = VAR_12->uc.pCursor;
      FUNC_1(VAR_6->pCsr);
    }
  }

  if( VAR_9==VAR_5 ){
    VAR_9 = VAR_4;
  }else if( VAR_6->pStmt ){
    VAR_9 = FUNC_6(VAR_6->pStmt);
    VAR_6->pStmt = 0;
    if( VAR_9==VAR_4 ){
      VAR_10 = FUNC_2(VAR_6->db, "no such rowid: %lld", VAR_7);
      VAR_9 = VAR_3;
    }else{
      VAR_10 = FUNC_2(VAR_6->db, "%s", FUNC_5(VAR_6->db));
    }
  }

  FUNC_0( VAR_9!=VAR_4 || VAR_10==0 );
  FUNC_0( VAR_9!=VAR_5 && VAR_9!=VAR_2 );

  *VAR_8 = VAR_10;
  return VAR_9;
}
