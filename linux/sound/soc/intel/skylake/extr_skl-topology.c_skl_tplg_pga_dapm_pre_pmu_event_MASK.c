
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {struct skl_module_cfg* priv; } ;
struct skl_module_cfg {TYPE_1__* pipe; } ;
struct skl_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ conn_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct skl_dev*,TYPE_1__*) ;
 int FUNC_1 (struct snd_soc_dapm_widget*,struct skl_dev*,struct snd_soc_dapm_widget*,struct skl_module_cfg*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_1,
       struct skl_dev *VAR_2)
{
 struct skl_module_cfg *VAR_3;
 int VAR_4 = 0;

 VAR_3 = VAR_1->priv;






 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_1, VAR_3);
 if (VAR_4)
  return VAR_4;


 if (VAR_3->pipe->conn_type != VAR_0)
  return FUNC_0(VAR_2, VAR_3->pipe);

 return 0;
}
