
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gs_vb_data {int dummy; } ;
typedef int gs_vertbuffer_t ;
struct TYPE_3__ {struct gs_vb_data* (* gs_vertexbuffer_get_data ) (int const*) ;} ;
struct TYPE_4__ {TYPE_1__ exports; } ;


 int FUNC_0 (char*,int const*) ;
 struct gs_vb_data* FUNC_1 (int const*) ;
 TYPE_2__* VAR_0 ;

struct gs_vb_data *FUNC_2(const gs_vertbuffer_t *VAR_1)
{
 if (!FUNC_0("gs_vertexbuffer_get_data", VAR_1))
  return ((void*)0);

 return VAR_0->exports.gs_vertexbuffer_get_data(VAR_1);
}
