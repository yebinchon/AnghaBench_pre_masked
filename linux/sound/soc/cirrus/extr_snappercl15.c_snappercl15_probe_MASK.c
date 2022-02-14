
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int * dev; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct snd_soc_card*) ;
 struct snd_soc_card VAR_0 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct snd_soc_card *VAR_2 = &VAR_0;
 int VAR_3;

 VAR_3 = FUNC_1();
 if (VAR_3)
  return VAR_3;

 VAR_2->dev = &VAR_1->dev;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_1->dev, "snd_soc_register_card() failed: %d\n",
   VAR_3);
  FUNC_2();
 }

 return VAR_3;
}
