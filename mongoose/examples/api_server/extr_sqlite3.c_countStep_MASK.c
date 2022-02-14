
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_3__ {int n; } ;
typedef TYPE_1__ CountCtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(sqlite3_context *VAR_1, int VAR_2, sqlite3_value **VAR_3){
  CountCtx *VAR_4;
  VAR_4 = FUNC_1(VAR_1, sizeof(*VAR_4));
  if( (VAR_2==0 || VAR_0!=FUNC_3(VAR_3[0])) && VAR_4 ){
    VAR_4->n++;
  }






  FUNC_0( VAR_2==1 || VAR_4==0 || VAR_4->n>0x7fffffff
          || VAR_4->n==FUNC_2(VAR_1) );

}
