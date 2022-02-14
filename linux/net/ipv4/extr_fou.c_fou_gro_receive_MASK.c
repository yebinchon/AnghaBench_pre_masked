
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int gro_receive; } ;
struct net_offload {TYPE_1__ callbacks; } ;
struct list_head {int dummy; } ;
struct TYPE_6__ {int is_fou; scalar_t__ is_ipv6; scalar_t__ encap_mark; } ;
struct TYPE_5__ {size_t protocol; } ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,struct list_head*,struct sk_buff*) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 struct net_offload** VAR_0 ;
 struct net_offload** VAR_1 ;
 struct net_offload* FUNC_3 (struct net_offload const*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct sock *VAR_2,
           struct list_head *VAR_3,
           struct sk_buff *VAR_4)
{
 u8 VAR_5 = FUNC_2(VAR_2)->protocol;
 const struct net_offload **VAR_6;
 const struct net_offload *VAR_7;
 struct sk_buff *VAR_8 = ((void*)0);







 FUNC_0(VAR_4)->encap_mark = 0;


 FUNC_0(VAR_4)->is_fou = 1;

 FUNC_4();
 VAR_6 = FUNC_0(VAR_4)->is_ipv6 ? VAR_0 : VAR_1;
 VAR_7 = FUNC_3(VAR_6[VAR_5]);
 if (!VAR_7 || !VAR_7->callbacks.gro_receive)
  goto out_unlock;

 VAR_8 = FUNC_1(VAR_7->callbacks.gro_receive, VAR_3, VAR_4);

out_unlock:
 FUNC_5();

 return VAR_8;
}
