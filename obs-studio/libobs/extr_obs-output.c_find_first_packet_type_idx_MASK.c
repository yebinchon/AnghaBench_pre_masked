
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; struct encoder_packet* array; } ;
struct obs_output {TYPE_1__ interleaved_packets; } ;
struct encoder_packet {int type; size_t track_idx; } ;
typedef enum obs_encoder_type { ____Placeholder_obs_encoder_type } obs_encoder_type ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct obs_output *VAR_1,
          enum obs_encoder_type VAR_2,
          size_t VAR_3)
{
 for (size_t VAR_4 = 0; VAR_4 < VAR_1->interleaved_packets.num; VAR_4++) {
  struct encoder_packet *VAR_5 =
   &VAR_1->interleaved_packets.array[VAR_4];

  if (VAR_5->type == VAR_2) {
   if (VAR_2 == VAR_0 &&
       VAR_5->track_idx != VAR_3) {
    continue;
   }

   return (int)VAR_4;
  }
 }

 return -1;
}
