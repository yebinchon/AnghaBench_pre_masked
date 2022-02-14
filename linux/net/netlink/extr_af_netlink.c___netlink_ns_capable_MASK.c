
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct netlink_skb_parms {int flags; TYPE_2__* sk; } ;
struct TYPE_4__ {TYPE_1__* sk_socket; } ;
struct TYPE_3__ {int file; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct user_namespace*,int) ;
 scalar_t__ FUNC_1 (struct user_namespace*,int) ;

bool FUNC_2(const struct netlink_skb_parms *VAR_1,
   struct user_namespace *VAR_2, int VAR_3)
{
 return ((VAR_1->flags & VAR_0) ||
  FUNC_0(VAR_1->sk->sk_socket->file, VAR_2, VAR_3)) &&
  FUNC_1(VAR_2, VAR_3);
}
