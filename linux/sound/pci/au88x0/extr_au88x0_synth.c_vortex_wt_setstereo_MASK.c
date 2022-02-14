
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;
typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(vortex_t * VAR_0, u32 VAR_1, u32 VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_1(VAR_0->mmio, FUNC_0(VAR_1));
 VAR_3 = (VAR_3 & 0xfe) | (VAR_2 & 1);

 FUNC_2(VAR_0->mmio, FUNC_0(VAR_1), VAR_3);
}
