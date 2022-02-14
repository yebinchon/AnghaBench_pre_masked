
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,scalar_t__,size_t) ;
 scalar_t__ FUNC_2 () ;

int
FUNC_3(char *VAR_5, size_t VAR_6)
{
 size_t VAR_7;

 FUNC_0(VAR_1);

 while (VAR_6 > 0)
 {
  while (VAR_4 >= VAR_3)
  {
   if (FUNC_2())
    return VAR_0;
  }
  VAR_7 = VAR_3 - VAR_4;
  if (VAR_7 > VAR_6)
   VAR_7 = VAR_6;
  FUNC_1(VAR_5, VAR_2 + VAR_4, VAR_7);
  VAR_4 += VAR_7;
  VAR_5 += VAR_7;
  VAR_6 -= VAR_7;
 }
 return 0;
}
