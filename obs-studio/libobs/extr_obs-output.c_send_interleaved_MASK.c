
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
struct TYPE_6__ {int (* encoded_packet ) (int ,struct encoder_packet*) ;} ;
struct TYPE_8__ {struct encoder_packet* array; } ;
struct obs_output {double caption_timestamp; TYPE_3__ context; TYPE_2__ info; int caption_mutex; TYPE_1__* caption_head; int total_frames; TYPE_4__ interleaved_packets; } ;
struct encoder_packet {scalar_t__ type; double pts; double timebase_num; scalar_t__ timebase_den; } ;
struct TYPE_5__ {double display_duration; int * text; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct obs_output*,struct encoder_packet*) ;
 int FUNC_1 (int ,char*,double,int *) ;
 int FUNC_2 (TYPE_4__,int ) ;
 int FUNC_3 (struct obs_output*,struct encoder_packet*) ;
 int FUNC_4 (struct encoder_packet*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct encoder_packet*) ;

__attribute__((used)) static inline void FUNC_8(struct obs_output *VAR_2)
{
 struct encoder_packet VAR_3 = VAR_2->interleaved_packets.array[0];




 if (!FUNC_3(VAR_2, &VAR_3))
  return;

 FUNC_2(VAR_2->interleaved_packets, 0);

 if (VAR_3.type == VAR_1) {
  VAR_2->total_frames++;
 }

 VAR_2->info.encoded_packet(VAR_2->context.data, &VAR_3);
 FUNC_4(&VAR_3);
}
