
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct axg_pdm {int pclk; int sysclk; int map; TYPE_1__* cfg; } ;
struct TYPE_2__ {int sys_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct axg_pdm*) ;
 int FUNC_2 (struct axg_pdm*) ;
 int FUNC_3 (struct axg_pdm*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 struct axg_pdm* FUNC_9 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_dai *VAR_2)
{
 struct axg_pdm *VAR_3 = FUNC_9(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_5(VAR_3->pclk);
 if (VAR_4) {
  FUNC_7(VAR_2->dev, "enabling pclk failed\n");
  return VAR_4;
 }





 VAR_4 = FUNC_6(VAR_3->sysclk, VAR_3->cfg->sys_rate);
 if (VAR_4) {
  FUNC_7(VAR_2->dev, "setting sysclk failed\n");
  goto err_pclk;
 }

 VAR_4 = FUNC_5(VAR_3->sysclk);
 if (VAR_4) {
  FUNC_7(VAR_2->dev, "enabling sysclk failed\n");
  goto err_pclk;
 }


 FUNC_0(VAR_3->map);


 FUNC_8(VAR_3->map, VAR_0, VAR_1, 0);


 FUNC_1(VAR_3);
 FUNC_2(VAR_3);

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4) {
  FUNC_7(VAR_2->dev, "invalid filter configuration\n");
  goto err_sysclk;
 }

 return 0;

err_sysclk:
 FUNC_4(VAR_3->sysclk);
err_pclk:
 FUNC_4(VAR_3->pclk);
 return VAR_4;
}
