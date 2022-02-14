
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char*,int) ;

int FUNC_2(void)
{
 char VAR_3[64];
 int VAR_4;

 VAR_4 = FUNC_0("/proc/self/wchan", VAR_1);
 if (VAR_4 == -1) {
  if (VAR_2 == VAR_0)
   return 4;
  return 1;
 }

 VAR_3[0] = '\0';
 if (FUNC_1(VAR_4, VAR_3, sizeof(VAR_3)) != 1)
  return 1;
 if (VAR_3[0] != '0')
  return 1;
 return 0;
}
