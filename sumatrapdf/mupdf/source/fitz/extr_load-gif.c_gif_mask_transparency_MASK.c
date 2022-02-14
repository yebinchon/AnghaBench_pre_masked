
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {unsigned char* mask; unsigned int height; unsigned int width; int pix; } ;
typedef int fz_context ;


 unsigned char* FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, struct info *VAR_1)
{
 unsigned char *VAR_2 = VAR_1->mask;
 unsigned char *VAR_3 = FUNC_0(VAR_0, VAR_1->pix);
 unsigned int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->height; VAR_5++)
  for (VAR_4 = 0; VAR_4 < VAR_1->width; VAR_4++, VAR_2++, VAR_3 += 4)
   if (*VAR_2 == 0x00)
    VAR_3[3] = 0;
}
