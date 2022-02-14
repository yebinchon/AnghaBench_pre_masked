
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_pdata {int * fw; int pdev_mach; } ;
struct snd_sof_dev {int probe_work; struct snd_sof_pdata* pdata; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct snd_sof_dev* FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_sof_dev*) ;
 int FUNC_7 (struct snd_sof_dev*) ;
 int FUNC_8 (struct snd_sof_dev*) ;
 int FUNC_9 (struct snd_sof_dev*) ;
 int FUNC_10 (struct snd_sof_dev*) ;

int FUNC_11(struct device *VAR_1)
{
 struct snd_sof_dev *VAR_2 = FUNC_3(VAR_1);
 struct snd_sof_pdata *VAR_3 = VAR_2->pdata;

 if (FUNC_0(VAR_0))
  FUNC_2(&VAR_2->probe_work);

 FUNC_8(VAR_2);
 FUNC_9(VAR_2);
 FUNC_6(VAR_2);
 FUNC_7(VAR_2);






 if (!FUNC_1(VAR_3->pdev_mach))
  FUNC_4(VAR_3->pdev_mach);







 FUNC_10(VAR_2);


 FUNC_5(VAR_3->fw);
 VAR_3->fw = ((void*)0);

 return 0;
}
