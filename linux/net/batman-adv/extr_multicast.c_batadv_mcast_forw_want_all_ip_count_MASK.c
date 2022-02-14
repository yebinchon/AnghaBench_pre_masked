
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ethhdr {int h_proto; } ;
struct TYPE_2__ {int num_want_all_ipv6; int num_want_all_ipv4; } ;
struct batadv_priv {TYPE_1__ mcast; } ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct batadv_priv *VAR_0,
            struct ethhdr *VAR_1)
{
 switch (FUNC_1(VAR_1->h_proto)) {
 case 129:
  return FUNC_0(&VAR_0->mcast.num_want_all_ipv4);
 case 128:
  return FUNC_0(&VAR_0->mcast.num_want_all_ipv6);
 default:

  return 0;
 }
}
