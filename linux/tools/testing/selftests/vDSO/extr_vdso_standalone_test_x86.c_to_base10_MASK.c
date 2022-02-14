
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;



void FUNC_0(char *VAR_0, time_t VAR_1)
{
 while (VAR_1) {
  *VAR_0 = (VAR_1 % 10) + '0';
  VAR_1 /= 10;
  VAR_0--;
 }
}
