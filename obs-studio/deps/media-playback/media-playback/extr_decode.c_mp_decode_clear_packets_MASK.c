
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
struct mp_decode {int packet_pending; TYPE_1__ packets; int orig_pkt; } ;
typedef int pkt ;
typedef int AVPacket ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;

void FUNC_2(struct mp_decode *VAR_0)
{
 if (VAR_0->packet_pending) {
  FUNC_0(&VAR_0->orig_pkt);
  VAR_0->packet_pending = 0;
 }

 while (VAR_0->packets.size) {
  AVPacket VAR_1;
  FUNC_1(&VAR_0->packets, &VAR_1, sizeof(VAR_1));
  FUNC_0(&VAR_1);
 }
}
