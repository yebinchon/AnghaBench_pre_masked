
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdev_state {TYPE_1__* type; } ;
struct mdev_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int mbytes; } ;


 struct mdev_device* FUNC_0 (struct device*) ;
 struct mdev_state* FUNC_1 (struct mdev_device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct mdev_device *VAR_3 = FUNC_0(VAR_0);
 struct mdev_state *VAR_4 = FUNC_1(VAR_3);

 return FUNC_2(VAR_2, "%d MB\n", VAR_4->type->mbytes);
}
