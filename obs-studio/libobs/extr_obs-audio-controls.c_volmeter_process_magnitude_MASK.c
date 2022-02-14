
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct audio_data {size_t frames; scalar_t__* data; } ;
struct TYPE_3__ {int * magnitude; } ;
typedef TYPE_1__ obs_volmeter_t ;


 int FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(obs_volmeter_t *VAR_0,
           const struct audio_data *VAR_1,
           int VAR_2)
{
 size_t VAR_3 = VAR_1->frames;

 int VAR_4 = 0;
 for (int VAR_5 = 0; VAR_4 < VAR_2; VAR_5++) {
  float *VAR_6 = (float *)VAR_1->data[VAR_5];
  if (!VAR_6) {
   continue;
  }

  float VAR_7 = 0.0;
  for (size_t VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   float VAR_9 = VAR_6[VAR_8];
   VAR_7 += VAR_9 * VAR_9;
  }
  VAR_0->magnitude[VAR_4] = FUNC_0(VAR_7 / VAR_3);

  VAR_4++;
 }
}
