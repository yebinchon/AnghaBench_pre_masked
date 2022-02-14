
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
typedef int* a3d_Hrtf_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(a3dsrc_t * VAR_2, a3d_Hrtf_t const VAR_3, a3d_Hrtf_t const VAR_4)
{
 vortex_t *VAR_5 = (vortex_t *) (VAR_2->vortex);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_1(VAR_5->mmio,
   FUNC_0(VAR_2->slice, VAR_2->source,
      VAR_0) + (VAR_6 << 2),
   (VAR_4[VAR_6] << 0x10) | VAR_3[VAR_6]);
}
