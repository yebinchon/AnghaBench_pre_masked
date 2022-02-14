
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;
struct TYPE_5__ {int source; int slice; scalar_t__ vortex; } ;
typedef TYPE_2__ a3dsrc_t ;
typedef int * a3d_ItdDline_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(a3dsrc_t * VAR_2, a3d_ItdDline_t const VAR_3)
{
 vortex_t *VAR_4 = (vortex_t *) (VAR_2->vortex);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_1(VAR_4->mmio,
   FUNC_0(VAR_2->slice, VAR_2->source,
      VAR_0) + (VAR_5 << 2), VAR_3[VAR_5]);
}
