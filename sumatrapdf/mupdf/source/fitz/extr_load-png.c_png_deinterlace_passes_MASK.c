
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int depth; int n; int width; int height; } ;
typedef int fz_context ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static void
FUNC_0(fz_context *VAR_4, struct info *VAR_5, unsigned int *VAR_6, unsigned int *VAR_7, unsigned int *VAR_8)
{
 int VAR_9, VAR_10 = VAR_5->depth * VAR_5->n;
 VAR_8[0] = 0;
 for (VAR_9 = 0; VAR_9 < 7; VAR_9++)
 {
  VAR_6[VAR_9] = (VAR_5->width + VAR_0[VAR_9] - VAR_2[VAR_9] - 1) / VAR_0[VAR_9];
  VAR_7[VAR_9] = (VAR_5->height + VAR_1[VAR_9] - VAR_3[VAR_9] - 1) / VAR_1[VAR_9];
  if (VAR_6[VAR_9] == 0) VAR_7[VAR_9] = 0;
  if (VAR_7[VAR_9] == 0) VAR_6[VAR_9] = 0;
  if (VAR_6[VAR_9] && VAR_7[VAR_9])
   VAR_8[VAR_9 + 1] = VAR_8[VAR_9] + VAR_7[VAR_9] * (1 + (VAR_6[VAR_9] * VAR_10 + 7) / 8);
  else
   VAR_8[VAR_9 + 1] = VAR_8[VAR_9];
 }
}
