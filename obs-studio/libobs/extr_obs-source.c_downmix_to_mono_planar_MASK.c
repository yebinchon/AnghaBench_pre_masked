
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {scalar_t__ data; } ;
struct obs_source {TYPE_2__ audio_data; } ;
struct TYPE_4__ {int audio; } ;
struct TYPE_6__ {TYPE_1__ audio; } ;


 size_t FUNC_0 (int ) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct obs_source *VAR_1, uint32_t VAR_2)
{
 size_t VAR_3 = FUNC_0(VAR_0->audio.audio);
 const float VAR_4 = 1.0f / (float)VAR_3;
 float **VAR_5 = (float **)VAR_1->audio_data.data;

 for (size_t VAR_6 = 1; VAR_6 < VAR_3; VAR_6++) {
  for (uint32_t VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   VAR_5[0][VAR_7] += VAR_5[VAR_6][VAR_7];
 }

 for (uint32_t VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_5[0][VAR_8] *= VAR_4;

 for (size_t VAR_9 = 1; VAR_9 < VAR_3; VAR_9++) {
  for (uint32_t VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
   VAR_5[VAR_9][VAR_10] = VAR_5[0][VAR_10];
 }
}
