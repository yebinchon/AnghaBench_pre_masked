
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rt6_info {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {int flowi6_oif; int saddr; struct in6_addr const daddr; } ;
struct dst_entry {scalar_t__ error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dst_entry*) ;
 struct dst_entry* FUNC_1 (struct net*,struct flowi6*,struct sk_buff const*,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,struct in6_addr const*,int) ;

struct rt6_info *FUNC_3(struct net *VAR_3, const struct in6_addr *VAR_4,
       const struct in6_addr *VAR_5, int VAR_6,
       const struct sk_buff *VAR_7, int VAR_8)
{
 struct flowi6 VAR_9 = {
  .flowi6_oif = VAR_6,
  .daddr = *VAR_4,
 };
 struct dst_entry *VAR_10;
 int VAR_11 = VAR_8 ? VAR_1 : 0;

 if (VAR_5) {
  FUNC_2(&VAR_9, VAR_5, sizeof(*VAR_5));
  VAR_11 |= VAR_0;
 }

 VAR_10 = FUNC_1(VAR_3, &VAR_9, VAR_7, VAR_11, VAR_2);
 if (VAR_10->error == 0)
  return (struct rt6_info *) VAR_10;

 FUNC_0(VAR_10);

 return ((void*)0);
}
