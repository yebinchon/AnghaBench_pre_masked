
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vec4 {int dummy; } ;
struct TYPE_3__ {int size; } ;
struct gpu_delay_filter_data {int processed_frame; TYPE_1__ frames; scalar_t__ cy; scalar_t__ cx; int context; int target_valid; } ;
struct frame {int render; } ;
typedef int obs_source_t ;
typedef int gs_effect_t ;
typedef int frame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,struct frame*,int) ;
 int FUNC_2 (TYPE_1__*,struct frame*,int) ;
 int FUNC_3 (struct gpu_delay_filter_data*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,struct vec4*,float,int ) ;
 int FUNC_8 (float,float,float,float,float,float) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int * FUNC_12 (int ) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct vec4*) ;

__attribute__((used)) static void FUNC_19(void *VAR_5, gs_effect_t *VAR_6)
{
 struct gpu_delay_filter_data *VAR_7 = VAR_5;
 obs_source_t *VAR_8 = FUNC_13(VAR_7->context);
 obs_source_t *VAR_9 = FUNC_12(VAR_7->context);

 if (!VAR_7->target_valid || !VAR_8 || !VAR_9 || !VAR_7->frames.size) {
  FUNC_16(VAR_7->context);
  return;
 }

 if (VAR_7->processed_frame) {
  FUNC_3(VAR_7);
  return;
 }

 struct frame VAR_10;
 FUNC_1(&VAR_7->frames, &VAR_10, sizeof(VAR_10));

 FUNC_11(VAR_10.render);

 FUNC_6();
 FUNC_4(VAR_0, VAR_1);

 if (FUNC_9(VAR_10.render, VAR_7->cx, VAR_7->cy)) {
  uint32_t VAR_11 = FUNC_15(VAR_8);
  bool VAR_12 = (VAR_11 & VAR_4) != 0;
  bool VAR_13 = (VAR_11 & VAR_3) != 0;
  struct vec4 VAR_14;

  FUNC_18(&VAR_14);
  FUNC_7(VAR_2, &VAR_14, 0.0f, 0);
  FUNC_8(0.0f, (float)VAR_7->cx, 0.0f, (float)VAR_7->cy, -100.0f,
    100.0f);

  if (VAR_8 == VAR_9 && !VAR_12 && !VAR_13)
   FUNC_14(VAR_8);
  else
   FUNC_17(VAR_8);

  FUNC_10(VAR_10.render);
 }

 FUNC_5();

 FUNC_2(&VAR_7->frames, &VAR_10, sizeof(VAR_10));
 FUNC_3(VAR_7);
 VAR_7->processed_frame = 1;

 FUNC_0(VAR_6);
}
