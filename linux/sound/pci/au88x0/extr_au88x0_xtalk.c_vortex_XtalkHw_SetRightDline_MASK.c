
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int* xtalk_dline_t ;
struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void
FUNC_1(vortex_t * VAR_0, xtalk_dline_t const VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 0x20; VAR_2++) {
  FUNC_0(VAR_0->mmio, 0x24100 + (VAR_2 << 2), VAR_1[VAR_2] & 0xffff);
  FUNC_0(VAR_0->mmio, 0x24180 + (VAR_2 << 2), VAR_1[VAR_2] >> 0x10);
 }
}
