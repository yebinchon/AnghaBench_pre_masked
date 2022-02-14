
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LastValueCtx {scalar_t__ pVal; } ;
typedef int sqlite3_context ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(sqlite3_context *VAR_0){
  struct LastValueCtx *VAR_1;
  VAR_1 = (struct LastValueCtx*)FUNC_0(VAR_0, sizeof(*VAR_1));
  if( VAR_1 && VAR_1->pVal ){
    FUNC_1(VAR_0, VAR_1->pVal);
    FUNC_2(VAR_1->pVal);
    VAR_1->pVal = 0;
  }
}
