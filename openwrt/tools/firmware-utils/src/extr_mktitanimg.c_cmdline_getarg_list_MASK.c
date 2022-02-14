
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * opt_args; } ;


 TYPE_1__ VAR_0 ;

void* FUNC_0(char VAR_1)
{
 int VAR_2 = (VAR_1 - 'a');


 if((VAR_2 < 0) || (VAR_2 > 25))
 {

  return ((void*)0);
 }


 return((void*)(&VAR_0.opt_args[VAR_2]));
}
