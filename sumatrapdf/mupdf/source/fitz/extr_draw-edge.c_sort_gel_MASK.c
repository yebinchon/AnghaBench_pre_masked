
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; TYPE_2__* edges; } ;
typedef TYPE_1__ fz_gel ;
struct TYPE_6__ {scalar_t__ y; } ;
typedef TYPE_2__ fz_edge ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_1, fz_gel *VAR_2)
{
 fz_edge *VAR_3 = VAR_2->edges;
 int VAR_4 = VAR_2->len;
 int VAR_5, VAR_6, VAR_7;
 fz_edge VAR_8;


 if (VAR_4 > 10000)
 {
  FUNC_0(VAR_3, VAR_4, sizeof *VAR_3, VAR_0);
  return;
 }


 VAR_5 = 1;
 if (VAR_4 < 14) {
  VAR_5 = 1;
 }
 else {
  while (VAR_5 < VAR_4)
   VAR_5 = 3 * VAR_5 + 1;
  VAR_5 /= 3;
  VAR_5 /= 3;
 }

 while (VAR_5 > 0)
 {
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
   VAR_8 = VAR_3[VAR_6];
   VAR_7 = VAR_6 - VAR_5;

   while (VAR_7 >= 0 && VAR_3[VAR_7].y > VAR_8.y) {
    VAR_3[VAR_7 + VAR_5] = VAR_3[VAR_7];
    VAR_7 -= VAR_5;
   }
   VAR_3[VAR_7 + VAR_5] = VAR_8;
  }
  VAR_5 /= 3;
 }
}
