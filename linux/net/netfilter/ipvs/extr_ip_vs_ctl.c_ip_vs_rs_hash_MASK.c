
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_ipvs {int * rs_table; } ;
struct ip_vs_dest {int in_rs_table; int d_list; int addr; int af; int tun_port; int tun_type; int port; } ;
typedef int __be16 ;







 int FUNC_0 (struct ip_vs_dest*) ;
 int FUNC_1 (int *,int *) ;
 unsigned int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct netns_ipvs *VAR_0, struct ip_vs_dest *VAR_1)
{
 unsigned int VAR_2;
 __be16 VAR_3;

 if (VAR_1->in_rs_table)
  return;

 switch (FUNC_0(VAR_1)) {
 case 132:
  VAR_3 = VAR_1->port;
  break;
 case 131:
  switch (VAR_1->tun_type) {
  case 129:
   VAR_3 = VAR_1->tun_port;
   break;
  case 128:
  case 130:
   VAR_3 = 0;
   break;
  default:
   return;
  }
  break;
 default:
  return;
 }





 VAR_2 = FUNC_2(VAR_1->af, &VAR_1->addr, VAR_3);

 FUNC_1(&VAR_1->d_list, &VAR_0->rs_table[VAR_2]);
 VAR_1->in_rs_table = 1;
}
