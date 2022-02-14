
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int this04; } ;
struct TYPE_5__ {TYPE_3__ this04; } ;
struct TYPE_6__ {int mmio; TYPE_1__ eq; } ;
typedef TYPE_2__ vortex_t ;
typedef int u16 ;
typedef TYPE_3__ eqhw_t ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(vortex_t * VAR_0, u16 VAR_1[], u16 VAR_2[])
{
 eqhw_t *VAR_3 = &(VAR_0->eq.this04);
 int VAR_4 = 0, VAR_5;

 FUNC_0(VAR_0->mmio, 0x2b404, VAR_1[0]);
 FUNC_0(VAR_0->mmio, 0x2b408, VAR_1[1]);

 for (VAR_5 = 0; VAR_5 < VAR_3->this04; VAR_5++) {
  FUNC_0(VAR_0->mmio, 0x2b1f4 + (VAR_4 * 0xc), VAR_2[VAR_4]);
  FUNC_0(VAR_0->mmio, 0x2b1f8 + (VAR_4 * 0xc), VAR_2[1 + VAR_4]);
  FUNC_0(VAR_0->mmio, 0x2b1fc + (VAR_4 * 0xc), VAR_2[2 + VAR_4]);
  FUNC_0(VAR_0->mmio, 0x2b200 + (VAR_4 * 0xc), VAR_2[3 + VAR_4]);
  VAR_4 += 4;
 }
}
