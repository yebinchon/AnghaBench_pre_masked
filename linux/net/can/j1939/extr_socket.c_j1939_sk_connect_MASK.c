
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int sk; } ;
struct TYPE_5__ {int pgn; int addr; scalar_t__ name; } ;
struct TYPE_6__ {TYPE_2__ j1939; } ;
struct sockaddr_can {scalar_t__ can_ifindex; TYPE_3__ can_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int pgn; int da; scalar_t__ dst_name; } ;
struct j1939_sock {int state; scalar_t__ ifindex; TYPE_1__ addr; int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 struct j1939_sock* FUNC_1 (int ) ;
 int FUNC_2 (struct sockaddr_can*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_6, struct sockaddr *VAR_7,
       int VAR_8, int VAR_9)
{
 struct sockaddr_can *VAR_10 = (struct sockaddr_can *)VAR_7;
 struct j1939_sock *VAR_11 = FUNC_1(VAR_6->sk);
 int VAR_12 = 0;

 VAR_12 = FUNC_2(VAR_10, VAR_8);
 if (VAR_12)
  return VAR_12;

 FUNC_3(VAR_6->sk);


 if (!(VAR_11->state & VAR_3)) {
  VAR_12 = -VAR_1;
  goto out_release_sock;
 }


 if (VAR_11->ifindex != VAR_10->can_ifindex) {
  VAR_12 = -VAR_1;
  goto out_release_sock;
 }

 if (!VAR_10->can_addr.j1939.name &&
     VAR_10->can_addr.j1939.addr == VAR_2 &&
     !FUNC_5(&VAR_11->sk, VAR_5)) {

  VAR_12 = -VAR_0;
  goto out_release_sock;
 }

 VAR_11->addr.dst_name = VAR_10->can_addr.j1939.name;
 VAR_11->addr.da = VAR_10->can_addr.j1939.addr;

 if (FUNC_0(VAR_10->can_addr.j1939.pgn))
  VAR_11->addr.pgn = VAR_10->can_addr.j1939.pgn;

 VAR_11->state |= VAR_4;

 out_release_sock:
 FUNC_4(VAR_6->sk);

 return VAR_12;
}
