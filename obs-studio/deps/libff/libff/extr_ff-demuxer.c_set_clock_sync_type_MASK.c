
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sync_type; int * opaque; void* sync_clock; } ;
struct ff_demuxer {TYPE_1__ clock; int * video_decoder; int * audio_decoder; } ;





 void* VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct ff_demuxer *VAR_2)
{
 if (VAR_2->video_decoder == ((void*)0)) {
  if (VAR_2->clock.sync_type == 128)
   VAR_2->clock.sync_type = 130;
 }

 if (VAR_2->audio_decoder == ((void*)0)) {
  if (VAR_2->clock.sync_type == 130)
   VAR_2->clock.sync_type = 128;
 }

 switch (VAR_2->clock.sync_type) {
 case 130:
  VAR_2->clock.sync_clock = VAR_0;
  VAR_2->clock.opaque = VAR_2->audio_decoder;
  break;
 case 128:
  VAR_2->clock.sync_clock = VAR_0;
  VAR_2->clock.opaque = VAR_2->video_decoder;
  break;
 case 129:
  VAR_2->clock.sync_clock = VAR_1;
  VAR_2->clock.opaque = ((void*)0);
  break;
 default:
  return 0;
 }

 return 1;
}
