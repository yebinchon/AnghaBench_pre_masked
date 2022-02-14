
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;
typedef int Expr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int *,int,int ) ;

Expr *FUNC_2(sqlite3 *VAR_1, Expr *VAR_2, int VAR_3){
  FUNC_0( VAR_3==0 || VAR_3==VAR_0 );
  return VAR_2 ? FUNC_1(VAR_1, VAR_2, VAR_3, 0) : 0;
}
