
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_output {int received_video; int received_audio; } ;
struct encoder_packet {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct obs_output *VAR_1,
      struct encoder_packet *VAR_2)
{
 if (VAR_2->type == VAR_0) {
  if (!VAR_1->received_video)
   VAR_1->received_video = 1;
 } else {
  if (!VAR_1->received_audio)
   VAR_1->received_audio = 1;
 }
}
