
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;



__attribute__((used)) static void
FUNC_0(uint8 * VAR_0, uint8 * VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 uint8 *VAR_10;

 VAR_6 = 0;
 VAR_10 = VAR_0 + 16;

 for (VAR_4 = 7; VAR_4 >= 0; VAR_4--)
 {

  VAR_3 = 0;
  for (VAR_8 = 0; VAR_8 < 2; VAR_8++)
  {

   VAR_7 = 6;
   while (VAR_7 >= 0)
   {
    VAR_5 = (VAR_0[VAR_6] >> VAR_7) & 3;

    for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
    {
     VAR_1[(VAR_4 * 8 + VAR_3) * VAR_2 + VAR_9] = VAR_10[VAR_5 * VAR_2 + VAR_9];
    }
    VAR_3++;
    VAR_7 -= 2;
   }
   VAR_6++;
  }
 }
}
