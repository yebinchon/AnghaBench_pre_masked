
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t num; struct encoder_packet* array; } ;
struct TYPE_3__ {int name; } ;
struct obs_output {int received_audio; TYPE_2__ interleaved_packets; int highest_video_ts; int highest_audio_ts; TYPE_1__ context; int * audio_offsets; int video_offset; } ;
struct encoder_packet {scalar_t__ dts_usec; int dts; int pts; } ;
typedef long long int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct obs_output*,struct encoder_packet*) ;
 int FUNC_1 (int ,char*,int ,long long,long long,long long) ;
 int FUNC_2 (struct obs_output*,size_t) ;
 struct encoder_packet* FUNC_3 (struct obs_output*,int ,size_t) ;
 int FUNC_4 (struct obs_output*,struct encoder_packet**,struct encoder_packet**,size_t) ;
 size_t FUNC_5 (struct obs_output*) ;
 size_t FUNC_6 (struct obs_output*) ;

__attribute__((used)) static bool FUNC_7(struct obs_output *VAR_3)
{
 struct encoder_packet *VAR_4;
 struct encoder_packet *VAR_5[VAR_1];
 struct encoder_packet *VAR_6[VAR_1];
 size_t VAR_7 = FUNC_6(VAR_3);
 size_t VAR_8;

 if (!FUNC_4(VAR_3, &VAR_4, VAR_5, VAR_7))
  return 0;

 for (size_t VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  VAR_6[VAR_9] =
   FUNC_3(VAR_3, VAR_2, VAR_9);


 for (size_t VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  if (VAR_6[VAR_10]->dts_usec < VAR_4->dts_usec) {
   VAR_3->received_audio = 0;
   return 0;
  }
 }


 VAR_8 = FUNC_5(VAR_3);
 if (VAR_8) {
  FUNC_2(VAR_3, VAR_8);
  if (!FUNC_4(VAR_3, &VAR_4, VAR_5,
       VAR_7))
   return 0;
 }


 VAR_3->video_offset = VAR_4->pts;
 for (size_t VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
  VAR_3->audio_offsets[VAR_11] = VAR_5[VAR_11]->dts;
 VAR_3->highest_audio_ts -= VAR_5[0]->dts_usec;
 VAR_3->highest_video_ts -= VAR_4->dts_usec;


 for (size_t VAR_12 = 0; VAR_12 < VAR_3->interleaved_packets.num; VAR_12++) {
  struct encoder_packet *VAR_13 =
   &VAR_3->interleaved_packets.array[VAR_12];
  FUNC_0(VAR_3, VAR_13);
 }

 return 1;
}
