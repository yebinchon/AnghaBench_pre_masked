
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* device_debug_marker_begin ) (int ,char const*,float const*) ;} ;
struct TYPE_4__ {int device; TYPE_1__ exports; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,float const*) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(const float VAR_1[4], const char *VAR_2)
{
 if (!FUNC_0("gs_debug_marker_begin"))
  return;

 if (!VAR_2)
  VAR_2 = "(null)";

 VAR_0->exports.device_debug_marker_begin(
  VAR_0->device, VAR_2, VAR_1);
}
