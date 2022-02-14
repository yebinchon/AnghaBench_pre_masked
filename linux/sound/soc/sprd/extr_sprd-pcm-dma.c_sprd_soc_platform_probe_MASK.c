
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int *,int *,int ) ;
 int FUNC_3 (TYPE_1__*,struct device_node*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev.of_node;
 int VAR_3;

 VAR_3 = FUNC_3(&VAR_1->dev, VAR_2, 0);
 if (VAR_3)
  FUNC_1(&VAR_1->dev,
    "no reserved DMA memory for audio platform device\n");

 VAR_3 = FUNC_2(&VAR_1->dev, &VAR_0,
           ((void*)0), 0);
 if (VAR_3)
  FUNC_0(&VAR_1->dev, "could not register platform:%d\n", VAR_3);

 return VAR_3;
}
