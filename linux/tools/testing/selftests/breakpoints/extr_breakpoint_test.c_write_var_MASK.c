
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_1(int VAR_1)
{
 char *VAR_2; short *VAR_3; int *VAR_4; long long *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  switch (VAR_1) {
  case 1:
   VAR_2 = (char *)&VAR_0[VAR_6];
   *VAR_2 = 0xff;
   break;
  case 2:
   VAR_3 = (short *)&VAR_0[VAR_6];
   *VAR_3 = 0xffff;
   break;
  case 4:
   VAR_4 = (int *)&VAR_0[VAR_6];
   *VAR_4 = 0xffffffff;
   break;
  case 8:
   VAR_5 = (long long *)&VAR_0[VAR_6];
   *VAR_5 = 0xffffffffffffffffLL;
   break;
  }
  FUNC_0();
 }
}
