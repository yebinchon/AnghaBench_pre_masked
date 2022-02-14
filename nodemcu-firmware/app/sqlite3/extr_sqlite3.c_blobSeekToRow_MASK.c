
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
typedef char* sqlite3_int64 ;
struct TYPE_11__ {int pCursor; } ;
struct TYPE_12__ {int nHdrParsed; int* aType; size_t nField; TYPE_3__ uc; } ;
typedef TYPE_4__ VdbeCursor ;
struct TYPE_13__ {int pc; TYPE_4__** apCsr; TYPE_2__* aMem; } ;
typedef TYPE_5__ Vdbe ;
struct TYPE_14__ {int iCol; int iOffset; int db; scalar_t__ pStmt; int pCsr; int nByte; } ;
struct TYPE_9__ {char* i; } ;
struct TYPE_10__ {TYPE_1__ u; int flags; } ;
typedef TYPE_6__ Incrblob ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(Incrblob *VAR_5, sqlite3_int64 VAR_6, char **VAR_7){
  int VAR_8;
  char *VAR_9 = 0;
  Vdbe *VAR_10 = (Vdbe *)VAR_5->pStmt;




  VAR_10->aMem[1].flags = VAR_0;
  VAR_10->aMem[1].u.i = VAR_6;





  if( VAR_10->pc>3 ){
    VAR_10->pc = 3;
    VAR_8 = FUNC_3(VAR_10);
  }else{
    VAR_8 = FUNC_7(VAR_5->pStmt);
  }
  if( VAR_8==VAR_4 ){
    VdbeCursor *VAR_11 = VAR_10->apCsr[0];
    u32 VAR_12 = VAR_11->nHdrParsed>VAR_5->iCol ? VAR_11->aType[VAR_5->iCol] : 0;
    FUNC_8( VAR_11->nHdrParsed==VAR_5->iCol );
    FUNC_8( VAR_11->nHdrParsed==VAR_5->iCol+1 );
    if( VAR_12<12 ){
      VAR_9 = FUNC_2(VAR_5->db, "cannot open value of type %s",
          VAR_12==0?"null": VAR_12==7?"real": "integer"
      );
      VAR_8 = VAR_2;
      FUNC_6(VAR_5->pStmt);
      VAR_5->pStmt = 0;
    }else{
      VAR_5->iOffset = VAR_11->aType[VAR_5->iCol + VAR_11->nField];
      VAR_5->nByte = FUNC_4(VAR_12);
      VAR_5->pCsr = VAR_11->uc.pCursor;
      FUNC_1(VAR_5->pCsr);
    }
  }

  if( VAR_8==VAR_4 ){
    VAR_8 = VAR_3;
  }else if( VAR_5->pStmt ){
    VAR_8 = FUNC_6(VAR_5->pStmt);
    VAR_5->pStmt = 0;
    if( VAR_8==VAR_3 ){
      VAR_9 = FUNC_2(VAR_5->db, "no such rowid: %lld", VAR_6);
      VAR_8 = VAR_2;
    }else{
      VAR_9 = FUNC_2(VAR_5->db, "%s", FUNC_5(VAR_5->db));
    }
  }

  FUNC_0( VAR_8!=VAR_3 || VAR_9==0 );
  FUNC_0( VAR_8!=VAR_4 && VAR_8!=VAR_1 );

  *VAR_7 = VAR_9;
  return VAR_8;
}
