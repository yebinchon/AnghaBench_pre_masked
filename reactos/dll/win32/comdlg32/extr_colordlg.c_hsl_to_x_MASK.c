
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0, VAR_4;


 VAR_4 = (256 * FUNC_0(120,VAR_2)) / 120;
 if (VAR_0 < 80)
  VAR_3 = 0;
 else
  if (VAR_0 < 120)
  {
   VAR_3 = (VAR_0 - 80) * VAR_4;
   VAR_3 /= 40;
  }
  else
   if (VAR_0 < 200)
    VAR_3 = VAR_4;
   else
    {
     VAR_3= (240 - VAR_0) * VAR_4;
     VAR_3 /= 40;
    }
 VAR_3 = VAR_3 - VAR_4 / 2;


 VAR_3 = VAR_4 / 2 + (VAR_1 * VAR_3) / 240;


 if (VAR_2 > 120 && VAR_3 < 256)
  VAR_3 += ((VAR_2 - 120) * (256 - VAR_3)) / 120;

 return FUNC_0(VAR_3, 255);
}
