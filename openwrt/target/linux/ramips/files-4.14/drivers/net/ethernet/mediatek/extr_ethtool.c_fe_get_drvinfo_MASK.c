
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fe_soc_data {scalar_t__* reg_table; } ;
struct fe_priv {TYPE_2__* dev; struct fe_soc_data* soc; } ;
struct ethtool_drvinfo {int n_stats; int bus_info; int version; int driver; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 struct fe_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3,
      struct ethtool_drvinfo *VAR_4)
{
 struct fe_priv *VAR_5 = FUNC_2(VAR_3);
 struct fe_soc_data *VAR_6 = VAR_5->soc;

 FUNC_3(VAR_4->driver, VAR_5->dev->driver->name, sizeof(VAR_4->driver));
 FUNC_3(VAR_4->version, VAR_1, sizeof(VAR_4->version));
 FUNC_3(VAR_4->bus_info, FUNC_1(VAR_5->dev), sizeof(VAR_4->bus_info));

 if (VAR_6->reg_table[VAR_0])
  VAR_4->n_stats = FUNC_0(VAR_2);
}
