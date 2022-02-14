
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_1(unsigned char *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 unsigned char VAR_8;

 if (VAR_3 == VAR_0)
 {
  VAR_6 = 32;
  VAR_7 = 4;
 }
 else
 {
  VAR_6 = 128;
  VAR_7 = 16;
 }
 FUNC_0(VAR_2 <= VAR_6);

 if (VAR_2 == VAR_6)
  return 1;

 VAR_4 = VAR_2 / 8;

 VAR_5 = VAR_2 % 8;
 VAR_8 = 0xff;
 if (VAR_2 != 0)
  VAR_8 >>= VAR_5;

 while (VAR_4 < VAR_7)
 {
  if ((VAR_1[VAR_4] & VAR_8) != 0)
   return 0;
  VAR_8 = 0xff;
  VAR_4++;
 }

 return 1;
}
