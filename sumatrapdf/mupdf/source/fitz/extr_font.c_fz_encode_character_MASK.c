
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** encoding_cache; scalar_t__ ft_face; } ;
typedef TYPE_1__ fz_font ;
typedef int fz_context ;


 int FUNC_0 (scalar_t__,int) ;
 int* FUNC_1 (int *,int,int ) ;
 int VAR_0 ;

int
FUNC_2(fz_context *VAR_1, fz_font *VAR_2, int VAR_3)
{
 if (VAR_2->ft_face)
 {
  if (VAR_3 >= 0 && VAR_3 < 0x10000)
  {
   int VAR_4 = VAR_3 >> 8;
   int VAR_5 = VAR_3 & 0xFF;
   if (!VAR_2->encoding_cache[VAR_4])
   {
    int VAR_6;
    VAR_2->encoding_cache[VAR_4] = FUNC_1(VAR_1, 256, VAR_0);
    for (VAR_6 = 0; VAR_6 < 256; ++VAR_6)
     VAR_2->encoding_cache[VAR_4][VAR_6] = FUNC_0(VAR_2->ft_face, (VAR_4 << 8) + VAR_6);
   }
   return VAR_2->encoding_cache[VAR_4][VAR_5];
  }
  return FUNC_0(VAR_2->ft_face, VAR_3);
 }
 return VAR_3;
}
