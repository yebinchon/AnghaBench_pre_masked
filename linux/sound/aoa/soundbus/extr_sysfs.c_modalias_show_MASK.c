
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct soundbus_dev {scalar_t__* modalias; struct platform_device ofdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int ,char,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,scalar_t__*,int) ;
 int FUNC_4 (char*) ;
 struct soundbus_dev* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct soundbus_dev *VAR_3 = FUNC_5(VAR_0);
 struct platform_device *VAR_4 = &VAR_3->ofdev;
 int VAR_5;

 if (*VAR_3->modalias) {
  FUNC_3(VAR_2, VAR_3->modalias, sizeof(VAR_3->modalias) + 1);
  FUNC_2(VAR_2, "\n");
  VAR_5 = FUNC_4(VAR_2);
 } else {
  VAR_5 = FUNC_1(VAR_2, "of:N%pOFn%c%s\n",
     VAR_4->dev.of_node, 'T',
                                 FUNC_0(VAR_4->dev.of_node));
 }

 return VAR_5;
}
