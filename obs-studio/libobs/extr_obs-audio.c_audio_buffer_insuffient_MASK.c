
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ audio_render; } ;
struct obs_source {int audio_pending; int audio_ts; TYPE_1__* audio_input_buf; TYPE_2__ info; } ;
struct TYPE_3__ {size_t size; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t,int) ;

__attribute__((used)) static bool FUNC_1(struct obs_source *VAR_1,
        size_t VAR_2, uint64_t VAR_3)
{
 size_t VAR_4 = VAR_0;
 size_t VAR_5;

 if (VAR_1->info.audio_render || VAR_1->audio_pending ||
     !VAR_1->audio_ts) {
  return 0;
 }

 if (VAR_1->audio_ts != VAR_3 && VAR_1->audio_ts != (VAR_3 - 1)) {
  size_t VAR_6 = FUNC_0(
   VAR_2, VAR_1->audio_ts - VAR_3);
  if (VAR_6 >= VAR_0)
   return 0;

  VAR_4 -= VAR_6;
 }

 VAR_5 = VAR_4 * sizeof(float);

 if (VAR_1->audio_input_buf[0].size < VAR_5) {
  VAR_1->audio_pending = 1;
  return 1;
 }

 return 0;
}
