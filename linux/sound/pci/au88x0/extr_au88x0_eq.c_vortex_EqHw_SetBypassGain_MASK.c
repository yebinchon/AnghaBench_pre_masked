
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ this08; } ;
struct TYPE_5__ {TYPE_3__ this04; } ;
struct TYPE_6__ {int mmio; TYPE_1__ eq; } ;
typedef TYPE_2__ vortex_t ;
typedef int u16 ;
typedef TYPE_3__ eqhw_t ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(vortex_t * VAR_0, u16 VAR_1, u16 VAR_2)
{
 eqhw_t *VAR_3 = &(VAR_0->eq.this04);
 if (VAR_3->this08 == 0) {
  FUNC_0(VAR_0->mmio, 0x2b3d4, VAR_1);
  FUNC_0(VAR_0->mmio, 0x2b3ec, VAR_2);
 } else {
  FUNC_0(VAR_0->mmio, 0x2b3d4, FUNC_1(VAR_1));
  FUNC_0(VAR_0->mmio, 0x2b3ec, FUNC_1(VAR_2));
 }
}
