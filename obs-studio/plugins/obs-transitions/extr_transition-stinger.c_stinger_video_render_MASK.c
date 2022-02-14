
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct stinger_info {float transition_point; int media_source; int source; } ;
typedef int gs_effect_t ;
typedef enum obs_transition_target { ____Placeholder_obs_transition_target } obs_transition_target ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (float,float,float) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 float FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(void *VAR_2, gs_effect_t *VAR_3)
{
 struct stinger_info *VAR_4 = VAR_2;

 float VAR_5 = FUNC_7(VAR_4->source);
 bool VAR_6 = VAR_5 < VAR_4->transition_point;

 enum obs_transition_target VAR_7 = VAR_6 ? VAR_0
        : VAR_1;

 if (!FUNC_8(VAR_4->source, VAR_7))
  return;



 float VAR_8 = (float)FUNC_5(VAR_4->source);
 float VAR_9 = (float)FUNC_4(VAR_4->source);
 uint32_t VAR_10 = FUNC_5(VAR_4->media_source);
 uint32_t VAR_11 = FUNC_4(VAR_4->media_source);

 if (!VAR_10 || !VAR_11)
  return;

 float VAR_12 = VAR_8 / (float)VAR_10;
 float VAR_13 = VAR_9 / (float)VAR_11;

 FUNC_2();
 FUNC_3(VAR_12, VAR_13, 1.0f);
 FUNC_6(VAR_4->media_source);
 FUNC_1();

 FUNC_0(VAR_3);
}
