
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(int VAR_1)
{
 long long *VAR_2;
 char *VAR_3;
 short *VAR_4;
 int *VAR_5;

 switch (VAR_1) {
 case 1:
  VAR_3 = (char *)VAR_0;
  *VAR_3 = 0xff;
  break;
 case 2:
  VAR_4 = (short *)VAR_0;
  *VAR_4 = 0xffff;
  break;
 case 4:
  VAR_5 = (int *)VAR_0;
  *VAR_5 = 0xffffffff;
  break;
 case 8:
  VAR_2 = (long long *)VAR_0;
  *VAR_2 = 0xffffffffffffffffLL;
  break;
 }
}
