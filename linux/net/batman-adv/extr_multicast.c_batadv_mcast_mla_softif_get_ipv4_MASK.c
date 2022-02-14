
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ip_mc_list {int multiaddr; int next_rcu; } ;
struct in_device {int mc_list; } ;
struct hlist_head {int dummy; } ;
struct batadv_mcast_mla_flags {int tvlv_flags; } ;
struct batadv_hw_addr {int list; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct in_device* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int *,struct hlist_head*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,struct hlist_head*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 struct batadv_hw_addr* FUNC_6 (int,int ) ;
 struct ip_mc_list* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(struct net_device *VAR_6,
     struct hlist_head *VAR_7,
     struct batadv_mcast_mla_flags *VAR_8)
{
 struct batadv_hw_addr *VAR_9;
 struct in_device *VAR_10;
 u8 VAR_11[VAR_4];
 struct ip_mc_list *VAR_12;
 int VAR_13 = 0;

 if (VAR_8->tvlv_flags & VAR_0)
  return 0;

 FUNC_8();

 VAR_10 = FUNC_0(VAR_6);
 if (!VAR_10) {
  FUNC_9();
  return 0;
 }

 for (VAR_12 = FUNC_7(VAR_10->mc_list); VAR_12;
      VAR_12 = FUNC_7(VAR_12->next_rcu)) {
  if (VAR_8->tvlv_flags & VAR_1 &&
      FUNC_5(VAR_12->multiaddr))
   continue;

  if (!(VAR_8->tvlv_flags & VAR_2) &&
      !FUNC_5(VAR_12->multiaddr))
   continue;

  FUNC_4(VAR_12->multiaddr, VAR_11);

  if (FUNC_1(VAR_11, VAR_7))
   continue;

  VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_5);
  if (!VAR_9) {
   VAR_13 = -VAR_3;
   break;
  }

  FUNC_2(VAR_9->addr, VAR_11);
  FUNC_3(&VAR_9->list, VAR_7);
  VAR_13++;
 }
 FUNC_9();

 return VAR_13;
}
