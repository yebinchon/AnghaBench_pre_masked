
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dev_addr; } ;
struct fe_priv {TYPE_1__* soc; } ;
struct TYPE_2__ {int (* set_mac ) (struct fe_priv*,int ) ;} ;


 int FUNC_0 (struct net_device*,void*) ;
 int FUNC_1 (struct fe_priv*,void*) ;
 struct fe_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct fe_priv*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, void *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_2) {
  struct fe_priv *VAR_3 = FUNC_2(VAR_0);

  if (VAR_3->soc->set_mac)
   VAR_3->soc->set_mac(VAR_3, VAR_0->dev_addr);
  else
   FUNC_1(VAR_3, VAR_1);
 }

 return VAR_2;
}
