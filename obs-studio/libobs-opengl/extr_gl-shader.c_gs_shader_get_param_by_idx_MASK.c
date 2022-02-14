
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int gs_sparam_t ;
struct TYPE_4__ {scalar_t__ num; int * array; } ;
struct TYPE_5__ {TYPE_1__ params; } ;
typedef TYPE_2__ gs_shader_t ;


 int FUNC_0 (int) ;

gs_sparam_t *FUNC_1(gs_shader_t *VAR_0, uint32_t VAR_1)
{
 FUNC_0(VAR_1 < VAR_0->params.num);
 return VAR_0->params.array + VAR_1;
}
