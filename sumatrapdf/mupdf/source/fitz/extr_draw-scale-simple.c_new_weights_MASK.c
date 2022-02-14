
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int count; int max_len; int* index; int n; int patch_l; int flip; } ;
typedef TYPE_1__ fz_weights ;
struct TYPE_7__ {int width; } ;
typedef TYPE_2__ fz_scale_filter ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,int) ;

__attribute__((used)) static fz_weights *
FUNC_2(fz_context *VAR_0, fz_scale_filter *VAR_1, int VAR_2, float VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;
 fz_weights *VAR_9;

 if (VAR_2 > VAR_3)
 {



  VAR_8 = (int)FUNC_0((2 * VAR_1->width * VAR_2)/VAR_3);
  if (VAR_8 > VAR_2)
   VAR_8 = VAR_2;
 }
 else
 {



  VAR_8 = 2 * VAR_1->width;
 }





 VAR_9 = FUNC_1(VAR_0, sizeof(*VAR_9)+(VAR_8+3)*(VAR_4+1)*sizeof(int));
 if (!VAR_9)
  return ((void*)0);
 VAR_9->count = -1;
 VAR_9->max_len = VAR_8;
 VAR_9->index[0] = VAR_4;
 VAR_9->n = VAR_5;
 VAR_9->patch_l = VAR_7;
 VAR_9->flip = VAR_6;
 return VAR_9;
}
