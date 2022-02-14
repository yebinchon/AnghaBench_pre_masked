
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int * dev; } ;
struct s3c24xx_uda134x {int clk_lock; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 struct s3c24xx_uda134x* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,struct snd_soc_card*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_soc_card*,struct s3c24xx_uda134x*) ;
 struct snd_soc_card VAR_2 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct snd_soc_card *VAR_4 = &VAR_2;
 struct s3c24xx_uda134x *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(&VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_3(&VAR_5->clk_lock);

 VAR_4->dev = &VAR_3->dev;
 FUNC_4(VAR_4, VAR_5);

 VAR_6 = FUNC_2(&VAR_3->dev, VAR_4);
 if (VAR_6)
  FUNC_0(&VAR_3->dev, "failed to register card: %d\n", VAR_6);

 return VAR_6;
}
