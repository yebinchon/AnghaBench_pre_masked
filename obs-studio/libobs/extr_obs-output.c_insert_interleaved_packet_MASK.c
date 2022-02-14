
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; struct encoder_packet* array; } ;
struct obs_output {TYPE_1__ interleaved_packets; } ;
struct encoder_packet {scalar_t__ dts_usec; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__,size_t,struct encoder_packet*) ;

__attribute__((used)) static inline void FUNC_1(struct obs_output *VAR_1,
          struct encoder_packet *VAR_2)
{
 size_t VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1->interleaved_packets.num; VAR_3++) {
  struct encoder_packet *VAR_4;
  VAR_4 = VAR_1->interleaved_packets.array + VAR_3;

  if (VAR_2->dts_usec == VAR_4->dts_usec &&
      VAR_2->type == VAR_0) {
   break;
  } else if (VAR_2->dts_usec < VAR_4->dts_usec) {
   break;
  }
 }

 FUNC_0(VAR_1->interleaved_packets, VAR_3, VAR_2);
}
