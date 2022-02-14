
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_mcdt_dev {int lock; int * dev; int base; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,struct resource*) ;
 struct sprd_mcdt_dev* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int,int ,int ,char*,struct sprd_mcdt_dev*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct sprd_mcdt_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sprd_mcdt_dev*,struct resource*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_4)
{
 struct sprd_mcdt_dev *VAR_5;
 struct resource *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_4(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_7(VAR_4, VAR_2, 0);
 VAR_5->base = FUNC_3(&VAR_4->dev, VAR_6);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 VAR_5->dev = &VAR_4->dev;
 FUNC_9(&VAR_5->lock);
 FUNC_8(VAR_4, VAR_5);

 VAR_8 = FUNC_6(VAR_4, 0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_5(&VAR_4->dev, VAR_8, VAR_3,
          0, "sprd-mcdt", VAR_5);
 if (VAR_7) {
  FUNC_2(&VAR_4->dev, "Failed to request MCDT IRQ\n");
  return VAR_7;
 }

 FUNC_10(VAR_5, VAR_6);

 return 0;
}
