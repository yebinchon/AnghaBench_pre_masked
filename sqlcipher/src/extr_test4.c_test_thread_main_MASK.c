
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zErr; int completed; int opnum; scalar_t__ zStaticErr; scalar_t__ db; scalar_t__ pStmt; int (* xOp ) (TYPE_1__*) ;int zFilename; } ;
typedef TYPE_1__ Thread ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void *FUNC_10(void *VAR_1){
  Thread *VAR_2 = (Thread*)VAR_1;
  if( VAR_2->db ){
    FUNC_1(VAR_2->db);
  }
  FUNC_6(VAR_2->zFilename, &VAR_2->db);
  if( VAR_0!=FUNC_2(VAR_2->db) ){
    VAR_2->zErr = FUNC_8(FUNC_3(VAR_2->db));
    FUNC_1(VAR_2->db);
    VAR_2->db = 0;
  }
  VAR_2->pStmt = 0;
  VAR_2->completed = 1;
  while( VAR_2->opnum<=VAR_2->completed ) FUNC_0();
  while( VAR_2->xOp ){
    if( VAR_2->zErr && VAR_2->zErr!=VAR_2->zStaticErr ){
      FUNC_5(VAR_2->zErr);
      VAR_2->zErr = 0;
    }
    (*VAR_2->xOp)(VAR_2);
    VAR_2->completed++;
    while( VAR_2->opnum<=VAR_2->completed ) FUNC_0();
  }
  if( VAR_2->pStmt ){
    FUNC_4(VAR_2->pStmt);
    VAR_2->pStmt = 0;
  }
  if( VAR_2->db ){
    FUNC_1(VAR_2->db);
    VAR_2->db = 0;
  }
  if( VAR_2->zErr && VAR_2->zErr!=VAR_2->zStaticErr ){
    FUNC_5(VAR_2->zErr);
    VAR_2->zErr = 0;
  }
  VAR_2->completed++;

  FUNC_7();

  return 0;
}
