
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct noise_suppress_data {int suppress_level; size_t frames; size_t channels; void** segment_buffers; void** copy_buffers; scalar_t__* states; } ;
typedef int spx_int16_t ;
typedef int obs_data_t ;


 int VAR_0 ;
 int FUNC_0 (struct noise_suppress_data*,scalar_t__,size_t,size_t) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void *VAR_1, obs_data_t *VAR_2)
{
 struct noise_suppress_data *VAR_3 = VAR_1;

 uint32_t VAR_4 = FUNC_2(FUNC_5());
 size_t VAR_5 = FUNC_1(FUNC_5());
 size_t VAR_6 = (size_t)VAR_4 / 100;

 VAR_3->suppress_level = (int)FUNC_4(VAR_2, VAR_0);


 VAR_3->frames = VAR_6;
 VAR_3->channels = VAR_5;


 if (VAR_3->states[0])
  return;


 VAR_3->copy_buffers[0] = FUNC_3(VAR_6 * VAR_5 * sizeof(float));
 VAR_3->segment_buffers[0] =
  FUNC_3(VAR_6 * VAR_5 * sizeof(spx_int16_t));
 for (size_t VAR_7 = 1; VAR_7 < VAR_5; ++VAR_7) {
  VAR_3->copy_buffers[VAR_7] = VAR_3->copy_buffers[VAR_7 - 1] + VAR_6;
  VAR_3->segment_buffers[VAR_7] = VAR_3->segment_buffers[VAR_7 - 1] + VAR_6;
 }

 for (size_t VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  FUNC_0(VAR_3, VAR_4, VAR_8, VAR_6);
}
