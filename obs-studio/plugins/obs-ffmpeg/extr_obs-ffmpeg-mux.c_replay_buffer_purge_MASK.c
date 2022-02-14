
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct ffmpeg_muxer {scalar_t__ max_size; int keyframes; scalar_t__ cur_size; scalar_t__ cur_time; scalar_t__ max_time; TYPE_1__ packets; } ;
struct encoder_packet {scalar_t__ dts_usec; scalar_t__ size; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (struct ffmpeg_muxer*) ;

__attribute__((used)) static inline void FUNC_1(struct ffmpeg_muxer *VAR_0,
           struct encoder_packet *VAR_1)
{
 if (VAR_0->max_size) {
  if (!VAR_0->packets.size || VAR_0->keyframes <= 2)
   return;

  while ((VAR_0->cur_size + (int64_t)VAR_1->size) >
         VAR_0->max_size)
   FUNC_0(VAR_0);
 }

 if (!VAR_0->packets.size || VAR_0->keyframes <= 2)
  return;

 while ((VAR_1->dts_usec - VAR_0->cur_time) > VAR_0->max_time)
  FUNC_0(VAR_0);
}
