
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;
struct TYPE_5__ {int slice; scalar_t__ vortex; } ;
typedef TYPE_2__ a3dsrc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(a3dsrc_t * VAR_2)
{
 vortex_t *VAR_3 = (vortex_t *) (VAR_2->vortex);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
  FUNC_0(VAR_3->mmio,
   VAR_0 +
   ((((VAR_2->slice) << 0xb) + VAR_4) << 2), 0);
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  FUNC_0(VAR_3->mmio,
   VAR_1 +
   ((((VAR_2->slice) << 0xb) + VAR_4) << 2), 0);
}
