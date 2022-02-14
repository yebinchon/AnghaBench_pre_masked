
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double
FUNC_0(unsigned char *VAR_0, int VAR_1,
       int VAR_2, int VAR_3)
{
 double VAR_4,
    VAR_5,
    VAR_6;

 if (VAR_1 <= 0)
  return 0.0;





 if (VAR_1 > 10)
  VAR_1 = 10;


 VAR_6 = VAR_3 - VAR_2 + 1;
 VAR_4 = 0.0;
 VAR_5 = VAR_6;
 while (VAR_1-- > 0)
 {
  int VAR_7 = *VAR_0++;

  if (VAR_7 < VAR_2)
   VAR_7 = VAR_2 - 1;
  else if (VAR_7 > VAR_3)
   VAR_7 = VAR_3 + 1;
  VAR_4 += ((double) (VAR_7 - VAR_2)) / VAR_5;
  VAR_5 *= VAR_6;
 }

 return VAR_4;
}
