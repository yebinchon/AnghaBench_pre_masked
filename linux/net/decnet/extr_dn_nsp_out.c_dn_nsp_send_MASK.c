
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_state_change ) (struct sock*) ;int sk_err; int sk_route_caps; int sk_dst_cache; int sk_bound_dev_if; } ;
struct sk_buff {struct sock* sk; } ;
struct flowidn {int flowidn_proto; void* daddr; void* saddr; int flowidn_oif; } ;
struct dst_entry {TYPE_1__* dev; } ;
struct dn_scp {int peer; int addr; int stamp; } ;
typedef int fld ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,struct flowidn*,struct sock*,int ) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (struct flowidn*,struct dn_scp*) ;
 int FUNC_4 (int *,struct sock*,struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct flowidn*,int ,int) ;
 struct dst_entry* FUNC_6 (struct sock*,int ) ;
 struct dst_entry* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sk_buff*,struct dst_entry*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static void FUNC_12(struct sk_buff *VAR_5)
{
 struct sock *VAR_6 = VAR_5->sk;
 struct dn_scp *VAR_7 = FUNC_0(VAR_6);
 struct dst_entry *VAR_8;
 struct flowidn VAR_9;

 FUNC_9(VAR_5);
 VAR_7->stamp = VAR_4;

 VAR_8 = FUNC_6(VAR_6, 0);
 if (VAR_8) {
try_again:
  FUNC_8(VAR_5, VAR_8);
  FUNC_4(&VAR_3, VAR_5->sk, VAR_5);
  return;
 }

 FUNC_5(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.flowidn_oif = VAR_6->sk_bound_dev_if;
 VAR_9.saddr = FUNC_2(&VAR_7->addr);
 VAR_9.daddr = FUNC_2(&VAR_7->peer);
 FUNC_3(&VAR_9, VAR_7);
 VAR_9.flowidn_proto = VAR_0;
 if (FUNC_1(&VAR_6->sk_dst_cache, &VAR_9, VAR_6, 0) == 0) {
  VAR_8 = FUNC_7(VAR_6);
  VAR_6->sk_route_caps = VAR_8->dev->features;
  goto try_again;
 }

 VAR_6->sk_err = VAR_1;
 if (!FUNC_10(VAR_6, VAR_2))
  VAR_6->sk_state_change(VAR_6);
}
