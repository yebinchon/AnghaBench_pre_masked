
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sst_device {int name; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sst_device* VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct sst_device *VAR_4)
{
 if (FUNC_0(!VAR_4))
  return -VAR_0;
 if (VAR_4 != VAR_2)
  return -VAR_0;

 FUNC_3(&VAR_3);

 if (!VAR_2) {
  FUNC_4(&VAR_3);
  return -VAR_1;
 }

 FUNC_2(VAR_2->dev->driver->owner);
 FUNC_1(VAR_4->dev, "unreg %s\n", VAR_2->name);
 VAR_2 = ((void*)0);
 FUNC_4(&VAR_3);
 return 0;
}
