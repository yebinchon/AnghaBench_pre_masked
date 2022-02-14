
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct ffmpeg_muxer {scalar_t__ stop_ts; scalar_t__ save_ts; int mux_thread_joinable; int mux_thread; int muxing; int keyframes; TYPE_1__ packets; int cur_size; int cur_time; } ;
struct encoder_packet {scalar_t__ sys_dts_usec; scalar_t__ type; scalar_t__ keyframe; scalar_t__ size; int dts_usec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ffmpeg_muxer*) ;
 int FUNC_1 (TYPE_1__*,struct encoder_packet*,int) ;
 int FUNC_2 (struct ffmpeg_muxer*,int ) ;
 int FUNC_3 (struct encoder_packet*,struct encoder_packet*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct ffmpeg_muxer*,struct encoder_packet*) ;
 int FUNC_7 (struct ffmpeg_muxer*) ;
 scalar_t__ FUNC_8 (struct ffmpeg_muxer*) ;

__attribute__((used)) static void FUNC_9(void *VAR_2, struct encoder_packet *VAR_3)
{
 struct ffmpeg_muxer *VAR_4 = VAR_2;
 struct encoder_packet VAR_5;

 if (!FUNC_0(VAR_4))
  return;


 if (!VAR_3) {
  FUNC_2(VAR_4, VAR_1);
  return;
 }

 if (FUNC_8(VAR_4)) {
  if (VAR_3->sys_dts_usec >= VAR_4->stop_ts) {
   FUNC_2(VAR_4, 0);
   return;
  }
 }

 FUNC_3(&VAR_5, VAR_3);
 FUNC_6(VAR_4, &VAR_5);

 if (!VAR_4->packets.size)
  VAR_4->cur_time = VAR_5.dts_usec;
 VAR_4->cur_size += VAR_5.size;

 FUNC_1(&VAR_4->packets, VAR_3, sizeof(*VAR_3));

 if (VAR_3->type == VAR_0 && VAR_3->keyframe)
  VAR_4->keyframes++;

 if (VAR_4->save_ts && VAR_3->sys_dts_usec >= VAR_4->save_ts) {
  if (FUNC_4(&VAR_4->muxing))
   return;

  if (VAR_4->mux_thread_joinable) {
   FUNC_5(VAR_4->mux_thread, ((void*)0));
   VAR_4->mux_thread_joinable = 0;
  }

  VAR_4->save_ts = 0;
  FUNC_7(VAR_4);
 }
}
