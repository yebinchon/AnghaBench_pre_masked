
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_sll ;



int FUNC_0(timelib_sll VAR_0, timelib_sll VAR_1, timelib_sll VAR_2)
{
 if (VAR_0 < 0 || VAR_0 > 23 || VAR_1 < 0 || VAR_1 > 59 || VAR_2 < 0 || VAR_2 > 59) {
  return 0;
 }
 return 1;
}
