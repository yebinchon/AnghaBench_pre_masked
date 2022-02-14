
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_v6_daddr; } ;
struct ipv6_pinfo {int saddr; } ;
struct flowi6 {int saddr; int daddr; } ;
struct dst_entry {int dummy; } ;


 struct ipv6_pinfo* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,struct dst_entry*,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;

void FUNC_3(struct sock *VAR_0, struct dst_entry *VAR_1,
      const struct flowi6 *VAR_2)
{




 FUNC_1(VAR_0, VAR_1,
        FUNC_2(&VAR_2->daddr, &VAR_0->sk_v6_daddr) ?
        &VAR_0->sk_v6_daddr : ((void*)0),




        ((void*)0));
}
