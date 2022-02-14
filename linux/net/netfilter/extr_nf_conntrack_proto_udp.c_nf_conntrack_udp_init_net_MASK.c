
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_udp_net {int * timeouts; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct nf_udp_net* FUNC_0 (struct net*) ;
 int * VAR_1 ;

void FUNC_1(struct net *VAR_2)
{
 struct nf_udp_net *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3->timeouts[VAR_4] = VAR_1[VAR_4];
}
