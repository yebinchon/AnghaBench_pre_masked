
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ag71xx_mdio {TYPE_1__* mii_bus; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct ag71xx_mdio*,int ) ;

__attribute__((used)) static void FUNC_2(struct ag71xx_mdio *VAR_6)
{
 FUNC_0("%s: mii_cfg=%08x, mii_cmd=%08x, mii_addr=%08x\n",
  VAR_6->mii_bus->name,
  FUNC_1(VAR_6, VAR_1),
  FUNC_1(VAR_6, VAR_2),
  FUNC_1(VAR_6, VAR_0));
 FUNC_0("%s: mii_ctrl=%08x, mii_status=%08x, mii_ind=%08x\n",
  VAR_6->mii_bus->name,
  FUNC_1(VAR_6, VAR_3),
  FUNC_1(VAR_6, VAR_5),
  FUNC_1(VAR_6, VAR_4));
}
