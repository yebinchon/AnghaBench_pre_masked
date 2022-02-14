
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fsl_esai {int regmap; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct fsl_esai *VAR_9)
{
 struct platform_device *VAR_10 = VAR_9->pdev;
 int VAR_11;


 VAR_11 = FUNC_1(VAR_9->regmap, VAR_6,
     VAR_3 | VAR_1,
     VAR_2 | VAR_0);
 if (VAR_11) {
  FUNC_0(&VAR_10->dev, "failed to reset ESAI: %d\n", VAR_11);
  return VAR_11;
 }





 VAR_11 = FUNC_1(VAR_9->regmap, VAR_6,
     VAR_3 | VAR_1,
     VAR_2);
 if (VAR_11) {
  FUNC_0(&VAR_10->dev, "failed to enable ESAI: %d\n", VAR_11);
  return VAR_11;
 }

 FUNC_1(VAR_9->regmap, VAR_8,
      VAR_5, 0);
 FUNC_1(VAR_9->regmap, VAR_7,
      VAR_4, 0);

 return 0;
}
