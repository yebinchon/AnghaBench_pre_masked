
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {struct sam9x5_drvdata* drvdata; } ;
struct sam9x5_drvdata {int ssc_id; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct snd_soc_card* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct snd_soc_card *VAR_1 = FUNC_1(VAR_0);
 struct sam9x5_drvdata *VAR_2 = VAR_1->drvdata;

 FUNC_2(VAR_1);
 FUNC_0(VAR_2->ssc_id);

 return 0;
}
