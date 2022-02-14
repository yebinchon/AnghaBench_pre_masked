
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_dst {struct dst_entry* route; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dst_entry {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* redirect ) (struct dst_entry*,struct sock*,struct sk_buff*) ;} ;


 int FUNC_0 (struct dst_entry*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct dst_entry *VAR_0, struct sock *VAR_1,
      struct sk_buff *VAR_2)
{
 struct xfrm_dst *VAR_3 = (struct xfrm_dst *)VAR_0;
 struct dst_entry *VAR_4 = VAR_3->route;

 VAR_4->ops->redirect(VAR_4, VAR_1, VAR_2);
}
