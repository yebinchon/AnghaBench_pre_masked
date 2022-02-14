
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_table {unsigned int mask; struct udp_hslot* hash2; } ;
struct udp_hslot {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct net*,int ,unsigned short) ;
 unsigned short FUNC_3 (int ) ;
 struct sock* FUNC_4 (struct net*,int ,int ,int ,unsigned short,int,int,struct udp_hslot*,struct sk_buff*) ;

struct sock *FUNC_5(struct net *VAR_1, __be32 VAR_2,
  __be16 VAR_3, __be32 VAR_4, __be16 VAR_5, int VAR_6,
  int VAR_7, struct udp_table *VAR_8, struct sk_buff *VAR_9)
{
 struct sock *VAR_10;
 unsigned short VAR_11 = FUNC_3(VAR_5);
 unsigned int VAR_12, VAR_13;
 struct udp_hslot *VAR_14;

 VAR_12 = FUNC_2(VAR_1, VAR_4, VAR_11);
 VAR_13 = VAR_12 & VAR_8->mask;
 VAR_14 = &VAR_8->hash2[VAR_13];

 VAR_10 = FUNC_4(VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_11, VAR_6, VAR_7,
      VAR_14, VAR_9);
 if (!VAR_10) {
  VAR_12 = FUNC_2(VAR_1, FUNC_1(VAR_0), VAR_11);
  VAR_13 = VAR_12 & VAR_8->mask;
  VAR_14 = &VAR_8->hash2[VAR_13];

  VAR_10 = FUNC_4(VAR_1, VAR_2, VAR_3,
       FUNC_1(VAR_0), VAR_11, VAR_6, VAR_7,
       VAR_14, VAR_9);
 }
 if (FUNC_0(VAR_10))
  return ((void*)0);
 return VAR_10;
}
