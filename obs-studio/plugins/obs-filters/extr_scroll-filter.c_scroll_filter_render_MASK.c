
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vec2 {int dummy; } ;
struct scroll_filter_data {int effect; int context; int sampler; int param_image; int param_mul; struct vec2 offset; int param_add; struct vec2 size_i; scalar_t__ cy; scalar_t__ limit_cy; scalar_t__ cx; scalar_t__ limit_cx; } ;
typedef int obs_source_t ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct vec2*) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct vec2*,float,float) ;
 int FUNC_10 (struct vec2*) ;

__attribute__((used)) static void FUNC_11(void *VAR_2, gs_effect_t *VAR_3)
{
 struct scroll_filter_data *VAR_4 = VAR_2;
 struct vec2 VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;

 obs_source_t *VAR_10 = FUNC_3(VAR_4->context);
 VAR_6 = FUNC_5(VAR_10);
 VAR_7 = FUNC_4(VAR_10);

 VAR_8 = VAR_4->limit_cx ? VAR_4->cx : VAR_6;
 VAR_9 = VAR_4->limit_cy ? VAR_4->cy : VAR_7;

 if (VAR_6 && VAR_7) {
  FUNC_9(&VAR_4->size_i, 1.0f / (float)VAR_6,
    1.0f / (float)VAR_7);
 } else {
  FUNC_10(&VAR_4->size_i);
  FUNC_8(VAR_4->context);
  return;
 }

 FUNC_9(&VAR_5, (float)VAR_8 / (float)VAR_6,
   (float)VAR_9 / (float)VAR_7);

 if (!FUNC_6(VAR_4->context, VAR_0,
          VAR_1))
  return;

 FUNC_2(VAR_4->param_add, &VAR_4->offset);
 FUNC_2(VAR_4->param_mul, &VAR_5);

 FUNC_1(VAR_4->param_image, VAR_4->sampler);

 FUNC_7(VAR_4->context, VAR_4->effect, VAR_8, VAR_9);

 FUNC_0(VAR_3);
}
