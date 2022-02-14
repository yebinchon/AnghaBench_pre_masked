
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_2__* cur_swap; } ;
typedef TYPE_3__ gs_device_t ;
struct TYPE_5__ {int cy; } ;
struct TYPE_6__ {TYPE_1__ info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

uint32_t FUNC_1(const gs_device_t *VAR_1)
{
 if (VAR_1->cur_swap) {
  return VAR_1->cur_swap->info.cy;
 } else {
  FUNC_0(VAR_0, "device_get_height (GL): No active swap");
  return 0;
 }
}
