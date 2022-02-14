
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {unsigned int image_top; unsigned int width; unsigned int image_left; unsigned char* mask; unsigned int height; unsigned int image_width; unsigned char transparent; int has_transparency; int pix; } ;
typedef int fz_context ;


 int FUNC_0 (unsigned char,int ,int) ;
 unsigned char* FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, struct info *VAR_1, int VAR_2, const unsigned char *VAR_3, unsigned int VAR_4, unsigned char *VAR_5)
{
 unsigned int VAR_6 = (VAR_1->image_top + VAR_4) * VAR_1->width + VAR_1->image_left;
 unsigned char *VAR_7 = FUNC_1(VAR_0, VAR_1->pix);
 unsigned char *VAR_8 = &VAR_7[VAR_6 * 4];
 unsigned char *VAR_9 = &VAR_1->mask[VAR_6];
 unsigned int VAR_10, VAR_11;

 if (VAR_1->image_top + VAR_4 >= VAR_1->height)
  return;

 for (VAR_10 = 0; VAR_10 < VAR_1->image_width && VAR_1->image_left + VAR_10 < VAR_1->width; VAR_10++, VAR_5++, VAR_9++, VAR_8 += 4)
  if (!VAR_1->has_transparency || *VAR_5 != VAR_1->transparent)
  {
   *VAR_9 = 0x02;
   for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
    VAR_8[VAR_11] = VAR_3[FUNC_0(*VAR_5, 0, VAR_2 - 1) * 3 + VAR_11];
   VAR_8[3] = 255;
  }
  else if (*VAR_9 == 0x01)
   *VAR_9 = 0x00;
}
