
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gs_sparam_t ;
struct TYPE_4__ {int (* gs_shader_set_val ) (int *,void const*,size_t) ;} ;
struct TYPE_5__ {TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*,int *,void const*) ;
 int FUNC_1 (int *,void const*,size_t) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(gs_sparam_t *VAR_1, const void *VAR_2, size_t VAR_3)
{
 graphics_t *VAR_4 = VAR_0;

 if (!FUNC_0("gs_shader_set_val", VAR_1, VAR_2))
  return;

 VAR_4->exports.gs_shader_set_val(VAR_1, VAR_2, VAR_3);
}
