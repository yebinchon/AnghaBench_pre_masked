
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {struct skl_module_cfg* priv; } ;
struct skl_module_cfg {TYPE_1__* pipe; } ;
struct skl_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; scalar_t__ conn_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct skl_dev*,struct skl_module_cfg*,struct skl_module_cfg*) ;
 struct snd_soc_dapm_widget* FUNC_1 (struct snd_soc_dapm_widget*,struct skl_dev*) ;
 int FUNC_2 (struct skl_dev*,TYPE_1__*) ;
 int FUNC_3 (struct snd_soc_dapm_widget*,struct skl_module_cfg*,struct skl_dev*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_2,
       struct skl_dev *VAR_3)
{
 int VAR_4 = 0;
 struct snd_soc_dapm_widget *VAR_5, *VAR_6;
 struct skl_module_cfg *VAR_7, *VAR_8;
 int VAR_9 = 0;

 VAR_6 = VAR_2;
 VAR_8 = VAR_6->priv;






 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5 != ((void*)0)) {
  VAR_7 = VAR_5->priv;
  VAR_8 = VAR_6->priv;
  VAR_9 = 1;





  if (VAR_7->pipe->state != VAR_1)
   VAR_9 = 0;
 }

 if (VAR_9) {
  VAR_4 = FUNC_0(VAR_3, VAR_7, VAR_8);
  if (VAR_4)
   return VAR_4;


  FUNC_3(VAR_5, VAR_7, VAR_3);
  FUNC_3(VAR_6, VAR_8, VAR_3);

  if (VAR_8->pipe->conn_type != VAR_0)
   VAR_4 = FUNC_2(VAR_3, VAR_8->pipe);
 }

 return VAR_4;
}
