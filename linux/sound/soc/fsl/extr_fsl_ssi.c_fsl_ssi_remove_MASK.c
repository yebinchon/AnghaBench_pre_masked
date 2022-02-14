
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct fsl_ssi {int ac97_reg_lock; TYPE_1__* soc; scalar_t__ card_pdev; int dbg_stats; } ;
struct TYPE_2__ {scalar_t__ imx; } ;


 struct fsl_ssi* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fsl_ssi*) ;
 int FUNC_3 (struct platform_device*,struct fsl_ssi*) ;
 scalar_t__ FUNC_4 (struct fsl_ssi*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct fsl_ssi *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_1->dbg_stats);

 if (VAR_1->card_pdev)
  FUNC_6(VAR_1->card_pdev);


 FUNC_2(VAR_1);

 if (VAR_1->soc->imx)
  FUNC_3(VAR_0, VAR_1);

 if (FUNC_4(VAR_1)) {
  FUNC_7(((void*)0));
  FUNC_5(&VAR_1->ac97_reg_lock);
 }

 return 0;
}
