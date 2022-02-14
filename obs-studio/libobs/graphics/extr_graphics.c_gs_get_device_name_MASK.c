
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* (* device_get_name ) () ;} ;
struct TYPE_4__ {TYPE_1__ exports; } ;


 scalar_t__ FUNC_0 (char*) ;
 char const* FUNC_1 () ;
 TYPE_2__* VAR_0 ;

const char *FUNC_2(void)
{
 return FUNC_0("gs_get_device_name")
         ? VAR_0->exports.device_get_name()
         : ((void*)0);
}
