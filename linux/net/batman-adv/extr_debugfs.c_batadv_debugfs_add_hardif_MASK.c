
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net {int dummy; } ;
struct batadv_hard_iface {TYPE_2__* net_dev; int debug_dir; } ;
struct TYPE_4__ {int mode; int name; } ;
struct batadv_debuginfo {int fops; TYPE_1__ attr; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct batadv_debuginfo** VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int ,TYPE_2__*,int *) ;
 struct net* FUNC_2 (TYPE_2__*) ;
 struct net VAR_3 ;

void FUNC_3(struct batadv_hard_iface *VAR_4)
{
 struct net *VAR_5 = FUNC_2(VAR_4->net_dev);
 struct batadv_debuginfo **VAR_6;

 if (VAR_5 != &VAR_3)
  return;

 VAR_4->debug_dir = FUNC_0(VAR_4->net_dev->name,
         VAR_1);

 for (VAR_6 = VAR_2; *VAR_6; ++VAR_6)
  FUNC_1(((*VAR_6)->attr).name,
        VAR_0 | ((*VAR_6)->attr).mode,
        VAR_4->debug_dir, VAR_4->net_dev,
        &(*VAR_6)->fops);
}
