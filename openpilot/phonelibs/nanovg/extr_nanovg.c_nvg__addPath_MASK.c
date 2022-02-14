
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* cache; } ;
struct TYPE_8__ {int winding; int first; } ;
struct TYPE_7__ {int npaths; int cpaths; int npoints; TYPE_2__* paths; } ;
typedef TYPE_2__ NVGpath ;
typedef TYPE_3__ NVGcontext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_2(NVGcontext* VAR_1)
{
 NVGpath* VAR_2;
 if (VAR_1->cache->npaths+1 > VAR_1->cache->cpaths) {
  NVGpath* VAR_3;
  int VAR_4 = VAR_1->cache->npaths+1 + VAR_1->cache->cpaths/2;
  VAR_3 = (NVGpath*)FUNC_1(VAR_1->cache->paths, sizeof(NVGpath)*VAR_4);
  if (VAR_3 == ((void*)0)) return;
  VAR_1->cache->paths = VAR_3;
  VAR_1->cache->cpaths = VAR_4;
 }
 VAR_2 = &VAR_1->cache->paths[VAR_1->cache->npaths];
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->first = VAR_1->cache->npoints;
 VAR_2->winding = VAR_0;

 VAR_1->cache->npaths++;
}
