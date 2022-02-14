
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;
typedef int u32 ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void
FUNC_1(vortex_t * VAR_0, unsigned short VAR_1,
   unsigned short VAR_2)
{
 u32 VAR_3 = 0;

 VAR_3 &= 0x1FFFFFFF;
 VAR_3 |= 0xA0000000;
 VAR_3 = (VAR_3 & 0xffffE0ff) | ((VAR_1 & 0x1F) << 8);
 VAR_3 = (VAR_3 & 0xfffc1fff) | ((VAR_2 & 0x1F) << 0xd);

 FUNC_0(VAR_0->mmio, 0x24660, VAR_3);
}
