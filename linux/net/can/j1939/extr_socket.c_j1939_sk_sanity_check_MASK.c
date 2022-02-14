
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pgn; } ;
struct TYPE_4__ {TYPE_1__ j1939; } ;
struct sockaddr_can {scalar_t__ can_family; TYPE_2__ can_addr; int can_ifindex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sockaddr_can *VAR_5, int VAR_6)
{
 if (!VAR_5)
  return -VAR_1;
 if (VAR_6 < VAR_4)
  return -VAR_2;
 if (VAR_5->can_family != VAR_0)
  return -VAR_2;
 if (!VAR_5->can_ifindex)
  return -VAR_3;
 if (FUNC_1(VAR_5->can_addr.j1939.pgn) &&
     !FUNC_0(VAR_5->can_addr.j1939.pgn))
  return -VAR_2;

 return 0;
}
