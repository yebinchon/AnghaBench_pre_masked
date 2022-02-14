
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sti_uniperiph_data {void* dai; struct platform_device* pdev; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct sti_uniperiph_data*) ;
 void* FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int *,void*,int) ;
 int VAR_2 ;
 int FUNC_4 (struct device_node*,struct sti_uniperiph_data*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct sti_uniperiph_data *VAR_5;
 struct device_node *VAR_6 = VAR_4->dev.of_node;
 int VAR_7;


 VAR_5 = FUNC_1(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->dai = FUNC_1(&VAR_4->dev, sizeof(*VAR_5->dai), VAR_1);
 if (!VAR_5->dai)
  return -VAR_0;

 VAR_5->pdev = VAR_4;

 VAR_7 = FUNC_4(VAR_6, VAR_5);

 FUNC_0(&VAR_4->dev, VAR_5);

 VAR_7 = FUNC_3(&VAR_4->dev,
           &VAR_3,
           VAR_5->dai, 1);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_2(&VAR_4->dev,
            &VAR_2, 0);
}
