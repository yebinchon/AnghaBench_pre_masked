
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_tune_image_decode_fn ;
struct TYPE_5__ {TYPE_1__* tuning; } ;
typedef TYPE_2__ fz_context ;
struct TYPE_4__ {void* image_decode_arg; int * image_decode; } ;


 int * VAR_0 ;

void FUNC_0(fz_context *VAR_1, fz_tune_image_decode_fn *VAR_2, void *VAR_3)
{
 VAR_1->tuning->image_decode = VAR_2 ? VAR_2 : VAR_0;
 VAR_1->tuning->image_decode_arg = VAR_3;
}
