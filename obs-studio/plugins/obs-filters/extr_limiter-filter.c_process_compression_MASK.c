
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct limiter_data {float const slope; float const threshold; size_t num_channels; float output_gain; int * envelope_buf; } ;


 float FUNC_0 (int ) ;
 int FUNC_1 (int ,float) ;
 float FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(const struct limiter_data *VAR_0,
           float **VAR_1, uint32_t VAR_2)
{
 for (size_t VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  const float VAR_4 = FUNC_2(VAR_0->envelope_buf[VAR_3]);
  float VAR_5 = VAR_0->slope * (VAR_0->threshold - VAR_4);
  VAR_5 = FUNC_0(FUNC_1(0, VAR_5));

  for (size_t VAR_6 = 0; VAR_6 < VAR_0->num_channels; ++VAR_6) {
   if (VAR_1[VAR_6]) {
    VAR_1[VAR_6][VAR_3] *= VAR_5 * VAR_0->output_gain;
   }
  }
 }
}
