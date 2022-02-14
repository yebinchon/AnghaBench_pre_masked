
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 unsigned long FUNC_1 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_2(char **VAR_3, int *VAR_4)
{
 *VAR_4 = -1;

 *VAR_3 += FUNC_0(*VAR_3, " ");

 if (**VAR_3 != '#')
  return 0;

 *VAR_3 += 1;

 if (**VAR_3 == 'g' || **VAR_3 == 'G') {
  *VAR_3 += 1;
  *VAR_4 = 0;
 } else {
  unsigned long VAR_5;
  char *VAR_6;

  VAR_2 = 0;
  VAR_5 = FUNC_1(*VAR_3, &VAR_6, 0);
  if (VAR_2)
   return -VAR_2;
  if (VAR_6 == *VAR_3 || VAR_5 > VAR_1)
   return -VAR_0;
  *VAR_3 = VAR_6;
  *VAR_4 = VAR_5;
 }

 return 0;
}
