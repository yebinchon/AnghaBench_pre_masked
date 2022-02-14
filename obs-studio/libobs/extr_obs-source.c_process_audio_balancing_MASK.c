
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {scalar_t__ data; } ;
struct obs_source {TYPE_1__ audio_data; } ;
typedef enum obs_balance_type { ____Placeholder_obs_balance_type } obs_balance_type ;


 float VAR_0 ;



 float FUNC_0 (float) ;
 float FUNC_1 (float) ;

__attribute__((used)) static void FUNC_2(struct obs_source *VAR_1, uint32_t VAR_2,
        float VAR_3, enum obs_balance_type VAR_4)
{
 float **VAR_5 = (float **)VAR_1->audio_data.data;

 switch (VAR_4) {
 case 129:
  for (uint32_t VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   VAR_5[0][VAR_6] = VAR_5[0][VAR_6] *
      FUNC_0((1.0f - VAR_3) * (VAR_0 / 2.0f));
   VAR_5[1][VAR_6] =
    VAR_5[1][VAR_6] * FUNC_0(VAR_3 * (VAR_0 / 2.0f));
  }
  break;
 case 128:
  for (uint32_t VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   VAR_5[0][VAR_7] = VAR_5[0][VAR_7] * FUNC_1(1.0f - VAR_3);
   VAR_5[1][VAR_7] = VAR_5[1][VAR_7] * FUNC_1(VAR_3);
  }
  break;
 case 130:
  for (uint32_t VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   VAR_5[0][VAR_8] = VAR_5[0][VAR_8] * (1.0f - VAR_3);
   VAR_5[1][VAR_8] = VAR_5[1][VAR_8] * VAR_3;
  }
  break;
 default:
  break;
 }
}
