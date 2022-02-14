
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int name; struct skl_module_cfg* priv; } ;
struct skl_pipe_params {int dummy; } ;
struct skl_module_cfg {int params_fixup; TYPE_1__* pipe; } ;
struct skl_dev {int dev; } ;
struct TYPE_2__ {int conn_type; struct skl_pipe_params* p_params; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct skl_dev*,struct skl_module_cfg*) ;
 int FUNC_2 (struct skl_dev*,struct skl_module_cfg*) ;
 int FUNC_3 (struct skl_module_cfg*,struct skl_pipe_params*,int) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_dapm_widget *VAR_1,
       struct skl_dev *VAR_2)
{
 struct skl_module_cfg *VAR_3 = VAR_1->priv;
 struct skl_pipe_params *VAR_4 = VAR_3->pipe->p_params;
 int VAR_5 = VAR_3->pipe->conn_type;
 bool VAR_6;

 if (!VAR_3->params_fixup)
  return;

 FUNC_0(VAR_2->dev, "Mconfig for widget=%s BEFORE updation\n",
    VAR_1->name);

 FUNC_1(VAR_2, VAR_3);

 if (VAR_5 == VAR_0)
  VAR_6 = 1;
 else
  VAR_6 = 0;

 FUNC_3(VAR_3, VAR_4, VAR_6);
 FUNC_2(VAR_2, VAR_3);

 FUNC_0(VAR_2->dev, "Mconfig for widget=%s AFTER updation\n",
    VAR_1->name);

 FUNC_1(VAR_2, VAR_3);
}
