
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int * dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct snd_soc_card*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 () ;
 struct snd_soc_card VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct snd_soc_card *VAR_5 = &VAR_2;
 int VAR_6;

 if (FUNC_5())
  VAR_3 = VAR_0;
 else
  VAR_3 = VAR_1;

 VAR_6 = FUNC_4(VAR_3, "MIC GPIO");
 if (VAR_6)
  goto err1;

 VAR_6 = FUNC_2(VAR_3, 0);
 if (VAR_6)
  goto err2;

 VAR_5->dev = &VAR_4->dev;

 VAR_6 = FUNC_1(&VAR_4->dev, VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_4->dev, "snd_soc_register_card() failed: %d\n",
   VAR_6);
  goto err2;
 }

 return 0;

err2:
 FUNC_3(VAR_3);
err1:
 return VAR_6;
}
