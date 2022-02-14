
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pStmt; char* zErr; char* zStaticErr; int rc; } ;
typedef TYPE_1__ Thread ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(Thread *VAR_1){
  if( VAR_1->pStmt==0 ){
    VAR_1->zErr = VAR_1->zStaticErr = "no virtual machine available";
    VAR_1->rc = VAR_0;
    return;
  }
  VAR_1->rc = FUNC_0(VAR_1->pStmt);
  VAR_1->pStmt = 0;
}
