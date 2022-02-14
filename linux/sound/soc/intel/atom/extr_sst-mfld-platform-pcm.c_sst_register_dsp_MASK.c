
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sst_device {int name; TYPE_2__* dev; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sst_device* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;

int FUNC_7(struct sst_device *VAR_5)
{
 if (FUNC_0(!VAR_5))
  return -VAR_1;
 if (!FUNC_6(VAR_5->dev->driver->owner))
  return -VAR_2;
 FUNC_4(&VAR_4);
 if (VAR_3) {
  FUNC_2(VAR_5->dev, "we already have a device %s\n", VAR_3->name);
  FUNC_3(VAR_5->dev->driver->owner);
  FUNC_5(&VAR_4);
  return -VAR_0;
 }
 FUNC_1(VAR_5->dev, "registering device %s\n", VAR_5->name);
 VAR_3 = VAR_5;
 FUNC_5(&VAR_4);
 return 0;
}
