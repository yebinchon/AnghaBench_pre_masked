
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addr; int name; int pgn; } ;
struct TYPE_5__ {TYPE_1__ j1939; } ;
struct sockaddr_can {TYPE_2__ can_addr; int can_ifindex; int can_family; } ;
struct TYPE_6__ {int sa; int src_name; int da; int dst_name; int pgn; } ;
struct j1939_sock {TYPE_3__ addr; int ifindex; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct sockaddr_can *VAR_1,
           const struct j1939_sock *VAR_2, int VAR_3)
{
 VAR_1->can_family = VAR_0;
 VAR_1->can_ifindex = VAR_2->ifindex;
 VAR_1->can_addr.j1939.pgn = VAR_2->addr.pgn;
 if (VAR_3) {
  VAR_1->can_addr.j1939.name = VAR_2->addr.dst_name;
  VAR_1->can_addr.j1939.addr = VAR_2->addr.da;
 } else {
  VAR_1->can_addr.j1939.name = VAR_2->addr.src_name;
  VAR_1->can_addr.j1939.addr = VAR_2->addr.sa;
 }
}
