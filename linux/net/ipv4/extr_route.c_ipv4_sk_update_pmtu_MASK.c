
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct dst_entry {TYPE_1__* ops; scalar_t__ obsolete; } ;
struct rtable {struct dst_entry dst; } ;
struct net {int dummy; } ;
struct iphdr {int dummy; } ;
struct flowi4 {int dummy; } ;
struct TYPE_2__ {int (* check ) (struct dst_entry*,int ) ;} ;


 scalar_t__ FUNC_0 (struct rtable*) ;
 int FUNC_1 (struct net*,struct flowi4*,struct sock*,struct iphdr const*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct rtable*,struct flowi4*,int ) ;
 int FUNC_3 (struct sk_buff*,struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct dst_entry*,int ) ;
 int FUNC_7 (struct dst_entry*) ;
 struct rtable* FUNC_8 (struct net*,struct flowi4*,struct sock*) ;
 int FUNC_9 (struct sock*) ;
 struct dst_entry* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*,struct dst_entry*) ;
 struct net* FUNC_12 (struct sock*) ;
 scalar_t__ FUNC_13 (struct sock*) ;
 int FUNC_14 (struct dst_entry*,int ) ;
 scalar_t__ FUNC_15 (struct dst_entry*) ;

void FUNC_16(struct sk_buff *VAR_0, struct sock *VAR_1, u32 VAR_2)
{
 const struct iphdr *VAR_3 = (const struct iphdr *) VAR_0->data;
 struct flowi4 VAR_4;
 struct rtable *VAR_5;
 struct dst_entry *VAR_6 = ((void*)0);
 bool VAR_7 = 0;
 struct net *VAR_8 = FUNC_12(VAR_1);

 FUNC_4(VAR_1);

 if (!FUNC_9(VAR_1))
  goto out;

 VAR_6 = FUNC_10(VAR_1);

 if (FUNC_13(VAR_1) || !VAR_6) {
  FUNC_3(VAR_0, VAR_1, VAR_2);
  goto out;
 }

 FUNC_1(VAR_8, &VAR_4, VAR_1, VAR_3, 0, 0, 0, 0, 0);

 VAR_5 = (struct rtable *)VAR_6;
 if (VAR_6->obsolete && !VAR_6->ops->check(VAR_6, 0)) {
  VAR_5 = FUNC_8(FUNC_12(VAR_1), &VAR_4, VAR_1);
  if (FUNC_0(VAR_5))
   goto out;

  VAR_7 = 1;
 }

 FUNC_2((struct rtable *) FUNC_15(&VAR_5->dst), &VAR_4, VAR_2);

 if (!FUNC_6(&VAR_5->dst, 0)) {
  if (VAR_7)
   FUNC_7(&VAR_5->dst);

  VAR_5 = FUNC_8(FUNC_12(VAR_1), &VAR_4, VAR_1);
  if (FUNC_0(VAR_5))
   goto out;

  VAR_7 = 1;
 }

 if (VAR_7)
  FUNC_11(VAR_1, &VAR_5->dst);

out:
 FUNC_5(VAR_1);
 FUNC_7(VAR_6);
}
