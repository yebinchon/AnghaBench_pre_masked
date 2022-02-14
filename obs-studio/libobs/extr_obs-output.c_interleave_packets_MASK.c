
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_output {int interleaved_mutex; scalar_t__ received_video; scalar_t__ received_audio; scalar_t__ active_delay_ns; } ;
struct encoder_packet {scalar_t__ type; int dts_usec; int keyframe; int track_idx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct obs_output*) ;
 int FUNC_1 (struct obs_output*,struct encoder_packet*) ;
 int FUNC_2 (struct obs_output*,struct encoder_packet*) ;
 int FUNC_3 (struct obs_output*,int ) ;
 int FUNC_4 (struct obs_output*,struct encoder_packet*) ;
 scalar_t__ FUNC_5 (struct obs_output*) ;
 int FUNC_6 (struct obs_output*,struct encoder_packet*) ;
 int FUNC_7 (struct encoder_packet*,struct encoder_packet*) ;
 int FUNC_8 (struct encoder_packet*) ;
 scalar_t__ FUNC_9 (struct obs_output*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct obs_output*) ;
 int FUNC_13 (struct obs_output*) ;
 int FUNC_14 (struct obs_output*,struct encoder_packet*) ;

__attribute__((used)) static void FUNC_15(void *VAR_2, struct encoder_packet *VAR_3)
{
 struct obs_output *VAR_4 = VAR_2;
 struct encoder_packet VAR_5;
 bool VAR_6;

 if (!FUNC_0(VAR_4))
  return;

 if (VAR_3->type == VAR_0)
  VAR_3->track_idx = FUNC_4(VAR_4, VAR_3);

 FUNC_10(&VAR_4->interleaved_mutex);


 if (!VAR_4->received_video && VAR_3->type == VAR_1 &&
     !VAR_3->keyframe) {
  FUNC_3(VAR_4, VAR_3->dts_usec);
  FUNC_11(&VAR_4->interleaved_mutex);

  if (VAR_4->active_delay_ns)
   FUNC_8(VAR_3);
  return;
 }

 VAR_6 = VAR_4->received_audio && VAR_4->received_video;

 if (VAR_4->active_delay_ns)
  VAR_5 = *VAR_3;
 else
  FUNC_7(&VAR_5, VAR_3);

 if (VAR_6)
  FUNC_1(VAR_4, &VAR_5);
 else
  FUNC_2(VAR_4, VAR_3);

 FUNC_6(VAR_4, &VAR_5);
 FUNC_14(VAR_4, &VAR_5);



 if (VAR_4->received_audio && VAR_4->received_video) {
  if (!VAR_6) {
   if (FUNC_9(VAR_4)) {
    if (FUNC_5(VAR_4)) {
     FUNC_12(VAR_4);
     FUNC_13(VAR_4);
    }
   }
  } else {
   FUNC_13(VAR_4);
  }
 }

 FUNC_11(&VAR_4->interleaved_mutex);
}
