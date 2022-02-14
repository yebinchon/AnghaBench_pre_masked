
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xtalk_gains_t ;
struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_1(vortex_t * VAR_1, xtalk_gains_t const VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(VAR_1->mmio, 0x244D0 + (VAR_3 * 4), VAR_2[VAR_3]);
 }
}
