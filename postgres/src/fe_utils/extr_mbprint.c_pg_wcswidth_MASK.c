
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*,int) ;

int
FUNC_2(const char *VAR_0, size_t VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 while (VAR_1 > 0)
 {
  int VAR_4,
     VAR_5;

  VAR_4 = FUNC_1(VAR_0, VAR_2);
  if (VAR_1 < (size_t) VAR_4)
   break;

  VAR_5 = FUNC_0(VAR_0, VAR_2);
  if (VAR_5 > 0)
   VAR_3 += VAR_5;

  VAR_0 += VAR_4;
  VAR_1 -= VAR_4;
 }
 return VAR_3;
}
