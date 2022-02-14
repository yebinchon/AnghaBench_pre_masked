
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int mark; } ;
struct seg6_lwt {int cache; } ;
struct net {int dummy; } ;
struct ipv6hdr {int nexthdr; int saddr; int daddr; } ;
struct flowi6 {int saddr; int flowi6_proto; int flowi6_mark; int flowlabel; int daddr; } ;
struct dst_entry {int error; int dev; int lwtstate; } ;
typedef int fl6 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct dst_entry* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct dst_entry*,int *) ;
 int FUNC_3 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct dst_entry*) ;
 int FUNC_5 (struct ipv6hdr*) ;
 struct dst_entry* FUNC_6 (struct net*,int *,struct flowi6*) ;
 struct ipv6hdr* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct flowi6*,int ,int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct sk_buff*) ;
 struct seg6_lwt* FUNC_13 (int ) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 struct dst_entry* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,struct dst_entry*) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct net *VAR_1, struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct dst_entry *VAR_4 = FUNC_15(VAR_3);
 struct dst_entry *VAR_5 = ((void*)0);
 struct seg6_lwt *VAR_6;
 int VAR_7 = -VAR_0;

 VAR_7 = FUNC_12(VAR_3);
 if (FUNC_18(VAR_7))
  goto drop;

 VAR_6 = FUNC_13(VAR_4->lwtstate);

 FUNC_10();
 VAR_5 = FUNC_1(&VAR_6->cache);
 FUNC_11();

 if (FUNC_18(!VAR_5)) {
  struct ipv6hdr *VAR_8 = FUNC_7(VAR_3);
  struct flowi6 VAR_9;

  FUNC_9(&VAR_9, 0, sizeof(VAR_9));
  VAR_9 = VAR_8->daddr;
  VAR_9 = VAR_8->saddr;
  VAR_9 = FUNC_5(VAR_8);
  VAR_9 = VAR_3->mark;
  VAR_9 = VAR_8->nexthdr;

  VAR_5 = FUNC_6(VAR_1, ((void*)0), &VAR_9);
  if (VAR_5->error) {
   VAR_7 = VAR_5->error;
   FUNC_4(VAR_5);
   goto drop;
  }

  FUNC_10();
  FUNC_2(&VAR_6->cache, VAR_5, &VAR_9);
  FUNC_11();
 }

 FUNC_16(VAR_3);
 FUNC_17(VAR_3, VAR_5);

 VAR_7 = FUNC_14(VAR_3, FUNC_0(VAR_5->dev));
 if (FUNC_18(VAR_7))
  goto drop;

 return FUNC_3(VAR_1, VAR_2, VAR_3);
drop:
 FUNC_8(VAR_3);
 return VAR_7;
}
