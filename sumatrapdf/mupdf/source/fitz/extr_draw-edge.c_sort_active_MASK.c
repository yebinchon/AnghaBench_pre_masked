
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ x; } ;
typedef TYPE_1__ fz_edge ;



__attribute__((used)) static void
FUNC_0(fz_edge **VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 fz_edge *VAR_5;

 VAR_2 = 1;
 if (VAR_1 < 14) {
  VAR_2 = 1;
 }
 else {
  while (VAR_2 < VAR_1)
   VAR_2 = 3 * VAR_2 + 1;
  VAR_2 /= 3;
  VAR_2 /= 3;
 }

 while (VAR_2 > 0)
 {
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
   VAR_5 = VAR_0[VAR_3];
   VAR_4 = VAR_3 - VAR_2;
   while (VAR_4 >= 0 && VAR_0[VAR_4]->x > VAR_5->x) {
    VAR_0[VAR_4 + VAR_2] = VAR_0[VAR_4];
    VAR_4 -= VAR_2;
   }
   VAR_0[VAR_4 + VAR_2] = VAR_5;
  }

  VAR_2 /= 3;
 }
}
