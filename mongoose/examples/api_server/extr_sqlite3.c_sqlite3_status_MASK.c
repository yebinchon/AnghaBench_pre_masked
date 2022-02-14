
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* nowValue; int* mxValue; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

int FUNC_1(int VAR_4, int *VAR_5, int *VAR_6, int VAR_7){
  VAR_3;
  if( VAR_4<0 || VAR_4>=FUNC_0(VAR_2.nowValue) ){
    return VAR_0;
  }
  *VAR_5 = VAR_2.nowValue[VAR_4];
  *VAR_6 = VAR_2.mxValue[VAR_4];
  if( VAR_7 ){
    VAR_2.mxValue[VAR_4] = VAR_2.nowValue[VAR_4];
  }
  return VAR_1;
}
