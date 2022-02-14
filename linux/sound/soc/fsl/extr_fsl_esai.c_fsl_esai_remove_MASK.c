
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fsl_esai {int task; } ;


 struct fsl_esai* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct fsl_esai *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_0->dev);
 FUNC_2(&VAR_1->task);

 return 0;
}
