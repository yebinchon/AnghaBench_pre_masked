
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ xFunc; scalar_t__ xStep; int nArg; int iPrefEnc; } ;
typedef TYPE_1__ FuncDef ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(
  FuncDef *VAR_1,
  int VAR_2,
  u8 VAR_3
){
  int VAR_4;


  if( VAR_2==(-2) ) return (VAR_1->xFunc==0 && VAR_1->xStep==0) ? 0 : VAR_0;


  if( VAR_1->nArg!=VAR_2 && VAR_1->nArg>=0 ) return 0;



  if( VAR_1->nArg==VAR_2 ){
    VAR_4 = 4;
  }else{
    VAR_4 = 1;
  }


  if( VAR_3==VAR_1->iPrefEnc ){
    VAR_4 += 2;
  }else if( (VAR_3 & VAR_1->iPrefEnc & 2)!=0 ){
    VAR_4 += 1;
  }

  return VAR_4;
}
