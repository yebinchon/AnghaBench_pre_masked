
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int * dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct snd_soc_card* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct snd_soc_card*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct snd_soc_card *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_3(VAR_0) != 0)
  FUNC_0(&VAR_1->dev,
   "failed to unregister V253 line discipline\n");

 FUNC_2(VAR_2);
 VAR_2->dev = ((void*)0);
 return 0;
}
