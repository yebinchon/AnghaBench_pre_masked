
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;
struct ddpehdr {int deh_dnode; int deh_snode; int deh_len_hops; scalar_t__ deh_sum; int deh_snet; int deh_dnet; } ;
struct atalk_addr {int s_net; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 struct atalk_addr* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,struct packet_type*,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int *) ;
 int* FUNC_6 (struct sk_buff*) ;
 struct ddpehdr* FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_3, struct net_device *VAR_4,
       struct packet_type *VAR_5, struct net_device *VAR_6)
{
 if (!FUNC_5(FUNC_2(VAR_4), &VAR_2))
  goto freeit;


 if (FUNC_6(VAR_3)[2] == 1) {
  struct ddpehdr *VAR_7;

  struct atalk_addr *VAR_8 = FUNC_0(VAR_4);

  if (!VAR_8 || VAR_3->len < sizeof(__be16) || VAR_3->len > 1023)
   goto freeit;


  if (!(VAR_3 = FUNC_9(VAR_3, VAR_1)))
   return 0;





  VAR_7 = FUNC_7(VAR_3, sizeof(*VAR_7) - 4);
  VAR_7->deh_dnode = FUNC_6(VAR_3)[0];
  VAR_7->deh_snode = FUNC_6(VAR_3)[1];

  VAR_7->deh_dnet = VAR_8->s_net;
  VAR_7->deh_snet = VAR_8->s_net;
  VAR_7->deh_sum = 0;




  VAR_7->deh_len_hops = FUNC_3(VAR_3->len + (VAR_0 << 10));
 }
 FUNC_8(VAR_3);

 return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
freeit:
 FUNC_4(VAR_3);
 return 0;
}
