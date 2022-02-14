
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; struct encoder_packet* array; } ;
struct obs_output {TYPE_1__ interleaved_packets; } ;
struct encoder_packet {scalar_t__ type; int dts_usec; scalar_t__ track_idx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct obs_output*,size_t) ;
 size_t FUNC_2 (struct obs_output*) ;
 int FUNC_3 (struct obs_output*) ;

__attribute__((used)) static bool FUNC_4(struct obs_output *VAR_2)
{
 size_t VAR_3 = 0;
 int VAR_4 = FUNC_3(VAR_2);
 if (VAR_4 == -1)
  return 0;
 else if (VAR_4 != 0)
  VAR_3 = (size_t)VAR_4;
 else
  VAR_3 = FUNC_2(VAR_2);

 if (VAR_3)
  FUNC_1(VAR_2, VAR_3);

 return 1;
}
