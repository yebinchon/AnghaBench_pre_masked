
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;
typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(vortex_t * VAR_3)
{
 u32 VAR_4;
 int VAR_5;
 FUNC_0(VAR_3->mmio, VAR_2, 0x1ff);







 VAR_4 = VAR_1 + 0x3c;
 for (VAR_5 = 0xf; VAR_5 >= 0; VAR_5--) {
  FUNC_0(VAR_3->mmio, VAR_4, 0);
  VAR_4 -= 4;
 }


 VAR_4 = VAR_0 + 0x54;
 for (VAR_5 = 0x15; VAR_5 >= 0; VAR_5--) {
  FUNC_0(VAR_3->mmio, VAR_4, 0);
  VAR_4 -= 4;
 }
}
