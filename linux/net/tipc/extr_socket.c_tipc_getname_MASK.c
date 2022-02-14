
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tipc_sock {int portid; } ;
struct socket {struct sock* sk; } ;
struct TYPE_5__ {scalar_t__ domain; } ;
struct TYPE_4__ {int node; int ref; } ;
struct TYPE_6__ {TYPE_2__ name; TYPE_1__ id; } ;
struct sockaddr_tipc {TYPE_3__ addr; scalar_t__ scope; int family; int addrtype; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sockaddr_tipc*,int ,int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ) ;
 struct tipc_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct tipc_sock*) ;
 int FUNC_6 (struct tipc_sock*) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_4, struct sockaddr *VAR_5,
   int VAR_6)
{
 struct sockaddr_tipc *VAR_7 = (struct sockaddr_tipc *)VAR_5;
 struct sock *VAR_8 = VAR_4->sk;
 struct tipc_sock *VAR_9 = FUNC_3(VAR_8);

 FUNC_0(VAR_7, 0, sizeof(*VAR_7));
 if (VAR_6) {
  if ((!FUNC_4(VAR_8)) &&
      ((VAR_6 != 2) || (VAR_8->sk_state != VAR_3)))
   return -VAR_1;
  VAR_7->addr.id.ref = FUNC_6(VAR_9);
  VAR_7->addr.id.node = FUNC_5(VAR_9);
 } else {
  VAR_7->addr.id.ref = VAR_9->portid;
  VAR_7->addr.id.node = FUNC_2(FUNC_1(VAR_8));
 }

 VAR_7->addrtype = VAR_2;
 VAR_7->family = VAR_0;
 VAR_7->scope = 0;
 VAR_7->addr.name.domain = 0;

 return sizeof(*VAR_7);
}
