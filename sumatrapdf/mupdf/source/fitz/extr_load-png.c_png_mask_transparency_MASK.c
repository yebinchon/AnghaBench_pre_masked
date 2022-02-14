
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct info {int width; int n; int depth; unsigned int height; unsigned char* samples; scalar_t__* trns; } ;
struct TYPE_3__ {unsigned char* samples; unsigned int stride; unsigned int n; } ;
typedef TYPE_1__ fz_pixmap ;


 scalar_t__ FUNC_0 (unsigned char*,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct info *VAR_0, fz_pixmap *VAR_1)
{
 unsigned int VAR_2 = (VAR_0->width * VAR_0->n * VAR_0->depth + 7) / 8;
 unsigned int VAR_3 = VAR_0->depth;
 unsigned int VAR_4 = VAR_0->n;
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_0->height; VAR_6++)
 {
  unsigned char *VAR_9 = VAR_0->samples + (unsigned int)(VAR_6 * VAR_2);
  unsigned char *VAR_10 = VAR_1->samples + (unsigned int)(VAR_6 * VAR_1->stride);
  for (VAR_5 = 0; VAR_5 < VAR_0->width; VAR_5++)
  {
   VAR_8 = 1;
   for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
    if (FUNC_0(VAR_9, VAR_5 * VAR_4 + VAR_7, VAR_3) != VAR_0->trns[VAR_7])
     VAR_8 = 0;
   if (VAR_8)
    VAR_10[VAR_5 * VAR_1->n + VAR_1->n - 1] = 0;
  }
 }
}
