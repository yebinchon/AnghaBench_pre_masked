
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* cache; int distTol; } ;
struct TYPE_14__ {scalar_t__ count; } ;
struct TYPE_13__ {float x; float y; int flags; } ;
struct TYPE_12__ {scalar_t__ npoints; int cpoints; TYPE_2__* points; } ;
typedef TYPE_2__ NVGpoint ;
typedef TYPE_3__ NVGpath ;
typedef TYPE_4__ NVGcontext ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 TYPE_3__* FUNC_1 (TYPE_4__*) ;
 TYPE_2__* FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (float,float,float,float,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_5(NVGcontext* VAR_0, float VAR_1, float VAR_2, int VAR_3)
{
 NVGpath* VAR_4 = FUNC_1(VAR_0);
 NVGpoint* VAR_5;
 if (VAR_4 == ((void*)0)) return;

 if (VAR_4->count > 0 && VAR_0->cache->npoints > 0) {
  VAR_5 = FUNC_2(VAR_0);
  if (FUNC_3(VAR_5->x,VAR_5->y, VAR_1,VAR_2, VAR_0->distTol)) {
   VAR_5->flags |= VAR_3;
   return;
  }
 }

 if (VAR_0->cache->npoints+1 > VAR_0->cache->cpoints) {
  NVGpoint* VAR_6;
  int VAR_7 = VAR_0->cache->npoints+1 + VAR_0->cache->cpoints/2;
  VAR_6 = (NVGpoint*)FUNC_4(VAR_0->cache->points, sizeof(NVGpoint)*VAR_7);
  if (VAR_6 == ((void*)0)) return;
  VAR_0->cache->points = VAR_6;
  VAR_0->cache->cpoints = VAR_7;
 }

 VAR_5 = &VAR_0->cache->points[VAR_0->cache->npoints];
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->x = VAR_1;
 VAR_5->y = VAR_2;
 VAR_5->flags = (unsigned char)VAR_3;

 VAR_0->cache->npoints++;
 VAR_4->count++;
}
