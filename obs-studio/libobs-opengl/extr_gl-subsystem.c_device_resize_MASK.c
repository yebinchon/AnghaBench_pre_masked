
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_8__ {TYPE_2__* cur_swap; } ;
typedef TYPE_3__ gs_device_t ;
struct TYPE_6__ {void* cy; void* cx; } ;
struct TYPE_7__ {TYPE_1__ info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(gs_device_t *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{

 if (VAR_1->cur_swap) {
  VAR_1->cur_swap->info.cx = VAR_2;
  VAR_1->cur_swap->info.cy = VAR_3;
 } else {
  FUNC_0(VAR_0, "device_resize (GL): No active swap");
 }

 FUNC_1(VAR_1);
}
