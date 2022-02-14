
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int input_dev; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct platform_device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_0.input_dev, &VAR_1->dev);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_0(&VAR_1->dev);
 if (VAR_2 < 0) {
  FUNC_2(VAR_0.input_dev);
  return VAR_2;
 }

 FUNC_3(VAR_1, &VAR_0);
 return 0;
}
