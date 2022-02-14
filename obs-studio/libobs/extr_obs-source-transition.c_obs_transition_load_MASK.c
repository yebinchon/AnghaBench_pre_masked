
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_12__ {char const* name; } ;
struct TYPE_13__ {int* transition_source_active; int transition_mode; int transition_scale_type; void* transition_cy; void* transition_cx; void* transition_alignment; struct TYPE_13__** transition_sources; TYPE_1__ context; } ;
typedef TYPE_2__ obs_source_t ;
typedef int obs_data_t ;
typedef scalar_t__ int64_t ;
typedef enum obs_transition_scale_type { ____Placeholder_obs_transition_scale_type } obs_transition_scale_type ;
typedef enum obs_transition_mode { ____Placeholder_obs_transition_mode } obs_transition_mode ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char const*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,char*) ;
 TYPE_2__* FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

void FUNC_10(obs_source_t *VAR_1, obs_data_t *VAR_2)
{
 const char *VAR_3 = FUNC_3(VAR_2, "transition_source_a");
 int64_t VAR_4 = FUNC_2(VAR_2, "transition_alignment");
 int64_t VAR_5 = FUNC_2(VAR_2, "transition_mode");
 int64_t VAR_6 = FUNC_2(VAR_2, "transition_scale_type");
 int64_t VAR_7 = FUNC_2(VAR_2, "transition_cx");
 int64_t VAR_8 = FUNC_2(VAR_2, "transition_cy");
 obs_source_t *VAR_9 = ((void*)0);

 if (VAR_3) {
  VAR_9 = FUNC_4(VAR_3);
  if (VAR_9) {
   if (!FUNC_5(VAR_1, VAR_9)) {
    FUNC_0(VAR_0,
         "Cannot set transition '%s' "
         "to source '%s' due to "
         "infinite recursion",
         VAR_1->context.name, VAR_3);
    FUNC_6(VAR_9);
    VAR_9 = ((void*)0);
   }
  } else {
   FUNC_0(VAR_0,
        "Failed to find source '%s' for "
        "transition '%s'",
        VAR_3, VAR_1->context.name);
  }
 }

 FUNC_1(VAR_1);
 VAR_1->transition_sources[0] = VAR_9;
 VAR_1->transition_source_active[0] = 1;
 VAR_1->transition_alignment = (uint32_t)VAR_4;
 VAR_1->transition_mode = (enum obs_transition_mode)VAR_5;
 VAR_1->transition_scale_type = (enum obs_transition_scale_type)VAR_6;
 VAR_1->transition_cx = (uint32_t)VAR_7;
 VAR_1->transition_cy = (uint32_t)VAR_8;
 FUNC_9(VAR_1);

 FUNC_8(VAR_1);
 FUNC_7(VAR_1);
}
