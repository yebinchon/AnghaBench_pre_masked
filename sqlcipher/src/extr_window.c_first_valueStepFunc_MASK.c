
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NthValueCtx {scalar_t__ pValue; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  struct NthValueCtx *VAR_3;
  VAR_3 = (struct NthValueCtx*)FUNC_1(VAR_0, sizeof(*VAR_3));
  if( VAR_3 && VAR_3->pValue==0 ){
    VAR_3->pValue = FUNC_3(VAR_2[0]);
    if( !VAR_3->pValue ){
      FUNC_2(VAR_0);
    }
  }
  FUNC_0(VAR_1);
  FUNC_0(VAR_2);
}
