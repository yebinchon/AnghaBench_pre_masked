
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wMonth; int wYear; } ;


 TYPE_1__ VAR_0 ;

int FUNC_0(int VAR_1, int VAR_2)
{
  const int VAR_3[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};



  if(VAR_1 == 0)
    VAR_1 = 12;
  else if(VAR_1 == 13)
    VAR_1 = 1;


  if(VAR_1 == VAR_0.wMonth && VAR_2 == VAR_0.wYear) return 19;




  if(VAR_1 == 2) {
    return VAR_3[VAR_1 - 1] + ((VAR_2%400 == 0) ? 1 : ((VAR_2%100 != 0) &&
     (VAR_2%4 == 0)) ? 1 : 0);
  }
  else {
    return VAR_3[VAR_1 - 1];
  }
}
