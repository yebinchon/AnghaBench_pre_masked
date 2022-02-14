
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct encoder_packet* array; } ;
struct obs_output {TYPE_1__ interleaved_packets; } ;
struct encoder_packet {int dummy; } ;


 int FUNC_0 (TYPE_1__,int ,size_t) ;
 int FUNC_1 (struct encoder_packet*) ;

__attribute__((used)) static void FUNC_2(struct obs_output *VAR_0, size_t VAR_1)
{
 for (size_t VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  struct encoder_packet *VAR_3 =
   &VAR_0->interleaved_packets.array[VAR_2];
  FUNC_1(VAR_3);
 }

 FUNC_0(VAR_0->interleaved_packets, 0, VAR_1);
}
