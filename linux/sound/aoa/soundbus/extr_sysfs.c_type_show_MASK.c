
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct soundbus_dev {struct platform_device ofdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*) ;
 struct soundbus_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct soundbus_dev *VAR_3 = FUNC_2(VAR_0);
 struct platform_device *VAR_4 = &VAR_3->ofdev;

 return FUNC_1(VAR_2, "%s\n", FUNC_0(VAR_4->dev.of_node));
}
