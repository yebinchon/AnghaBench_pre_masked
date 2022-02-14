
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mii_bus {struct dsa_switch* priv; } ;
struct dsa_switch {int phys_mii_mask; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* phy_write ) (struct dsa_switch*,int,int,int ) ;} ;


 int FUNC_0 (struct dsa_switch*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct mii_bus *VAR_0, int VAR_1, int VAR_2, u16 VAR_3)
{
 struct dsa_switch *VAR_4 = VAR_0->priv;

 if (VAR_4->phys_mii_mask & (1 << VAR_1))
  return VAR_4->ops->phy_write(VAR_4, VAR_1, VAR_2, VAR_3);

 return 0;
}
