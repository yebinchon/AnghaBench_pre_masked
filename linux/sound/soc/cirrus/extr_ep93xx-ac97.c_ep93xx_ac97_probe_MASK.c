
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; int name; } ;
struct ep93xx_ac97_info {int * dev; int done; int lock; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct ep93xx_ac97_info*) ;
 int FUNC_3 (int *) ;
 struct ep93xx_ac97_info* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (int *,int,int ,int ,int ,struct ep93xx_ac97_info*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct ep93xx_ac97_info* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct platform_device*,struct ep93xx_ac97_info*) ;
 int FUNC_11 (int *,int *,int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_9)
{
 struct ep93xx_ac97_info *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_10 = FUNC_4(&VAR_9->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->regs = FUNC_5(VAR_9, 0);
 if (FUNC_0(VAR_10->regs))
  return FUNC_1(VAR_10->regs);

 VAR_11 = FUNC_9(VAR_9, 0);
 if (VAR_11 <= 0)
  return VAR_11 < 0 ? VAR_11 : -VAR_0;

 VAR_12 = FUNC_6(&VAR_9->dev, VAR_11, VAR_7,
          VAR_3, VAR_9->name, VAR_10);
 if (VAR_12)
  goto fail;

 FUNC_2(&VAR_9->dev, VAR_10);

 FUNC_8(&VAR_10->lock);
 FUNC_7(&VAR_10->done);
 VAR_10->dev = &VAR_9->dev;

 VAR_6 = VAR_10;
 FUNC_10(VAR_9, VAR_10);

 VAR_12 = FUNC_12(&VAR_8);
 if (VAR_12)
  goto fail;

 VAR_12 = FUNC_11(&VAR_9->dev, &VAR_4,
      &VAR_5, 1);
 if (VAR_12)
  goto fail;

 VAR_12 = FUNC_3(&VAR_9->dev);
 if (VAR_12)
  goto fail_unregister;

 return 0;

fail_unregister:
 FUNC_13(&VAR_9->dev);
fail:
 VAR_6 = ((void*)0);
 FUNC_12(((void*)0));
 return VAR_12;
}
