
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ts_info {scalar_t__ start; scalar_t__ end; } ;
struct audio_output_data {float** data; } ;
struct TYPE_3__ {scalar_t__ audio_ts; float*** audio_output_buf; } ;
typedef TYPE_1__ obs_source_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (size_t,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct audio_output_data *VAR_2,
        obs_source_t *VAR_3, size_t VAR_4,
        size_t VAR_5, struct ts_info *VAR_6)
{
 size_t VAR_7 = VAR_0;
 size_t VAR_8 = 0;

 if (VAR_3->audio_ts < VAR_6->start || VAR_6->end <= VAR_3->audio_ts)
  return;

 if (VAR_3->audio_ts != VAR_6->start) {
  VAR_8 = FUNC_0(
   VAR_5, VAR_3->audio_ts - VAR_6->start);
  if (VAR_8 == VAR_0)
   return;

  VAR_7 -= VAR_8;
 }

 for (size_t VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  for (size_t VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   register float *VAR_11 = VAR_2[VAR_9].data[VAR_10];
   register float *VAR_12 =
    VAR_3->audio_output_buf[VAR_9][VAR_10];
   register float *VAR_13;

   VAR_11 += VAR_8;
   VAR_13 = VAR_12 + VAR_7;

   while (VAR_12 < VAR_13)
    *(VAR_11++) += *(VAR_12++);
  }
 }
}
