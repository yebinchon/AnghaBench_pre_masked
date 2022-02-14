
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {struct sock* v4_ctl_sk; } ;
struct net {TYPE_1__ dccp; } ;
struct iphdr {int saddr; int daddr; } ;
struct dst_entry {int dummy; } ;
struct TYPE_8__ {scalar_t__ dccph_type; int dccph_checksum; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {scalar_t__ rt_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct sk_buff* FUNC_3 (struct sock*,struct sk_buff*) ;
 TYPE_4__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 struct dst_entry* FUNC_6 (struct net*,struct sock*,struct sk_buff*) ;
 struct net* FUNC_7 (int ) ;
 int FUNC_8 (struct dst_entry*) ;
 int FUNC_9 (struct dst_entry*) ;
 int FUNC_10 (struct sk_buff*,struct sock*,int ,int ,int *) ;
 struct iphdr* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int) ;
 TYPE_3__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,int ) ;
 TYPE_2__* FUNC_17 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_18(const struct sock *VAR_4, struct sk_buff *VAR_5)
{
 int VAR_6;
 const struct iphdr *VAR_7;
 struct sk_buff *VAR_8;
 struct dst_entry *VAR_9;
 struct net *VAR_10 = FUNC_7(FUNC_15(VAR_5)->dev);
 struct sock *VAR_11 = VAR_10->dccp.v4_ctl_sk;


 if (FUNC_4(VAR_5)->dccph_type == VAR_2)
  return;

 if (FUNC_17(VAR_5)->rt_type != VAR_3)
  return;

 VAR_9 = FUNC_6(VAR_10, VAR_11, VAR_5);
 if (VAR_9 == ((void*)0))
  return;

 VAR_8 = FUNC_3(VAR_11, VAR_5);
 if (VAR_8 == ((void*)0))
  goto out;

 VAR_7 = FUNC_11(VAR_5);
 FUNC_4(VAR_8)->dccph_checksum = FUNC_5(VAR_8, VAR_7->saddr,
         VAR_7->daddr);
 FUNC_16(VAR_8, FUNC_8(VAR_9));

 FUNC_12();
 FUNC_1(VAR_11);
 VAR_6 = FUNC_10(VAR_8, VAR_11,
        VAR_7->daddr, VAR_7->saddr, ((void*)0));
 FUNC_2(VAR_11);

 if (FUNC_14(VAR_6) == 0) {
  FUNC_0(VAR_1);
  FUNC_0(VAR_0);
 }
 FUNC_13();
out:
 FUNC_9(VAR_9);
}
