
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;

int
FUNC_3(const char *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;
 int VAR_5;


 if (FUNC_1() == 1)
  return FUNC_0(VAR_0, VAR_1, VAR_2);

 while (VAR_1 > 0 && *VAR_0)
 {
  VAR_5 = FUNC_2(VAR_0);
  VAR_4++;
  if (VAR_4 > VAR_2)
   break;
  VAR_3 += VAR_5;
  VAR_1 -= VAR_5;
  VAR_0 += VAR_5;
 }
 return VAR_3;
}
