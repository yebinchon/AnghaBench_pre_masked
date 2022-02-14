
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static double
FUNC_1(char *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0);
 double VAR_4,
    VAR_5,
    VAR_6;

 if (VAR_3 <= 0)
  return 0.0;
 if (VAR_3 > 12)
  VAR_3 = 12;


 VAR_6 = VAR_2 - VAR_1 + 1;
 VAR_4 = 0.0;
 VAR_5 = VAR_6;
 while (VAR_3-- > 0)
 {
  int VAR_7 = (unsigned char) *VAR_0++;

  if (VAR_7 < VAR_1)
   VAR_7 = VAR_1 - 1;
  else if (VAR_7 > VAR_2)
   VAR_7 = VAR_2 + 1;
  VAR_4 += ((double) (VAR_7 - VAR_1)) / VAR_5;
  VAR_5 *= VAR_6;
 }

 return VAR_4;
}
