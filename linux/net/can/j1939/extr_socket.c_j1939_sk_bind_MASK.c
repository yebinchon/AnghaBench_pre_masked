
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_4__ {int addr; int name; int pgn; } ;
struct TYPE_5__ {TYPE_1__ j1939; } ;
struct sockaddr_can {scalar_t__ can_ifindex; TYPE_2__ can_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct net_device {scalar_t__ type; } ;
struct net {int dummy; } ;
struct TYPE_6__ {int sa; int src_name; } ;
struct j1939_sock {int state; scalar_t__ ifindex; TYPE_3__ addr; int pgn_rx_filter; struct j1939_priv* priv; } ;
struct j1939_priv {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct j1939_priv*) ;
 int VAR_3 ;
 int FUNC_1 (struct j1939_priv*) ;
 struct net_device* FUNC_2 (struct net*,scalar_t__) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct j1939_priv*,struct j1939_sock*) ;
 int FUNC_5 (struct j1939_priv*,struct j1939_sock*) ;
 int FUNC_6 (struct j1939_priv*,int ,int ) ;
 int FUNC_7 (struct j1939_priv*,int ,int ) ;
 struct j1939_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct j1939_priv*) ;
 scalar_t__ FUNC_10 (int ) ;
 struct j1939_sock* FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sockaddr_can*,int) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 struct net* FUNC_15 (struct sock*) ;

__attribute__((used)) static int FUNC_16(struct socket *VAR_4, struct sockaddr *VAR_5, int VAR_6)
{
 struct sockaddr_can *VAR_7 = (struct sockaddr_can *)VAR_5;
 struct j1939_sock *VAR_8 = FUNC_11(VAR_4->sk);
 struct j1939_priv *VAR_9 = VAR_8->priv;
 struct sock *VAR_10 = VAR_4->sk;
 struct net *VAR_11 = FUNC_15(VAR_10);
 int VAR_12 = 0;

 VAR_12 = FUNC_12(VAR_7, VAR_6);
 if (VAR_12)
  return VAR_12;

 FUNC_13(VAR_4->sk);


 if (VAR_8->state & VAR_3) {



  if (VAR_8->ifindex != VAR_7->can_ifindex) {
   VAR_12 = -VAR_1;
   goto out_release_sock;
  }


  FUNC_5(VAR_9, VAR_8);
  FUNC_7(VAR_9, VAR_8->addr.src_name, VAR_8->addr.sa);
 } else {
  struct net_device *VAR_13;

  VAR_13 = FUNC_2(VAR_11, VAR_7->can_ifindex);
  if (!VAR_13) {
   VAR_12 = -VAR_2;
   goto out_release_sock;
  }

  if (VAR_13->type != VAR_0) {
   FUNC_3(VAR_13);
   VAR_12 = -VAR_2;
   goto out_release_sock;
  }

  VAR_9 = FUNC_8(VAR_13);
  FUNC_3(VAR_13);
  if (FUNC_0(VAR_9)) {
   VAR_12 = FUNC_1(VAR_9);
   goto out_release_sock;
  }

  VAR_8->ifindex = VAR_7->can_ifindex;
 }


 if (FUNC_10(VAR_7->can_addr.j1939.pgn))
  VAR_8->pgn_rx_filter = VAR_7->can_addr.j1939.pgn;
 VAR_8->addr.src_name = VAR_7->can_addr.j1939.name;
 VAR_8->addr.sa = VAR_7->can_addr.j1939.addr;


 VAR_12 = FUNC_6(VAR_9, VAR_8->addr.src_name, VAR_8->addr.sa);
 if (VAR_12) {
  FUNC_9(VAR_9);
  goto out_release_sock;
 }

 FUNC_4(VAR_9, VAR_8);

 out_release_sock:
 FUNC_14(VAR_4->sk);

 return VAR_12;
}
