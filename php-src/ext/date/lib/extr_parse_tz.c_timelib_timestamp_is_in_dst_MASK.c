
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int isdst; } ;
typedef TYPE_1__ ttinfo ;
typedef int timelib_tzinfo ;
typedef int timelib_sll ;


 TYPE_1__* FUNC_0 (int *,int ,int *) ;

int FUNC_1(timelib_sll VAR_0, timelib_tzinfo *VAR_1)
{
 ttinfo *VAR_2;
 timelib_sll VAR_3;

 if ((VAR_2 = FUNC_0(VAR_1, VAR_0, &VAR_3))) {
  return VAR_2->isdst;
 }
 return -1;
}
