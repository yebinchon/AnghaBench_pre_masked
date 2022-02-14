
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ux500_msp_i2s_drvdata {int msp; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 struct ux500_msp_i2s_drvdata* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct platform_device*,int ) ;
 int FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct ux500_msp_i2s_drvdata *VAR_2 = FUNC_0(&VAR_1->dev);

 FUNC_4(VAR_1);

 FUNC_2(&VAR_1->dev);

 FUNC_1(VAR_0, "ux500_msp_i2s");

 FUNC_3(VAR_1, VAR_2->msp);

 return 0;
}
