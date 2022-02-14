
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txx9aclc_plat_drvdata {scalar_t__ physbase; int base; } ;
struct resource {scalar_t__ start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct resource*) ;
 struct txx9aclc_plat_drvdata* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int,int ,int ,int ,struct txx9aclc_plat_drvdata*) ;
 int FUNC_6 (int *,int *,int *,int) ;
 int FUNC_7 (struct platform_device*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct txx9aclc_plat_drvdata*) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_8)
{
 struct txx9aclc_plat_drvdata *VAR_9;
 struct resource *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_7(VAR_8, 0);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_9 = FUNC_4(&VAR_8->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_8(VAR_8, VAR_2, 0);
 VAR_9->base = FUNC_3(&VAR_8->dev, VAR_10);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 FUNC_9(VAR_8, VAR_9);
 VAR_9->physbase = VAR_10->start;
 if (sizeof(VAR_9->physbase) > sizeof(VAR_10->start) &&
     VAR_10->start >= VAR_3 &&
     VAR_10->start < VAR_3 + 0x400000)
  VAR_9->physbase |= 0xf00000000ull;
 VAR_11 = FUNC_5(&VAR_8->dev, VAR_12, VAR_6,
          0, FUNC_2(&VAR_8->dev), VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_10(&VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 return FUNC_6(&VAR_8->dev, &VAR_4,
       &VAR_5, 1);
}
