
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ audio_mix; scalar_t__ audio_render; } ;
struct TYPE_8__ {int audio_pending; int audio_ts; TYPE_1__ info; int ** audio_output_buf; } ;
typedef TYPE_2__ obs_source_t ;


 int FUNC_0 (TYPE_2__*,size_t,size_t) ;
 int FUNC_1 (TYPE_2__*,int ,size_t,size_t) ;
 int FUNC_2 (TYPE_2__*,int ,size_t,size_t,size_t) ;

void FUNC_3(obs_source_t *VAR_0, uint32_t VAR_1,
        size_t VAR_2, size_t VAR_3, size_t VAR_4)
{
 if (!VAR_0->audio_output_buf[0][0]) {
  VAR_0->audio_pending = 1;
  return;
 }

 if (VAR_0->info.audio_render) {
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  return;
 }

 if (VAR_0->info.audio_mix) {
  FUNC_0(VAR_0, VAR_2, VAR_3);
 }

 if (!VAR_0->audio_ts) {
  VAR_0->audio_pending = 1;
  return;
 }

 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
