
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {TYPE_2__* cur_swap; } ;
typedef TYPE_3__ gs_device_t ;
struct TYPE_5__ {scalar_t__ cy; scalar_t__ cx; } ;
struct TYPE_6__ {TYPE_1__ info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

void FUNC_1(const gs_device_t *VAR_1, uint32_t *VAR_2, uint32_t *VAR_3)
{
 if (VAR_1->cur_swap) {
  *VAR_2 = VAR_1->cur_swap->info.cx;
  *VAR_3 = VAR_1->cur_swap->info.cy;
 } else {
  FUNC_0(VAR_0, "device_get_size (GL): No active swap");
  *VAR_2 = 0;
  *VAR_3 = 0;
 }
}
