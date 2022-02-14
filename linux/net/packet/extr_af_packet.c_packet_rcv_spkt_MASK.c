
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_pkt {int spkt_protocol; int spkt_device; int spkt_family; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ pkt_type; int protocol; scalar_t__ data; } ;
struct packet_type {struct sock* af_packet_priv; } ;
struct net_device {int name; int type; } ;
struct TYPE_3__ {struct sockaddr_pkt pkt; } ;
struct TYPE_4__ {TYPE_1__ sa; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (struct sock*,struct sk_buff*) ;
 int FUNC_11 (int ,int ,int) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_2, struct net_device *VAR_3,
      struct packet_type *VAR_4, struct net_device *VAR_5)
{
 struct sock *VAR_6;
 struct sockaddr_pkt *VAR_7;






 VAR_6 = VAR_4->af_packet_priv;
 if (VAR_2->pkt_type == VAR_1)
  goto out;

 if (!FUNC_3(FUNC_1(VAR_3), FUNC_9(VAR_6)))
  goto out;

 VAR_2 = FUNC_8(VAR_2, VAR_0);
 if (VAR_2 == ((void*)0))
  goto oom;


 FUNC_5(VAR_2);


 FUNC_4(VAR_2);

 VAR_7 = &FUNC_0(VAR_2)->sa.pkt;

 FUNC_7(VAR_2, VAR_2->data - FUNC_6(VAR_2));





 VAR_7->spkt_family = VAR_3->type;
 FUNC_11(VAR_7->spkt_device, VAR_3->name, sizeof(VAR_7->spkt_device));
 VAR_7->spkt_protocol = VAR_2->protocol;






 if (FUNC_10(VAR_6, VAR_2) == 0)
  return 0;

out:
 FUNC_2(VAR_2);
oom:
 return 0;
}
