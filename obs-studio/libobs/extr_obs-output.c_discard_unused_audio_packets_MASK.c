
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; struct encoder_packet* array; } ;
struct obs_output {TYPE_1__ interleaved_packets; } ;
struct encoder_packet {scalar_t__ dts_usec; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (struct obs_output*,size_t) ;

__attribute__((used)) static void FUNC_1(struct obs_output *VAR_0,
      int64_t VAR_1)
{
 size_t VAR_2 = 0;

 for (; VAR_2 < VAR_0->interleaved_packets.num; VAR_2++) {
  struct encoder_packet *VAR_3 =
   &VAR_0->interleaved_packets.array[VAR_2];

  if (VAR_3->dts_usec >= VAR_1)
   break;
 }

 if (VAR_2)
  FUNC_0(VAR_0, VAR_2);
}
