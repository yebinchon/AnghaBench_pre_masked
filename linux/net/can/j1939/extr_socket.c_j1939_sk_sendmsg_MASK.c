
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_4__ {scalar_t__ addr; int name; int pgn; } ;
struct TYPE_5__ {TYPE_1__ j1939; } ;
struct sockaddr_can {scalar_t__ can_family; int can_ifindex; TYPE_2__ can_addr; } ;
struct sock {int dummy; } ;
struct msghdr {scalar_t__ msg_namelen; struct sockaddr_can* msg_name; } ;
struct TYPE_6__ {scalar_t__ sa; scalar_t__ da; int dst_name; int src_name; } ;
struct j1939_sock {int state; int ifindex; TYPE_3__ addr; struct j1939_priv* priv; } ;
struct j1939_priv {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct j1939_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct j1939_priv*,struct sock*,struct msghdr*,size_t) ;
 int FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_8, struct msghdr *VAR_9,
       size_t VAR_10)
{
 struct sock *VAR_11 = VAR_8->sk;
 struct j1939_sock *VAR_12 = FUNC_2(VAR_11);
 struct j1939_priv *VAR_13 = VAR_12->priv;
 int VAR_14;
 int VAR_15;


 if (!(VAR_12->state & VAR_6))
  return -VAR_2;

 VAR_14 = VAR_12->ifindex;

 if (!VAR_12->addr.src_name && VAR_12->addr.sa == VAR_5)

  return -VAR_2;


 if (VAR_9->msg_name) {
  struct sockaddr_can *VAR_16 = VAR_9->msg_name;

  if (VAR_9->msg_namelen < VAR_4)
   return -VAR_3;

  if (VAR_16->can_family != VAR_0)
   return -VAR_3;

  if (VAR_16->can_ifindex && VAR_16->can_ifindex != VAR_14)
   return -VAR_2;

  if (FUNC_1(VAR_16->can_addr.j1939.pgn) &&
      !FUNC_0(VAR_16->can_addr.j1939.pgn))
   return -VAR_3;

  if (!VAR_16->can_addr.j1939.name &&
      VAR_16->can_addr.j1939.addr == VAR_5 &&
      !FUNC_4(VAR_11, VAR_7))

   return -VAR_1;
 } else {
  if (!VAR_12->addr.dst_name && VAR_12->addr.da == VAR_5 &&
      !FUNC_4(VAR_11, VAR_7))

   return -VAR_1;
 }

 VAR_15 = FUNC_3(VAR_13, VAR_11, VAR_9, VAR_10);

 return VAR_15;
}
