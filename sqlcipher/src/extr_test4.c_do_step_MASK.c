
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pStmt; char* zErr; char* zStaticErr; scalar_t__ rc; int argc; char** argv; int * colv; } ;
typedef TYPE_1__ Thread ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(Thread *VAR_2){
  int VAR_3;
  if( VAR_2->pStmt==0 ){
    VAR_2->zErr = VAR_2->zStaticErr = "no virtual machine available";
    VAR_2->rc = VAR_0;
    return;
  }
  VAR_2->rc = FUNC_4(VAR_2->pStmt);
  if( VAR_2->rc==VAR_1 ){
    VAR_2->argc = FUNC_0(VAR_2->pStmt);
    for(VAR_3=0; VAR_3<FUNC_3(VAR_2->pStmt); VAR_3++){
      VAR_2->argv[VAR_3] = (char*)FUNC_2(VAR_2->pStmt, VAR_3);
    }
    for(VAR_3=0; VAR_3<VAR_2->argc; VAR_3++){
      VAR_2->colv[VAR_3] = FUNC_1(VAR_2->pStmt, VAR_3);
    }
  }
}
