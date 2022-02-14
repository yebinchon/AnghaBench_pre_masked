
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const unsigned char *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
 int VAR_3,
    VAR_4;


 VAR_4 = VAR_2 % 8;


 for (VAR_3 = 0; VAR_3 < VAR_2 / 8; VAR_3++)
 {
  if (VAR_0[VAR_3] != VAR_1[VAR_3])
  {

   VAR_4 = 7;
   break;
  }
 }


 if (VAR_4 != 0)
 {

  unsigned int VAR_5 = VAR_0[VAR_3] ^ VAR_1[VAR_3];


  while ((VAR_5 >> (8 - VAR_4)) != 0)
   VAR_4--;
 }

 return (8 * VAR_3) + VAR_4;
}
