
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ pkt_type; } ;
struct packet_type {int dummy; } ;
struct net_device {int flags; scalar_t__ addr_len; } ;
struct neighbour_cb {int dummy; } ;
struct arphdr {scalar_t__ ar_hln; int ar_pln; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int *,struct sk_buff*,struct net_device*,int *,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct arphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_9, struct net_device *VAR_10,
     struct packet_type *VAR_11, struct net_device *VAR_12)
{
 const struct arphdr *VAR_13;


 if (VAR_10->flags & VAR_1 ||
     VAR_9->pkt_type == VAR_7 ||
     VAR_9->pkt_type == VAR_6)
  goto consumeskb;

 VAR_9 = FUNC_9(VAR_9, VAR_0);
 if (!VAR_9)
  goto out_of_mem;


 if (!FUNC_8(VAR_9, FUNC_3(VAR_10)))
  goto freeskb;

 VAR_13 = FUNC_2(VAR_9);
 if (VAR_13->ar_hln != VAR_10->addr_len || VAR_13->ar_pln != 4)
  goto freeskb;

 FUNC_7(FUNC_0(VAR_9), 0, sizeof(struct neighbour_cb));

 return FUNC_1(VAR_4, VAR_5,
         FUNC_5(VAR_10), ((void*)0), VAR_9, VAR_10, ((void*)0),
         VAR_8);

consumeskb:
 FUNC_4(VAR_9);
 return VAR_3;
freeskb:
 FUNC_6(VAR_9);
out_of_mem:
 return VAR_2;
}
