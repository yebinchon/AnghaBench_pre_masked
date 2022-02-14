
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ff_packet {struct ff_clock* clock; int member_0; } ;
struct TYPE_4__ {int opaque; int sync_clock; int sync_type; } ;
struct ff_demuxer {TYPE_3__* video_decoder; TYPE_2__* audio_decoder; TYPE_1__ clock; } ;
struct ff_clock {int opaque; int sync_clock; int sync_type; } ;
struct TYPE_6__ {int packet_queue; } ;
struct TYPE_5__ {int packet_queue; } ;


 struct ff_clock* FUNC_0 () ;
 int FUNC_1 (struct ff_clock*) ;
 int FUNC_2 (int *,struct ff_packet*) ;

void FUNC_3(struct ff_demuxer *VAR_0)
{
 struct ff_packet VAR_1 = {0};
 struct ff_clock *VAR_2 = FUNC_0();
 VAR_2->sync_type = VAR_0->clock.sync_type;
 VAR_2->sync_clock = VAR_0->clock.sync_clock;
 VAR_2->opaque = VAR_0->clock.opaque;

 VAR_1.clock = VAR_2;

 if (VAR_0->audio_decoder != ((void*)0)) {
  FUNC_1(VAR_2);
  FUNC_2(&VAR_0->audio_decoder->packet_queue,
                   &VAR_1);
 }

 if (VAR_0->video_decoder != ((void*)0)) {
  FUNC_1(VAR_2);
  FUNC_2(&VAR_0->video_decoder->packet_queue,
                   &VAR_1);
 }
}
