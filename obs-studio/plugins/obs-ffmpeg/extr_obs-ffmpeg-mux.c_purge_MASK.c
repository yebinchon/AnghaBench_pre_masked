
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_muxer {int packets; } ;
struct encoder_packet {scalar_t__ type; scalar_t__ keyframe; } ;
typedef int pkt ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct encoder_packet*,int) ;
 scalar_t__ FUNC_1 (struct ffmpeg_muxer*) ;

__attribute__((used)) static inline void FUNC_2(struct ffmpeg_muxer *VAR_1)
{
 if (FUNC_1(VAR_1)) {
  struct encoder_packet VAR_2;

  for (;;) {
   FUNC_0(&VAR_1->packets, &VAR_2,
          sizeof(VAR_2));
   if (VAR_2.type == VAR_0 && VAR_2.keyframe)
    return;

   FUNC_1(VAR_1);
  }
 }
}
