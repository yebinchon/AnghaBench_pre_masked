
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_want_all_rtr6; int num_want_all_rtr4; } ;
struct batadv_priv {TYPE_1__ mcast; } ;




 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct batadv_priv *VAR_0,
           int VAR_1)
{
 switch (VAR_1) {
 case 129:
  return FUNC_0(&VAR_0->mcast.num_want_all_rtr4);
 case 128:
  return FUNC_0(&VAR_0->mcast.num_want_all_rtr6);
 default:
  return 0;
 }
}
