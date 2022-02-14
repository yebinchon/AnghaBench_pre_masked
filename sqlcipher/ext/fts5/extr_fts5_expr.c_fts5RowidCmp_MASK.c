
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_3__ {int bDesc; } ;
typedef TYPE_1__ Fts5Expr ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(
  Fts5Expr *VAR_0,
  i64 VAR_1,
  i64 VAR_2
){
  FUNC_0( VAR_0->bDesc==0 || VAR_0->bDesc==1 );
  if( VAR_0->bDesc==0 ){
    if( VAR_1<VAR_2 ) return -1;
    return (VAR_1 > VAR_2);
  }else{
    if( VAR_1>VAR_2 ) return -1;
    return (VAR_1 < VAR_2);
  }
}
