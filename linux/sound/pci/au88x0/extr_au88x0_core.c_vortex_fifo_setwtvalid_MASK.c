
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(vortex_t * VAR_2, int VAR_3, int VAR_4)
{
 FUNC_1(VAR_2->mmio, VAR_1 + (VAR_3 << 2),
  (FUNC_0(VAR_2->mmio, VAR_1 + (VAR_3 << 2)) &
   0xffffffef) | ((VAR_4 & 1) << 4) | VAR_0);
}
