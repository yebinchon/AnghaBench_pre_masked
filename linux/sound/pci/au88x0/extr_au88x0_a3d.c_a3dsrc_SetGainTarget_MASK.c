
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


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,short) ;

__attribute__((used)) static void FUNC_2(a3dsrc_t * VAR_1, short VAR_2, short VAR_3)
{
 vortex_t *VAR_4 = (vortex_t *) (VAR_1->vortex);
 FUNC_1(VAR_4->mmio,
  FUNC_0(VAR_1->slice, VAR_1->source, VAR_0),
  (VAR_3 << 0x10) | VAR_2);
}
