
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ addr; int dev; } ;
struct phy_device {struct adm6996_priv* priv; TYPE_2__* attached_dev; TYPE_1__ mdio; void* advertising; void* supported; } ;
struct adm6996_priv {int write; int read; struct phy_device* priv; int mib_lock; int reg_mutex; } ;
struct TYPE_4__ {int name; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adm6996_priv*,int ,TYPE_2__*) ;
 int VAR_4 ;
 struct adm6996_priv* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_5)
{
 struct adm6996_priv *VAR_6;
 int VAR_7;

 VAR_5->supported = VAR_0;
 VAR_5->advertising = VAR_0;

 if (VAR_5->mdio.addr != 0) {
  FUNC_3 ("%s: PHY overlaps ADM6996, providing fixed PHY 0x%x.\n"
    , VAR_5->attached_dev->name, VAR_5->mdio.addr);
  return 0;
 }

 VAR_6 = FUNC_1(&VAR_5->mdio.dev, sizeof(struct adm6996_priv), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_2(&VAR_6->reg_mutex);
 FUNC_2(&VAR_6->mib_lock);
 VAR_6->priv = VAR_5;
 VAR_6->read = VAR_3;
 VAR_6->write = VAR_4;

 VAR_7 = FUNC_0(VAR_6, VAR_5->attached_dev->name, VAR_5->attached_dev);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5->priv = VAR_6;

 return 0;
}
