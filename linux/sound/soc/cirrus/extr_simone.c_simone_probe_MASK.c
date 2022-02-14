
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int * dev; } ;
struct platform_device {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (char*,int,int *,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (struct snd_soc_card*) ;
 struct snd_soc_card VAR_1 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct snd_soc_card *VAR_3 = &VAR_1;
 int VAR_4;

 VAR_0 = FUNC_3("ac97-codec",
         -1, ((void*)0), 0);
 if (FUNC_0(VAR_0))
  return FUNC_1(VAR_0);

 VAR_3->dev = &VAR_2->dev;

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4) {
  FUNC_2(&VAR_2->dev, "snd_soc_register_card() failed: %d\n",
   VAR_4);
  FUNC_4(VAR_0);
 }

 return VAR_4;
}
