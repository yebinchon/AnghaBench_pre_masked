
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;

int
FUNC_3(const char *VAR_0)
{
 int VAR_1 = 0;


 if (FUNC_0() == 1)
  return FUNC_2(VAR_0);

 while (*VAR_0)
 {
  VAR_0 += FUNC_1(VAR_0);
  VAR_1++;
 }
 return VAR_1;
}
