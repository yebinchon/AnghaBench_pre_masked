
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netlink_sock {int flags; } ;
struct TYPE_2__ {int sk; } ;


 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 struct netlink_sock* FUNC_1 (int ) ;

bool FUNC_2(struct sk_buff *VAR_1)
{
 const struct netlink_sock *VAR_2 = FUNC_1(FUNC_0(VAR_1).sk);

 return VAR_2->flags & VAR_0;
}
