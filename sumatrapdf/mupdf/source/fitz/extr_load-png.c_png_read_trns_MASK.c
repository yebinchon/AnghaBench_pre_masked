
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int transparency; unsigned char* palette; int n; unsigned char* trns; int depth; scalar_t__ indexed; } ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_1, struct info *VAR_2, const unsigned char *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;

 VAR_2->transparency = 1;

 if (VAR_2->indexed)
 {
  if (VAR_4 > 256)
  {
   FUNC_1(VAR_1, "too many samples in transparency table");
   VAR_4 = 256;
  }
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   VAR_2->palette[VAR_5 * 4 + 3] = VAR_3[VAR_5];

  for (; VAR_5 < 256; VAR_5++)
   VAR_2->palette[VAR_5 * 4 + 3] = 255;
 }
 else
 {
  if (VAR_4 != VAR_2->n * 2)
   FUNC_0(VAR_1, VAR_0, "tRNS chunk is the wrong size");
  for (VAR_5 = 0; VAR_5 < VAR_2->n; VAR_5++)
   VAR_2->trns[VAR_5] = (VAR_3[VAR_5 * 2] << 8 | VAR_3[VAR_5 * 2 + 1]) & ((1 << VAR_2->depth) - 1);
 }
}
