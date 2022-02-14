
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* (* device_preprocessor_name ) () ;} ;
struct TYPE_5__ {TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*) ;
 char const* FUNC_1 () ;
 TYPE_2__* VAR_0 ;

const char *FUNC_2(void)
{
 graphics_t *VAR_1 = VAR_0;

 if (!FUNC_0("gs_preprocessor_name"))
  return ((void*)0);

 return VAR_1->exports.device_preprocessor_name();
}
