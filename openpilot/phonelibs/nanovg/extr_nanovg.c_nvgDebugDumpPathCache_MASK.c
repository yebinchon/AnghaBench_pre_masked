
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* cache; } ;
struct TYPE_10__ {int nfill; int nstroke; TYPE_3__* stroke; TYPE_2__* fill; } ;
struct TYPE_9__ {double x; double y; } ;
struct TYPE_8__ {double x; double y; } ;
struct TYPE_7__ {int npaths; TYPE_4__* paths; } ;
typedef TYPE_4__ NVGpath ;
typedef TYPE_5__ NVGcontext ;


 int FUNC_0 (char*,double,...) ;

void FUNC_1(NVGcontext* VAR_0)
{
 const NVGpath* VAR_1;
 int VAR_2, VAR_3;

 FUNC_0("Dumping %d cached paths\n", VAR_0->cache->npaths);
 for (VAR_2 = 0; VAR_2 < VAR_0->cache->npaths; VAR_2++) {
  VAR_1 = &VAR_0->cache->paths[VAR_2];
  FUNC_0(" - Path %d\n", VAR_2);
  if (VAR_1->nfill) {
   FUNC_0("   - fill: %d\n", VAR_1->nfill);
   for (VAR_3 = 0; VAR_3 < VAR_1->nfill; VAR_3++)
    FUNC_0("%f\t%f\n", VAR_1->fill[VAR_3].x, VAR_1->fill[VAR_3].y);
  }
  if (VAR_1->nstroke) {
   FUNC_0("   - stroke: %d\n", VAR_1->nstroke);
   for (VAR_3 = 0; VAR_3 < VAR_1->nstroke; VAR_3++)
    FUNC_0("%f\t%f\n", VAR_1->stroke[VAR_3].x, VAR_1->stroke[VAR_3].y);
  }
 }
}
