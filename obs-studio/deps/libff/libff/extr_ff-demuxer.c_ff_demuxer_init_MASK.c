
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int is_hw_decoding; int video_packet_queue_size; int audio_packet_queue_size; int video_frame_queue_size; int audio_frame_queue_size; int frame_drop; } ;
struct TYPE_3__ {int sync_type; } ;
struct ff_demuxer {TYPE_2__ options; TYPE_1__ clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ff_demuxer* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

struct ff_demuxer *FUNC_5()
{
 struct ff_demuxer *VAR_6;

 FUNC_1();
 FUNC_2();
 FUNC_3();
 FUNC_4();

 VAR_6 = FUNC_0(sizeof(struct ff_demuxer));
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->clock.sync_type = VAR_3;
 VAR_6->options.frame_drop = VAR_2;
 VAR_6->options.audio_frame_queue_size = VAR_0;
 VAR_6->options.video_frame_queue_size = VAR_4;
 VAR_6->options.audio_packet_queue_size = VAR_1;
 VAR_6->options.video_packet_queue_size = VAR_5;
 VAR_6->options.is_hw_decoding = 0;

 return VAR_6;
}
