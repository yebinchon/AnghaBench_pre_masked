
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;

__attribute__((used)) static void
FUNC_0(unsigned char *VAR_2, int VAR_3)
{
 unsigned short VAR_4 = 1;

 for (int VAR_5 = VAR_3 - 1; VAR_5 >= 0; --VAR_5)
 {
  unsigned char VAR_6 = ~VAR_2[VAR_5];

  VAR_4 = VAR_6 + VAR_4;
  VAR_6 = VAR_4 & VAR_1;
  VAR_4 >>= VAR_0;

  VAR_2[VAR_5] = VAR_6;
 }


}
