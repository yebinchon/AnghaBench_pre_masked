
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int (* encoded_packet ) (int ,struct encoder_packet*) ;} ;
struct obs_output {scalar_t__ active_delay_ns; int total_frames; TYPE_2__ context; TYPE_1__ info; } ;
struct encoder_packet {scalar_t__ type; int track_idx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct obs_output*) ;
 int FUNC_1 (struct obs_output*,struct encoder_packet*) ;
 int FUNC_2 (struct encoder_packet*) ;
 int FUNC_3 (int ,struct encoder_packet*) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, struct encoder_packet *VAR_3)
{
 struct obs_output *VAR_4 = VAR_2;

 if (FUNC_0(VAR_4)) {
  if (VAR_3->type == VAR_0)
   VAR_3->track_idx = FUNC_1(VAR_4, VAR_3);

  VAR_4->info.encoded_packet(VAR_4->context.data, VAR_3);

  if (VAR_3->type == VAR_1)
   VAR_4->total_frames++;
 }

 if (VAR_4->active_delay_ns)
  FUNC_2(VAR_3);
}
