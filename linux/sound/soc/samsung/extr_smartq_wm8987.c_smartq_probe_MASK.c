
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (int *,char*) ;
 struct gpio_desc* FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct platform_device*,int *) ;
 int FUNC_6 (int *,struct gpio_desc*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct gpio_desc *VAR_3;
 int VAR_4;

 FUNC_5(VAR_2, &VAR_1);


 VAR_3 = FUNC_3(&VAR_2->dev, "amplifiers shutdown",
         VAR_0);
 if (FUNC_0(VAR_3)) {
  FUNC_2(&VAR_2->dev, "Failed to register GPK12\n");
  VAR_4 = FUNC_1(VAR_3);
  goto out;
 }
 FUNC_6(&VAR_1, VAR_3);

 VAR_4 = FUNC_4(&VAR_2->dev, &VAR_1);
 if (VAR_4)
  FUNC_2(&VAR_2->dev, "Failed to register card\n");

out:
 return VAR_4;
}
