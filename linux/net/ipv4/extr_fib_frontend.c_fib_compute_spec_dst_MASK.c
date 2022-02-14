
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int mark; struct net_device* dev; } ;
struct rtable {int rt_flags; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct in_device {int dummy; } ;
struct flowi4 {int flowi4_scope; int flowi4_mark; int flowi4_tos; int daddr; int flowi4_oif; int flowi4_iif; } ;
struct fib_result {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int saddr; int tos; int daddr; } ;


 scalar_t__ FUNC_0 (struct in_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 struct in_device* FUNC_2 (struct net_device*) ;
 struct net* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net*,struct flowi4*,struct fib_result*,int ) ;
 int FUNC_5 (struct net*,struct fib_result*) ;
 int FUNC_6 (struct net_device*,int ,int) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*) ;
 struct rtable* FUNC_10 (struct sk_buff*) ;

__be32 FUNC_11(struct sk_buff *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->dev;
 struct in_device *VAR_8;
 struct fib_result VAR_9;
 struct rtable *VAR_10;
 struct net *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_10(VAR_6);
 if ((VAR_10->rt_flags & (VAR_1 | VAR_3 | VAR_2)) ==
     VAR_2)
  return FUNC_7(VAR_6)->daddr;

 VAR_8 = FUNC_2(VAR_7);

 VAR_11 = FUNC_3(VAR_7);

 VAR_12 = VAR_5;
 if (!FUNC_8(FUNC_7(VAR_6)->saddr)) {
  bool VAR_13 = VAR_8 && FUNC_0(VAR_8);
  struct flowi4 VAR_14 = {
   .flowi4_iif = VAR_0,
   .flowi4_oif = FUNC_9(VAR_7),
   .daddr = FUNC_7(VAR_6)->saddr,
   .flowi4_tos = FUNC_1(FUNC_7(VAR_6)->tos),
   .flowi4_scope = VAR_12,
   .flowi4_mark = VAR_13 ? VAR_6->mark : 0,
  };
  if (!FUNC_4(VAR_11, &VAR_14, &VAR_9, 0))
   return FUNC_5(VAR_11, &VAR_9);
 } else {
  VAR_12 = VAR_4;
 }

 return FUNC_6(VAR_7, FUNC_7(VAR_6)->saddr, VAR_12);
}
