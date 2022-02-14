
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* mbctype; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;

int FUNC_1(unsigned int VAR_1)
{
  return (FUNC_0()->mbctype[(VAR_1&0xff) + 1] & VAR_0) != 0;
}
