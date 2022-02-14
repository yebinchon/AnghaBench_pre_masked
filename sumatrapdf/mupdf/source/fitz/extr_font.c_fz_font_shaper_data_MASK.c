
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_shaper_data_t ;
struct TYPE_3__ {int shaper_data; } ;
typedef TYPE_1__ fz_font ;
typedef int fz_context ;



fz_shaper_data_t *FUNC_0(fz_context *VAR_0, fz_font *VAR_1)
{
 return VAR_1 ? &VAR_1->shaper_data : ((void*)0);
}
