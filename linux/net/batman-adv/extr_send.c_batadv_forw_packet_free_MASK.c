
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_forw_packet {scalar_t__ queue_left; scalar_t__ if_outgoing; scalar_t__ if_incoming; int skb; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct batadv_forw_packet*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct batadv_forw_packet *VAR_0,
        bool VAR_1)
{
 if (VAR_1)
  FUNC_4(VAR_0->skb);
 else
  FUNC_2(VAR_0->skb);

 if (VAR_0->if_incoming)
  FUNC_1(VAR_0->if_incoming);
 if (VAR_0->if_outgoing)
  FUNC_1(VAR_0->if_outgoing);
 if (VAR_0->queue_left)
  FUNC_0(VAR_0->queue_left);
 FUNC_3(VAR_0);
}
