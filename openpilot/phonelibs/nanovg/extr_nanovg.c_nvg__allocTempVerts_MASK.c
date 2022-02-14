
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cache; } ;
struct TYPE_4__ {int cverts; int * verts; } ;
typedef int NVGvertex ;
typedef TYPE_2__ NVGcontext ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static NVGvertex* FUNC_1(NVGcontext* VAR_0, int VAR_1)
{
 if (VAR_1 > VAR_0->cache->cverts) {
  NVGvertex* VAR_2;
  int VAR_3 = (VAR_1 + 0xff) & ~0xff;
  VAR_2 = (NVGvertex*)FUNC_0(VAR_0->cache->verts, sizeof(NVGvertex)*VAR_3);
  if (VAR_2 == ((void*)0)) return ((void*)0);
  VAR_0->cache->verts = VAR_2;
  VAR_0->cache->cverts = VAR_3;
 }

 return VAR_0->cache->verts;
}
