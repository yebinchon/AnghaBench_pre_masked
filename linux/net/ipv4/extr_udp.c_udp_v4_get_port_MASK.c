
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_4__ {int inet_rcv_saddr; } ;
struct TYPE_3__ {unsigned int udp_portaddr_hash; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 unsigned int FUNC_2 (int ,int ,unsigned short) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,unsigned short,unsigned int) ;
 TYPE_1__* FUNC_5 (struct sock*) ;

int FUNC_6(struct sock *VAR_1, unsigned short VAR_2)
{
 unsigned int VAR_3 =
  FUNC_2(FUNC_3(VAR_1), FUNC_0(VAR_0), VAR_2);
 unsigned int VAR_4 =
  FUNC_2(FUNC_3(VAR_1), FUNC_1(VAR_1)->inet_rcv_saddr, 0);


 FUNC_5(VAR_1)->udp_portaddr_hash = VAR_4;
 return FUNC_4(VAR_1, VAR_2, VAR_3);
}
