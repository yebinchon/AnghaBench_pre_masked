
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec2 {float member_0; float member_1; float x; float y; } ;
struct mask_filter_data {int effect; int context; int color; int target; scalar_t__ lock_aspect; } ;
typedef int obs_source_t ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct vec2*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct vec2*,struct vec2*,struct vec2*) ;
 int FUNC_14 (struct vec2*,struct vec2*,float) ;
 int FUNC_15 (struct vec2*,struct vec2*) ;
 int FUNC_16 (struct vec2*,struct vec2*,struct vec2*) ;

__attribute__((used)) static void FUNC_17(void *VAR_2, gs_effect_t *VAR_3)
{
 struct mask_filter_data *VAR_4 = VAR_2;
 obs_source_t *VAR_5 = FUNC_7(VAR_4->context);
 gs_eparam_t *VAR_6;
 struct vec2 VAR_7 = {0};
 struct vec2 VAR_8 = {1.0f, 1.0f};

 if (!VAR_5 || !VAR_4->target || !VAR_4->effect) {
  FUNC_12(VAR_4->context);
  return;
 }

 if (VAR_4->lock_aspect) {
  struct vec2 VAR_9;
  struct vec2 VAR_10;
  struct vec2 VAR_11;
  float VAR_12;
  float VAR_13;
  bool VAR_14;
  float VAR_15;

  VAR_9.x = (float)FUNC_9(VAR_5);
  VAR_9.y = (float)FUNC_8(VAR_5);
  VAR_10.x = (float)FUNC_6(VAR_4->target);
  VAR_10.y = (float)FUNC_5(VAR_4->target);

  VAR_12 = VAR_9.x / VAR_9.y;
  VAR_13 = VAR_10.x / VAR_10.y;
  VAR_14 = (VAR_12 < VAR_13);

  VAR_15 = VAR_14 ? (VAR_9.x / VAR_10.x)
    : (VAR_9.y / VAR_10.y);

  FUNC_14(&VAR_10, &VAR_10, VAR_15);
  FUNC_13(&VAR_8, &VAR_9, &VAR_10);
  FUNC_14(&VAR_9, &VAR_9, 0.5f);
  FUNC_14(&VAR_11, &VAR_10, 0.5f);
  FUNC_16(&VAR_7, &VAR_9, &VAR_11);
  FUNC_15(&VAR_7, &VAR_7);
  FUNC_13(&VAR_7, &VAR_7, &VAR_10);
 }

 if (!FUNC_10(VAR_4->context, VAR_0,
          VAR_1))
  return;

 VAR_6 = FUNC_1(VAR_4->effect, "target");
 FUNC_2(VAR_6, VAR_4->target);

 VAR_6 = FUNC_1(VAR_4->effect, "color");
 FUNC_4(VAR_6, &VAR_4->color);

 VAR_6 = FUNC_1(VAR_4->effect, "mul_val");
 FUNC_3(VAR_6, &VAR_8);

 VAR_6 = FUNC_1(VAR_4->effect, "add_val");
 FUNC_3(VAR_6, &VAR_7);

 FUNC_11(VAR_4->context, VAR_4->effect, 0, 0);

 FUNC_0(VAR_3);
}
