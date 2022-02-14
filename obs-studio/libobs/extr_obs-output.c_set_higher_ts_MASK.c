
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_output {scalar_t__ highest_video_ts; scalar_t__ highest_audio_ts; } ;
struct encoder_packet {scalar_t__ type; scalar_t__ dts_usec; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct obs_output *VAR_1,
     struct encoder_packet *VAR_2)
{
 if (VAR_2->type == VAR_0) {
  if (VAR_1->highest_video_ts < VAR_2->dts_usec)
   VAR_1->highest_video_ts = VAR_2->dts_usec;
 } else {
  if (VAR_1->highest_audio_ts < VAR_2->dts_usec)
   VAR_1->highest_audio_ts = VAR_2->dts_usec;
 }
}
