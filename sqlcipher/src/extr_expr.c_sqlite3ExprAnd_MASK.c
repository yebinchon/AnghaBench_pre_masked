
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int * VAR_2 ;

Expr *FUNC_4(sqlite3 *VAR_3, Expr *VAR_4, Expr *VAR_5){
  if( VAR_4==0 ){
    return VAR_5;
  }else if( VAR_5==0 ){
    return VAR_4;
  }else if( FUNC_0(VAR_4) || FUNC_0(VAR_5) ){
    FUNC_3(VAR_3, VAR_4);
    FUNC_3(VAR_3, VAR_5);
    return FUNC_1(VAR_3, VAR_1, &VAR_2[0], 0);
  }else{
    Expr *VAR_6 = FUNC_1(VAR_3, VAR_0, 0, 0);
    FUNC_2(VAR_3, VAR_6, VAR_4, VAR_5);
    return VAR_6;
  }
}
