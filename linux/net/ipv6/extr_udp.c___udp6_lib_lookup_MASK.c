
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_table {unsigned int mask; struct udp_hslot* hash2; } ;
struct udp_hslot {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int __be16 ;


 scalar_t__ FUNC_0 (struct sock*) ;
 struct in6_addr const VAR_0 ;
 unsigned int FUNC_1 (struct net*,struct in6_addr const*,unsigned short) ;
 unsigned short FUNC_2 (int ) ;
 struct sock* FUNC_3 (struct net*,struct in6_addr const*,int ,struct in6_addr const*,unsigned short,int,int,struct udp_hslot*,struct sk_buff*) ;

struct sock *FUNC_4(struct net *VAR_1,
          const struct in6_addr *VAR_2, __be16 VAR_3,
          const struct in6_addr *VAR_4, __be16 VAR_5,
          int VAR_6, int VAR_7, struct udp_table *VAR_8,
          struct sk_buff *VAR_9)
{
 unsigned short VAR_10 = FUNC_2(VAR_5);
 unsigned int VAR_11, VAR_12;
 struct udp_hslot *VAR_13;
 struct sock *VAR_14;

 VAR_11 = FUNC_1(VAR_1, VAR_4, VAR_10);
 VAR_12 = VAR_11 & VAR_8->mask;
 VAR_13 = &VAR_8->hash2[VAR_12];

 VAR_14 = FUNC_3(VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_10, VAR_6, VAR_7,
      VAR_13, VAR_9);
 if (!VAR_14) {
  VAR_11 = FUNC_1(VAR_1, &VAR_0, VAR_10);
  VAR_12 = VAR_11 & VAR_8->mask;

  VAR_13 = &VAR_8->hash2[VAR_12];

  VAR_14 = FUNC_3(VAR_1, VAR_2, VAR_3,
       &VAR_0, VAR_10, VAR_6, VAR_7,
       VAR_13, VAR_9);
 }
 if (FUNC_0(VAR_14))
  return ((void*)0);
 return VAR_14;
}
