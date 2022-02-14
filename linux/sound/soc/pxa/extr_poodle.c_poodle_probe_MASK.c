
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_card {int * dev; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct snd_soc_card*) ;
 int FUNC_2 (int *,int ,int ) ;
 struct snd_soc_card VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_5)
{
 struct snd_soc_card *VAR_6 = &VAR_3;
 int VAR_7;

 FUNC_2(&VAR_4.dev,
  VAR_0, 0);

 FUNC_2(&VAR_4.dev,
  VAR_1, 0);
 FUNC_2(&VAR_4.dev,
  VAR_2, 0);

 VAR_6->dev = &VAR_5->dev;

 VAR_7 = FUNC_1(&VAR_5->dev, VAR_6);
 if (VAR_7)
  FUNC_0(&VAR_5->dev, "snd_soc_register_card() failed: %d\n",
   VAR_7);
 return VAR_7;
}
