
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct encoder_packet* array; } ;
struct obs_output {TYPE_1__ interleaved_packets; } ;
struct encoder_packet {int dummy; } ;
typedef enum obs_encoder_type { ____Placeholder_obs_encoder_type } obs_encoder_type ;


 int FUNC_0 (struct obs_output*,int,size_t) ;

__attribute__((used)) static inline struct encoder_packet *
FUNC_1(struct obs_output *VAR_0, enum obs_encoder_type VAR_1,
        size_t VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 return (VAR_3 != -1) ? &VAR_0->interleaved_packets.array[VAR_3] : ((void*)0);
}
