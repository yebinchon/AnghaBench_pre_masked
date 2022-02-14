
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ db; char* zErr; char* zStaticErr; scalar_t__ pStmt; int zArg; int rc; } ;
typedef TYPE_1__ Thread ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int,scalar_t__*,int ) ;

__attribute__((used)) static void FUNC_2(Thread *VAR_1){
  if( VAR_1->db==0 ){
    VAR_1->zErr = VAR_1->zStaticErr = "no database is open";
    VAR_1->rc = VAR_0;
    return;
  }
  if( VAR_1->pStmt ){
    FUNC_0(VAR_1->pStmt);
    VAR_1->pStmt = 0;
  }
  VAR_1->rc = FUNC_1(VAR_1->db, VAR_1->zArg, -1, &VAR_1->pStmt, 0);
}
