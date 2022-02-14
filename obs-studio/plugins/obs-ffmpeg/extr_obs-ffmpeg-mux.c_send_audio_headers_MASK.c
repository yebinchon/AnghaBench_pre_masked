
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_muxer {int dummy; } ;
struct encoder_packet {int timebase_den; size_t track_idx; int size; int data; int type; } ;
typedef int obs_encoder_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (struct ffmpeg_muxer*,struct encoder_packet*) ;

__attribute__((used)) static bool FUNC_2(struct ffmpeg_muxer *VAR_1,
          obs_encoder_t *VAR_2, size_t VAR_3)
{
 struct encoder_packet VAR_4 = {
  .type = VAR_0, .timebase_den = 1, .track_idx = VAR_3};

 FUNC_0(VAR_2, &VAR_4.data, &VAR_4.size);
 return FUNC_1(VAR_1, &VAR_4);
}
