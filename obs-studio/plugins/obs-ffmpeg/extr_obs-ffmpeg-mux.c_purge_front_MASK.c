
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
struct ffmpeg_muxer {scalar_t__ cur_size; scalar_t__ cur_time; TYPE_1__ packets; int keyframes; } ;
struct encoder_packet {scalar_t__ type; scalar_t__ size; scalar_t__ dts_usec; int keyframe; } ;
typedef int pkt ;
typedef scalar_t__ int64_t ;
typedef int first ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct encoder_packet*,int) ;
 int FUNC_1 (TYPE_1__*,struct encoder_packet*,int) ;
 int FUNC_2 (struct encoder_packet*) ;

__attribute__((used)) static bool FUNC_3(struct ffmpeg_muxer *VAR_1)
{
 struct encoder_packet VAR_2;
 bool VAR_3;

 FUNC_1(&VAR_1->packets, &VAR_2, sizeof(VAR_2));

 VAR_3 = VAR_2.type == VAR_0 && VAR_2.keyframe;

 if (VAR_3)
  VAR_1->keyframes--;

 if (!VAR_1->packets.size) {
  VAR_1->cur_size = 0;
  VAR_1->cur_time = 0;
 } else {
  struct encoder_packet VAR_4;
  FUNC_0(&VAR_1->packets, &VAR_4, sizeof(VAR_4));
  VAR_1->cur_time = VAR_4.dts_usec;
  VAR_1->cur_size -= (int64_t)VAR_2.size;
 }

 FUNC_2(&VAR_2);
 return VAR_3;
}
