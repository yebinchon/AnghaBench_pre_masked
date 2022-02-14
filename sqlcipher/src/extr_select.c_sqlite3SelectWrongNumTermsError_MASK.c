
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int selFlags; int op; } ;
typedef TYPE_1__ Select ;
typedef int Parse ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;

void FUNC_2(Parse *VAR_1, Select *VAR_2){
  if( VAR_2->selFlags & VAR_0 ){
    FUNC_1(VAR_1, "all VALUES must have the same number of terms");
  }else{
    FUNC_1(VAR_1, "SELECTs to the left and right of %s"
      " do not have the same number of result columns", FUNC_0(VAR_2->op));
  }
}
