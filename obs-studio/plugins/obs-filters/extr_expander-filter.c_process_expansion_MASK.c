
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct expander_data {float attack_gain; float release_gain; scalar_t__ gaindB_len; float** gaindB; size_t num_channels; float threshold; float slope; float* gaindB_buf; float output_gain; int ** envelope_buf; } ;


 int VAR_0 ;
 float FUNC_0 (int ) ;
 float FUNC_1 (float,float) ;
 int FUNC_2 (int ,float) ;
 int FUNC_3 (float*,int ,scalar_t__) ;
 float FUNC_4 (int ) ;
 int FUNC_5 (struct expander_data*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_6(struct expander_data *VAR_1, float **VAR_2,
         uint32_t VAR_3)
{
 const float VAR_4 = VAR_1->attack_gain;
 const float VAR_5 = VAR_1->release_gain;

 if (VAR_1->gaindB_len < VAR_3)
  FUNC_5(VAR_1, VAR_3);
 for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_3(VAR_1->gaindB[VAR_6], 0,
         VAR_3 * sizeof(VAR_1->gaindB[VAR_6][0]));

 for (size_t VAR_7 = 0; VAR_7 < VAR_1->num_channels; VAR_7++) {
  for (size_t VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {

   float VAR_9 = FUNC_4(VAR_1->envelope_buf[VAR_7][VAR_8]);
   float VAR_10 =
    VAR_1->threshold - VAR_9 > 0.0f
     ? FUNC_1(VAR_1->slope * (VAR_1->threshold -
            VAR_9),
      -60.0f)
     : 0.0f;

   if (VAR_8 > 0) {
    if (VAR_10 > VAR_1->gaindB[VAR_7][VAR_8 - 1])
     VAR_1->gaindB[VAR_7][VAR_8] =
      VAR_4 *
       VAR_1->gaindB[VAR_7][VAR_8 - 1] +
      (1.0f - VAR_4) * VAR_10;
    else
     VAR_1->gaindB[VAR_7][VAR_8] =
      VAR_5 *
       VAR_1->gaindB[VAR_7][VAR_8 - 1] +
      (1.0f - VAR_5) * VAR_10;
   } else {
    if (VAR_10 > VAR_1->gaindB_buf[VAR_7])
     VAR_1->gaindB[VAR_7][VAR_8] =
      VAR_4 *
       VAR_1->gaindB_buf[VAR_7] +
      (1.0f - VAR_4) * VAR_10;
    else
     VAR_1->gaindB[VAR_7][VAR_8] =
      VAR_5 *
       VAR_1->gaindB_buf[VAR_7] +
      (1.0f - VAR_5) * VAR_10;
   }

   VAR_10 = FUNC_0(FUNC_2(0, VAR_1->gaindB[VAR_7][VAR_8]));
   if (VAR_2[VAR_7])
    VAR_2[VAR_7][VAR_8] *= VAR_10 * VAR_1->output_gain;
  }
  VAR_1->gaindB_buf[VAR_7] = VAR_1->gaindB[VAR_7][VAR_3 - 1];
 }
}
