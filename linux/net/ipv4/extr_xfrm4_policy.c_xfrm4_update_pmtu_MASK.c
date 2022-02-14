
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xfrm_dst {struct dst_entry* route; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dst_entry {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* update_pmtu ) (struct dst_entry*,struct sock*,struct sk_buff*,int ) ;} ;


 int FUNC_0 (struct dst_entry*,struct sock*,struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_1(struct dst_entry *VAR_0, struct sock *VAR_1,
         struct sk_buff *VAR_2, u32 VAR_3)
{
 struct xfrm_dst *VAR_4 = (struct xfrm_dst *)VAR_0;
 struct dst_entry *VAR_5 = VAR_4->route;

 VAR_5->ops->update_pmtu(VAR_5, VAR_1, VAR_2, VAR_3);
}
