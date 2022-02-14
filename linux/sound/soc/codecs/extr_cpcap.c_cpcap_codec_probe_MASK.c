
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct device_node* of_node; TYPE_1__* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int of_node; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *,int ,int ) ;
 struct device_node* FUNC_2 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct device_node *VAR_3 =
  FUNC_2(VAR_2->dev.parent->of_node, "audio-codec");

 VAR_2->dev.of_node = VAR_3;

 return FUNC_1(&VAR_2->dev, &VAR_1,
          VAR_0, FUNC_0(VAR_0));
}
