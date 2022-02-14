
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; } ;
struct l2tp_tunnel {TYPE_1__ stats; } ;
struct TYPE_5__ {int rx_bytes; int rx_packets; } ;
struct l2tp_session {int (* recv_skb ) (struct l2tp_session*,struct sk_buff*,int) ;int nr; int name; int nr_max; TYPE_2__ stats; struct l2tp_tunnel* tunnel; } ;
struct TYPE_6__ {int length; scalar_t__ has_seq; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct l2tp_session*,int ,char*,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct l2tp_session*,struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_7(struct l2tp_session *VAR_1, struct sk_buff *VAR_2)
{
 struct l2tp_tunnel *VAR_3 = VAR_1->tunnel;
 int VAR_4 = FUNC_0(VAR_2)->length;




 FUNC_5(VAR_2);

 FUNC_2(&VAR_3->stats.rx_packets);
 FUNC_1(VAR_4, &VAR_3->stats.rx_bytes);
 FUNC_2(&VAR_1->stats.rx_packets);
 FUNC_1(VAR_4, &VAR_1->stats.rx_bytes);

 if (FUNC_0(VAR_2)->has_seq) {

  VAR_1->nr++;
  VAR_1->nr &= VAR_1->nr_max;

  FUNC_4(VAR_1, VAR_0, "%s: updated nr to %hu\n",
    VAR_1->name, VAR_1->nr);
 }


 if (VAR_1->recv_skb != ((void*)0))
  (*VAR_1->recv_skb)(VAR_1, VAR_2, FUNC_0(VAR_2)->length);
 else
  FUNC_3(VAR_2);
}
