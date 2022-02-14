
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LastValueCtx {scalar_t__ nVal; scalar_t__ pVal; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 scalar_t__ FUNC_0 (struct LastValueCtx*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  struct LastValueCtx *VAR_3;
  FUNC_1(VAR_1);
  FUNC_1(VAR_2);
  VAR_3 = (struct LastValueCtx*)FUNC_2(VAR_0, sizeof(*VAR_3));
  if( FUNC_0(VAR_3) ){
    VAR_3->nVal--;
    if( VAR_3->nVal==0 ){
      FUNC_3(VAR_3->pVal);
      VAR_3->pVal = 0;
    }
  }
}
