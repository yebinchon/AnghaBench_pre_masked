
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * advertising; int * supported; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;

void FUNC_1(struct ethtool_link_ksettings *VAR_1,
      struct ethtool_link_ksettings *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_0);
 unsigned int VAR_4 = 0;

 for (; VAR_4 < VAR_3; VAR_4++) {
  VAR_1->link_modes.supported[VAR_4] &=
   VAR_2->link_modes.supported[VAR_4];
  VAR_1->link_modes.advertising[VAR_4] &=
   VAR_2->link_modes.advertising[VAR_4];
 }
}
