
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ xSFunc; int nArg; int funcFlags; } ;
typedef TYPE_1__ FuncDef ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(
  FuncDef *VAR_2,
  int VAR_3,
  u8 VAR_4
){
  int VAR_5;


  if( VAR_3==(-2) ) return (VAR_2->xSFunc==0) ? 0 : VAR_0;


  if( VAR_2->nArg!=VAR_3 && VAR_2->nArg>=0 ) return 0;



  if( VAR_2->nArg==VAR_3 ){
    VAR_5 = 4;
  }else{
    VAR_5 = 1;
  }


  if( VAR_4==(VAR_2->funcFlags & VAR_1) ){
    VAR_5 += 2;
  }else if( (VAR_4 & VAR_2->funcFlags & 2)!=0 ){
    VAR_5 += 1;
  }

  return VAR_5;
}
