
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* device_debug_marker_end ) (int ) ;} ;
struct TYPE_4__ {int device; TYPE_1__ exports; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(void)
{
 if (!FUNC_0("gs_debug_marker_end"))
  return;

 VAR_0->exports.device_debug_marker_end(
  VAR_0->device);
}
