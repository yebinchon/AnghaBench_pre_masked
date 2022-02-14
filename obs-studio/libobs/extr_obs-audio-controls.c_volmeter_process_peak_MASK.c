
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct audio_data {int frames; scalar_t__* data; } ;
struct TYPE_4__ {double* peak; int peak_meter_type; int * prev_samples; } ;
typedef TYPE_1__ obs_volmeter_t ;
typedef int __m128 ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 float FUNC_1 (int ,float*,int) ;
 float FUNC_2 (int ,float*,int) ;
 int FUNC_3 (char*,int,float*) ;
 int FUNC_4 (TYPE_1__*,int,float*,int) ;

__attribute__((used)) static void FUNC_5(obs_volmeter_t *VAR_1,
      const struct audio_data *VAR_2,
      int VAR_3)
{
 int VAR_4 = VAR_2->frames;
 int VAR_5 = 0;
 for (int VAR_6 = 0; VAR_5 < VAR_3; VAR_6++) {
  float *VAR_7 = (float *)VAR_2->data[VAR_6];
  if (!VAR_7) {
   continue;
  }
  if (((uintptr_t)VAR_7 & 0xf) > 0) {
   FUNC_3("Audio plane %i is not aligned %p skipping "
          "peak volume measurement.\n",
          VAR_6, VAR_7);
   VAR_1->peak[VAR_5] = 1.0;
   VAR_5++;
   continue;
  }



  __m128 VAR_8 =
   FUNC_0(VAR_1->prev_samples[VAR_5]);

  float VAR_9;
  switch (VAR_1->peak_meter_type) {
  case 128:
   VAR_9 = FUNC_2(VAR_8, VAR_7,
          VAR_4);
   break;

  case 129:
  default:
   VAR_9 = FUNC_1(VAR_8, VAR_7,
            VAR_4);
   break;
  }

  FUNC_4(VAR_1, VAR_5,
         VAR_7, VAR_4);

  VAR_1->peak[VAR_5] = VAR_9;

  VAR_5++;
 }


 for (; VAR_5 < VAR_0; VAR_5++) {
  VAR_1->peak[VAR_5] = 0.0;
 }
}
