
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int gs_indexbuffer_t ;
struct TYPE_3__ {size_t (* gs_indexbuffer_get_num_indices ) (int const*) ;} ;
struct TYPE_4__ {TYPE_1__ exports; } ;


 int FUNC_0 (char*,int const*) ;
 size_t FUNC_1 (int const*) ;
 TYPE_2__* VAR_0 ;

size_t FUNC_2(const gs_indexbuffer_t *VAR_1)
{
 if (!FUNC_0("gs_indexbuffer_get_num_indices", VAR_1))
  return 0;

 return VAR_0->exports.gs_indexbuffer_get_num_indices(
  VAR_1);
}
