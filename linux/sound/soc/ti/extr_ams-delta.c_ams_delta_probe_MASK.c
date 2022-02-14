
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int * dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct snd_soc_card VAR_1 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct snd_soc_card *VAR_5 = &VAR_1;
 int VAR_6;

 VAR_5->dev = &VAR_4->dev;

 VAR_2 = FUNC_3(VAR_5->dev, "handset_mute",
          VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_3(VAR_5->dev, "handsfree_mute",
     VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6) {
  FUNC_2(&VAR_4->dev, "snd_soc_register_card failed (%d)\n", VAR_6);
  VAR_5->dev = ((void*)0);
  return VAR_6;
 }
 return 0;
}
