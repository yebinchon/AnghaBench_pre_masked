
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wimax_dev {int mutex; struct net_device* net_dev; } ;
struct TYPE_2__ {struct device* parent; } ;
struct net_device {int name; int addr_len; int dev_addr; TYPE_1__ dev; } ;
struct device {int dummy; } ;
typedef int addr_str ;


 int VAR_0 ;
 int FUNC_0 (struct wimax_dev*,int ) ;
 int FUNC_1 (int,struct device*,char*,struct wimax_dev*,struct net_device*,...) ;
 int FUNC_2 (int,struct device*,char*,struct wimax_dev*,struct net_device*) ;
 int FUNC_3 (struct device*,char*,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int ,int ) ;
 int FUNC_7 (struct wimax_dev*) ;
 int FUNC_8 (struct wimax_dev*) ;
 int FUNC_9 (struct wimax_dev*) ;

int FUNC_10(struct wimax_dev *VAR_1, struct net_device *VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = VAR_2->dev.parent;
 char VAR_5[32];

 FUNC_2(3, VAR_4, "(wimax_dev %p net_dev %p)\n", VAR_1, VAR_2);




 VAR_1->net_dev = VAR_2;
 VAR_3 = FUNC_9(VAR_1);
 if (VAR_3 < 0)
  goto error_rfkill_add;


 FUNC_4(&VAR_1->mutex);
 FUNC_8(VAR_1);
 FUNC_7(VAR_1);

 FUNC_0(VAR_1, VAR_0);
 FUNC_5(&VAR_1->mutex);

 FUNC_6(VAR_5, sizeof(VAR_5),
       VAR_2->dev_addr, VAR_2->addr_len);
 FUNC_3(VAR_4, "WiMAX interface %s (%s) ready\n",
  VAR_2->name, VAR_5);
 FUNC_1(3, VAR_4, "(wimax_dev %p net_dev %p) = 0\n", VAR_1, VAR_2);
 return 0;

error_rfkill_add:
 FUNC_1(3, VAR_4, "(wimax_dev %p net_dev %p) = %d\n",
  VAR_1, VAR_2, VAR_3);
 return VAR_3;
}
