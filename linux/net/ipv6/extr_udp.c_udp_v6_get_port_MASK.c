
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_v6_rcv_saddr; } ;
struct TYPE_2__ {unsigned int udp_portaddr_hash; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int *,unsigned short) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,unsigned short,unsigned int) ;
 TYPE_1__* FUNC_3 (struct sock*) ;

int FUNC_4(struct sock *VAR_1, unsigned short VAR_2)
{
 unsigned int VAR_3 =
  FUNC_0(FUNC_1(VAR_1), &VAR_0, VAR_2);
 unsigned int VAR_4 =
  FUNC_0(FUNC_1(VAR_1), &VAR_1->sk_v6_rcv_saddr, 0);


 FUNC_3(VAR_1)->udp_portaddr_hash = VAR_4;
 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
