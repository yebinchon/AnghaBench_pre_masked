
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_muxer {int sent_headers; scalar_t__ stop_ts; } ;
struct encoder_packet {scalar_t__ sys_dts_usec; } ;


 int VAR_0 ;
 int FUNC_0 (struct ffmpeg_muxer*) ;
 int FUNC_1 (struct ffmpeg_muxer*,int ) ;
 int FUNC_2 (struct ffmpeg_muxer*) ;
 scalar_t__ FUNC_3 (struct ffmpeg_muxer*) ;
 int FUNC_4 (struct ffmpeg_muxer*,struct encoder_packet*) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, struct encoder_packet *VAR_2)
{
 struct ffmpeg_muxer *VAR_3 = VAR_1;

 if (!FUNC_0(VAR_3))
  return;


 if (!VAR_2) {
  FUNC_1(VAR_3, VAR_0);
  return;
 }

 if (!VAR_3->sent_headers) {
  if (!FUNC_2(VAR_3))
   return;

  VAR_3->sent_headers = 1;
 }

 if (FUNC_3(VAR_3)) {
  if (VAR_2->sys_dts_usec >= VAR_3->stop_ts) {
   FUNC_1(VAR_3, 0);
   return;
  }
 }

 FUNC_4(VAR_3, VAR_2);
}
