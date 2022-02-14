
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct compressor_data {int const envelope_buf_len; float attack_gain; float release_gain; float** sidechain_buf; float* envelope_buf; size_t num_channels; float envelope; } ;


 float FUNC_0 (float) ;
 float FUNC_1 (float,float) ;
 int FUNC_2 (struct compressor_data*,int const) ;
 int FUNC_3 (float*,int ,int const) ;
 int FUNC_4 (struct compressor_data*,int const) ;

__attribute__((used)) static void FUNC_5(struct compressor_data *VAR_0,
         const uint32_t VAR_1)
{
 if (VAR_0->envelope_buf_len < VAR_1) {
  FUNC_4(VAR_0, VAR_1);
 }

 FUNC_2(VAR_0, VAR_1);

 const float VAR_2 = VAR_0->attack_gain;
 const float VAR_3 = VAR_0->release_gain;
 float **VAR_4 = VAR_0->sidechain_buf;

 FUNC_3(VAR_0->envelope_buf, 0, VAR_1 * sizeof(VAR_0->envelope_buf[0]));
 for (size_t VAR_5 = 0; VAR_5 < VAR_0->num_channels; ++VAR_5) {
  if (!VAR_4[VAR_5])
   continue;

  float *VAR_6 = VAR_0->envelope_buf;
  float VAR_7 = VAR_0->envelope;
  for (uint32_t VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
   const float VAR_9 = FUNC_0(VAR_4[VAR_5][VAR_8]);

   if (VAR_7 < VAR_9) {
    VAR_7 = VAR_9 + VAR_2 * (VAR_7 - VAR_9);
   } else {
    VAR_7 = VAR_9 + VAR_3 * (VAR_7 - VAR_9);
   }
   VAR_6[VAR_8] = FUNC_1(VAR_6[VAR_8], VAR_7);
  }
 }
 VAR_0->envelope = VAR_0->envelope_buf[VAR_1 - 1];
}
