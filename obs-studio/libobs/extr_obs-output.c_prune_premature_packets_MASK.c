
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct encoder_packet* array; } ;
struct obs_output {int received_video; int received_audio; TYPE_1__ interleaved_packets; } ;
struct encoder_packet {long long timebase_num; long long timebase_den; scalar_t__ dts_usec; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct obs_output*,int ,size_t) ;
 size_t FUNC_1 (struct obs_output*) ;

__attribute__((used)) static int FUNC_2(struct obs_output *VAR_2)
{
 size_t VAR_3 = FUNC_1(VAR_2);
 struct encoder_packet *VAR_4;
 int VAR_5;
 int VAR_6;
 int64_t VAR_7;
 int64_t VAR_8 = 0;
 int64_t VAR_9 = 0;

 VAR_5 = FUNC_0(VAR_2, VAR_1, 0);
 if (VAR_5 == -1) {
  VAR_2->received_video = 0;
  return -1;
 }

 VAR_6 = VAR_5;
 VAR_4 = &VAR_2->interleaved_packets.array[VAR_5];
 VAR_7 = VAR_4->timebase_num * 1000000LL / VAR_4->timebase_den;

 for (size_t VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  struct encoder_packet *VAR_11;
  int VAR_12;

  VAR_12 = FUNC_0(VAR_2,
             VAR_0, VAR_10);
  if (VAR_12 == -1) {
   VAR_2->received_audio = 0;
   return -1;
  }

  VAR_11 = &VAR_2->interleaved_packets.array[VAR_12];
  if (VAR_12 > VAR_6)
   VAR_6 = VAR_12;

  VAR_9 = VAR_11->dts_usec - VAR_4->dts_usec;
  if (VAR_9 > VAR_8)
   VAR_8 = VAR_9;
 }

 return VAR_9 > VAR_7 ? VAR_6 + 1 : 0;
}
