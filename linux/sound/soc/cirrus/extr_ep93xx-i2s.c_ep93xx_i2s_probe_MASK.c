
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; int name; } ;
struct ep93xx_i2s_info {void* mclk; void* sclk; void* lrclk; void* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int *,char*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *,struct ep93xx_i2s_info*) ;
 int FUNC_6 (int *) ;
 struct ep93xx_i2s_info* FUNC_7 (int *,int,int ) ;
 void* FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (int *,int,int ,int ,int ,struct ep93xx_i2s_info*) ;
 int FUNC_10 (int *,int *,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_7)
{
 struct ep93xx_i2s_info *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_7(&VAR_7->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->regs = FUNC_8(VAR_7, 0);
 if (FUNC_1(VAR_8->regs))
  return FUNC_2(VAR_8->regs);

 if (FUNC_0(VAR_0)) {
  int VAR_10 = FUNC_11(VAR_7, 0);
  if (VAR_10 <= 0)
   return VAR_10 < 0 ? VAR_10 : -VAR_1;

  VAR_9 = FUNC_9(&VAR_7->dev, VAR_10, VAR_6, 0,
           VAR_7->name, VAR_8);
  if (VAR_9)
   return VAR_9;
 }

 VAR_8->mclk = FUNC_3(&VAR_7->dev, "mclk");
 if (FUNC_1(VAR_8->mclk)) {
  VAR_9 = FUNC_2(VAR_8->mclk);
  goto fail;
 }

 VAR_8->sclk = FUNC_3(&VAR_7->dev, "sclk");
 if (FUNC_1(VAR_8->sclk)) {
  VAR_9 = FUNC_2(VAR_8->sclk);
  goto fail_put_mclk;
 }

 VAR_8->lrclk = FUNC_3(&VAR_7->dev, "lrclk");
 if (FUNC_1(VAR_8->lrclk)) {
  VAR_9 = FUNC_2(VAR_8->lrclk);
  goto fail_put_sclk;
 }

 FUNC_5(&VAR_7->dev, VAR_8);

 VAR_9 = FUNC_10(&VAR_7->dev, &VAR_4,
      &VAR_5, 1);
 if (VAR_9)
  goto fail_put_lrclk;

 VAR_9 = FUNC_6(&VAR_7->dev);
 if (VAR_9)
  goto fail_put_lrclk;

 return 0;

fail_put_lrclk:
 FUNC_4(VAR_8->lrclk);
fail_put_sclk:
 FUNC_4(VAR_8->sclk);
fail_put_mclk:
 FUNC_4(VAR_8->mclk);
fail:
 return VAR_9;
}
