
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(vortex_t * VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 20; VAR_1++)
  FUNC_0(VAR_0->mmio, 0x24600 + (VAR_1 << 2), 0);
 for (VAR_1 = 0; VAR_1 < 4; VAR_1++)
  FUNC_0(VAR_0->mmio, 0x24650 + (VAR_1 << 2), 0);
}
