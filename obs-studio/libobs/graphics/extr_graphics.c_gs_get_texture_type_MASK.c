
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gs_texture_t ;
struct TYPE_4__ {int (* device_get_texture_type ) (int const*) ;} ;
struct TYPE_5__ {TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;
typedef enum gs_texture_type { ____Placeholder_gs_texture_type } gs_texture_type ;


 int VAR_0 ;
 int FUNC_0 (char*,int const*) ;
 int FUNC_1 (int const*) ;
 TYPE_2__* VAR_1 ;

enum gs_texture_type FUNC_2(const gs_texture_t *VAR_2)
{
 graphics_t *VAR_3 = VAR_1;

 if (!FUNC_0("gs_get_texture_type", VAR_2))
  return VAR_0;

 return VAR_3->exports.device_get_texture_type(VAR_2);
}
