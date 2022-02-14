
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_slave_priv {TYPE_2__* dp; } ;
struct TYPE_4__ {int index; int pl; struct dsa_switch* ds; } ;
struct TYPE_3__ {int (* port_hwtstamp_get ) (struct dsa_switch*,int,struct ifreq*) ;int (* port_hwtstamp_set ) (struct dsa_switch*,int,struct ifreq*) ;} ;




 struct dsa_slave_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ifreq*,int) ;
 int FUNC_2 (struct dsa_switch*,int,struct ifreq*) ;
 int FUNC_3 (struct dsa_switch*,int,struct ifreq*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, struct ifreq *VAR_1, int VAR_2)
{
 struct dsa_slave_priv *VAR_3 = FUNC_0(VAR_0);
 struct dsa_switch *VAR_4 = VAR_3->dp->ds;
 int VAR_5 = VAR_3->dp->index;


 switch (VAR_2) {
 case 129:
  if (VAR_4->ops->port_hwtstamp_get)
   return VAR_4->ops->port_hwtstamp_get(VAR_4, VAR_5, VAR_1);
  break;
 case 128:
  if (VAR_4->ops->port_hwtstamp_set)
   return VAR_4->ops->port_hwtstamp_set(VAR_4, VAR_5, VAR_1);
  break;
 }

 return FUNC_1(VAR_3->dp->pl, VAR_1, VAR_2);
}
