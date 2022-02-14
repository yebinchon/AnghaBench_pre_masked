
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cache; } ;
struct TYPE_4__ {int npoints; int * points; } ;
typedef int NVGpoint ;
typedef TYPE_2__ NVGcontext ;



__attribute__((used)) static NVGpoint* FUNC_0(NVGcontext* VAR_0)
{
 if (VAR_0->cache->npoints > 0)
  return &VAR_0->cache->points[VAR_0->cache->npoints-1];
 return ((void*)0);
}
