
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int count; } ;
typedef TYPE_1__ fz_weights ;
struct TYPE_16__ {float width; } ;
typedef TYPE_2__ fz_scale_filter ;
struct TYPE_17__ {int src_w; float x; float dst_w; int vertical; int dst_w_int; int patch_l; int patch_r; int n; int flip; TYPE_1__* weights; TYPE_2__* filter; } ;
typedef TYPE_3__ fz_scale_cache ;
typedef int fz_context ;


 int FUNC_0 (TYPE_1__*,int,int,TYPE_2__*,float,float,float,int,float) ;
 int FUNC_1 (float) ;
 int FUNC_2 (TYPE_1__*,int,int,float,float) ;
 int FUNC_3 (float) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_6 (int *,TYPE_2__*,int,float,int,int,int,int) ;
 int FUNC_7 (TYPE_1__*,int,int) ;

__attribute__((used)) static fz_weights *
FUNC_8(fz_context *VAR_0, int VAR_1, float VAR_2, float VAR_3, fz_scale_filter *VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, fz_scale_cache *VAR_11)
{
 fz_weights *VAR_12;
 float VAR_13, VAR_14;
 float VAR_15;
 int VAR_16;

 if (VAR_11)
 {
  if (VAR_11->src_w == VAR_1 && VAR_11->x == VAR_2 && VAR_11->dst_w == VAR_3 &&
   VAR_11->filter == VAR_4 && VAR_11->vertical == VAR_5 &&
   VAR_11->dst_w_int == VAR_6 &&
   VAR_11->patch_l == VAR_7 && VAR_11->patch_r == VAR_8 &&
   VAR_11->n == VAR_9 && VAR_11->flip == VAR_10)
  {
   return VAR_11->weights;
  }
  VAR_11->src_w = VAR_1;
  VAR_11->x = VAR_2;
  VAR_11->dst_w = VAR_3;
  VAR_11->filter = VAR_4;
  VAR_11->vertical = VAR_5;
  VAR_11->dst_w_int = VAR_6;
  VAR_11->patch_l = VAR_7;
  VAR_11->patch_r = VAR_8;
  VAR_11->n = VAR_9;
  VAR_11->flip = VAR_10;
  FUNC_4(VAR_0, VAR_11->weights);
  VAR_11->weights = ((void*)0);
 }

 if (VAR_3 < VAR_1)
 {

  VAR_13 = VAR_3 / VAR_1;
  VAR_14 = 1;
 }
 else
 {

  VAR_13 = 1;
  VAR_14 = VAR_1 / VAR_3;
 }
 VAR_15 = VAR_4->width / VAR_13;
 VAR_12 = FUNC_6(VAR_0, VAR_4, VAR_1, VAR_3, VAR_8-VAR_7, VAR_9, VAR_10, VAR_7);
 if (!VAR_12)
  return ((void*)0);
 for (VAR_16 = VAR_7; VAR_16 < VAR_8; VAR_16++)
 {

  float VAR_17 = (VAR_16 - VAR_2 + 0.5f)*VAR_1/VAR_3 - 0.5f;
  int VAR_18, VAR_19;
  VAR_18 = FUNC_1(VAR_17 - VAR_15);
  VAR_19 = FUNC_3(VAR_17 + VAR_15);
  FUNC_5(VAR_12, VAR_16);
  for (; VAR_18 <= VAR_19; VAR_18++)
  {
   FUNC_0(VAR_12, VAR_16, VAR_18, VAR_4, VAR_2, VAR_13, VAR_14, VAR_1, VAR_3);
  }
  FUNC_2(VAR_12, VAR_16, VAR_6, VAR_2, VAR_3);
  if (VAR_5)
  {
   FUNC_7(VAR_12, VAR_16, VAR_1);
  }
 }
 VAR_12->count++;
 if (VAR_11)
 {
  VAR_11->weights = VAR_12;
 }
 return VAR_12;
}
