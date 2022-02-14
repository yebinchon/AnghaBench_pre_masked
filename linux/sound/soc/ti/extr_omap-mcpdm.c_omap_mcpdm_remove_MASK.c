
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct omap_mcpdm {int pm_qos_req; int dev; int irq; } ;


 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct omap_mcpdm* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_0)
{
 struct omap_mcpdm *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(VAR_1->irq, (void *)VAR_1);
 FUNC_3(VAR_1->dev);

 if (FUNC_2(&VAR_1->pm_qos_req))
  FUNC_1(&VAR_1->pm_qos_req);

 return 0;
}
