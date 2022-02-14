
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef char* sqlite3_int64 ;
struct TYPE_10__ {TYPE_3__** apCsr; TYPE_2__* aVar; } ;
typedef TYPE_4__ Vdbe ;
struct TYPE_11__ {size_t iCol; int db; scalar_t__ pStmt; int pCsr; int nByte; int iOffset; } ;
struct TYPE_9__ {int* aType; int pCursor; int * aOffset; } ;
struct TYPE_7__ {char* i; } ;
struct TYPE_8__ {int flags; TYPE_1__ u; } ;
typedef TYPE_5__ Incrblob ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(Incrblob *VAR_5, sqlite3_int64 VAR_6, char **VAR_7){
  int VAR_8;
  char *VAR_9 = 0;
  Vdbe *VAR_10 = (Vdbe *)VAR_5->pStmt;





  FUNC_0( VAR_10->aVar[0].flags&VAR_0 );
  VAR_10->aVar[0].u.i = VAR_6;

  VAR_8 = FUNC_8(VAR_5->pStmt);
  if( VAR_8==VAR_4 ){
    u32 VAR_11 = VAR_10->apCsr[0]->aType[VAR_5->iCol];
    if( VAR_11<12 ){
      VAR_9 = FUNC_4(VAR_5->db, "cannot open value of type %s",
          VAR_11==0?"null": VAR_11==7?"real": "integer"
      );
      VAR_8 = VAR_2;
      FUNC_7(VAR_5->pStmt);
      VAR_5->pStmt = 0;
    }else{
      VAR_5->iOffset = VAR_10->apCsr[0]->aOffset[VAR_5->iCol];
      VAR_5->nByte = FUNC_5(VAR_11);
      VAR_5->pCsr = VAR_10->apCsr[0]->pCursor;
      FUNC_2(VAR_5->pCsr);
      FUNC_1(VAR_5->pCsr);
      FUNC_3(VAR_5->pCsr);
    }
  }

  if( VAR_8==VAR_4 ){
    VAR_8 = VAR_3;
  }else if( VAR_5->pStmt ){
    VAR_8 = FUNC_7(VAR_5->pStmt);
    VAR_5->pStmt = 0;
    if( VAR_8==VAR_3 ){
      VAR_9 = FUNC_4(VAR_5->db, "no such rowid: %lld", VAR_6);
      VAR_8 = VAR_2;
    }else{
      VAR_9 = FUNC_4(VAR_5->db, "%s", FUNC_6(VAR_5->db));
    }
  }

  FUNC_0( VAR_8!=VAR_3 || VAR_9==0 );
  FUNC_0( VAR_8!=VAR_4 && VAR_8!=VAR_1 );

  *VAR_7 = VAR_9;
  return VAR_8;
}
