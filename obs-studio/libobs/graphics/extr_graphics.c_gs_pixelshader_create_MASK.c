
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gs_shader_t ;
struct TYPE_4__ {int * (* device_pixelshader_create ) (int ,char const*,char const*,char**) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*,char const*) ;
 int * FUNC_1 (int ,char const*,char const*,char**) ;
 TYPE_2__* VAR_0 ;

gs_shader_t *FUNC_2(const char *VAR_1, const char *VAR_2,
       char **VAR_3)
{
 graphics_t *VAR_4 = VAR_0;

 if (!FUNC_0("gs_pixelshader_create", VAR_1))
  return ((void*)0);

 return VAR_4->exports.device_pixelshader_create(
  VAR_4->device, VAR_1, VAR_2, VAR_3);
}
