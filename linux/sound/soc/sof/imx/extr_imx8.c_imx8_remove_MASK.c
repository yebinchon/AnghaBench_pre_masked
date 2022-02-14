
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {scalar_t__ private; } ;
struct imx8_priv {int num_domains; int * pd_dev; int * link; int ipc_dev; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_sof_dev *VAR_0)
{
 struct imx8_priv *VAR_1 = (struct imx8_priv *)VAR_0->private;
 int VAR_2;

 FUNC_2(VAR_1->ipc_dev);

 for (VAR_2 = 0; VAR_2 < VAR_1->num_domains; VAR_2++) {
  FUNC_1(VAR_1->link[VAR_2]);
  FUNC_0(VAR_1->pd_dev[VAR_2], 0);
 }

 return 0;
}
