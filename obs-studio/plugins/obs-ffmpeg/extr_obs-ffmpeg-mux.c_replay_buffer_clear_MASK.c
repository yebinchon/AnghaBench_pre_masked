
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; } ;
struct ffmpeg_muxer {scalar_t__ keyframes; scalar_t__ save_ts; scalar_t__ max_time; scalar_t__ max_size; scalar_t__ cur_time; scalar_t__ cur_size; TYPE_1__ packets; } ;
struct encoder_packet {int dummy; } ;
typedef int pkt ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct encoder_packet*,int) ;
 int FUNC_2 (struct encoder_packet*) ;

__attribute__((used)) static inline void FUNC_3(struct ffmpeg_muxer *VAR_0)
{
 while (VAR_0->packets.size > 0) {
  struct encoder_packet VAR_1;
  FUNC_1(&VAR_0->packets, &VAR_1, sizeof(VAR_1));
  FUNC_2(&VAR_1);
 }

 FUNC_0(&VAR_0->packets);
 VAR_0->cur_size = 0;
 VAR_0->cur_time = 0;
 VAR_0->max_size = 0;
 VAR_0->max_time = 0;
 VAR_0->save_ts = 0;
 VAR_0->keyframes = 0;
}
