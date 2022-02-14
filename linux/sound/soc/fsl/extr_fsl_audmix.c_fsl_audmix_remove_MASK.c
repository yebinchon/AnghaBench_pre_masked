
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fsl_audmix {scalar_t__ pdev; } ;


 struct fsl_audmix* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct fsl_audmix *VAR_1 = FUNC_0(&VAR_0->dev);

 if (VAR_1->pdev)
  FUNC_1(VAR_1->pdev);

 return 0;
}
