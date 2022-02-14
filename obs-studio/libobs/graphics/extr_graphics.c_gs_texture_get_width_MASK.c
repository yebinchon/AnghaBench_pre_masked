
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int gs_texture_t ;
struct TYPE_4__ {int (* gs_texture_get_width ) (int const*) ;} ;
struct TYPE_5__ {TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*,int const*) ;
 int FUNC_1 (int const*) ;
 TYPE_2__* VAR_0 ;

uint32_t FUNC_2(const gs_texture_t *VAR_1)
{
 graphics_t *VAR_2 = VAR_0;

 if (!FUNC_0("gs_texture_get_width", VAR_1))
  return 0;

 return VAR_2->exports.gs_texture_get_width(VAR_1);
}
