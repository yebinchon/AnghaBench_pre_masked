
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int alen; TYPE_2__** active; } ;
typedef TYPE_1__ fz_gel ;
struct TYPE_5__ {scalar_t__ h; scalar_t__ e; scalar_t__ adj_up; scalar_t__ adj_down; scalar_t__ xdir; int x; scalar_t__ xmove; } ;
typedef TYPE_2__ fz_edge ;
typedef int fz_context ;



__attribute__((used)) static void
FUNC_0(fz_context *VAR_0, fz_gel *VAR_1, int VAR_2)
{
 fz_edge *VAR_3;
 int VAR_4 = 0;

 while (VAR_4 < VAR_1->alen)
 {
  VAR_3 = VAR_1->active[VAR_4];

  VAR_3->h -= VAR_2;


  if (VAR_3->h == 0) {
   VAR_1->active[VAR_4] = VAR_1->active[--VAR_1->alen];
  }

  else {
   VAR_3->x += VAR_3->xmove;
   VAR_3->e += VAR_3->adj_up;
   if (VAR_3->e > 0) {
    VAR_3->x += VAR_3->xdir;
    VAR_3->e -= VAR_3->adj_down;
   }
   VAR_4 ++;
  }
 }
}
