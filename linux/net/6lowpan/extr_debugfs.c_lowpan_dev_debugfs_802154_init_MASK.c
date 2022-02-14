
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct lowpan_dev {int iface_debugfs; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {TYPE_1__* wdev; } ;
struct TYPE_3__ {int ieee802154_ptr; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,struct dentry*,int ,int *) ;
 TYPE_2__* FUNC_2 (struct net_device const*) ;
 int FUNC_3 (struct net_device const*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(const struct net_device *VAR_2,
       struct lowpan_dev *VAR_3)
{
 struct dentry *VAR_4;

 if (!FUNC_3(VAR_2, VAR_0))
  return;

 VAR_4 = FUNC_0("ieee802154", VAR_3->iface_debugfs);

 FUNC_1("short_addr", 0444, VAR_4,
       FUNC_2(VAR_2)->wdev->ieee802154_ptr,
       &VAR_1);
}
