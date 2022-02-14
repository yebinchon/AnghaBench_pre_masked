
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NtileCtx {scalar_t__ nTotal; scalar_t__ nParam; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  struct NtileCtx *VAR_3;
  FUNC_1( VAR_1==1 ); FUNC_0(VAR_1);
  VAR_3 = (struct NtileCtx*)FUNC_2(VAR_0, sizeof(*VAR_3));
  if( VAR_3 ){
    if( VAR_3->nTotal==0 ){
      VAR_3->nParam = FUNC_4(VAR_2[0]);
      if( VAR_3->nParam<=0 ){
        FUNC_3(
            VAR_0, "argument of ntile must be a positive integer", -1
        );
      }
    }
    VAR_3->nTotal++;
  }
}
