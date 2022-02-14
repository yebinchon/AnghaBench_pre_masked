
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct skl_algo_data* private; } ;
struct soc_bytes_ext {TYPE_2__ dobj; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct snd_soc_tplg_bytes_control {TYPE_1__ priv; } ;
struct skl_dfw_algo_data {int max; int params; int set_params; int param_id; } ;
struct skl_algo_data {int max; int size; void* params; int set_params; int param_id; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (void*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, struct soc_bytes_ext *VAR_3,
     struct snd_soc_tplg_bytes_control *VAR_4)
{
 struct skl_algo_data *VAR_5;
 struct skl_dfw_algo_data *VAR_6 =
    (struct skl_dfw_algo_data *)VAR_4->priv.data;

 VAR_5 = FUNC_0(VAR_2, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;


 VAR_5->max = VAR_6->max;
 VAR_5->param_id = VAR_6->param_id;
 VAR_5->set_params = VAR_6->set_params;
 VAR_5->size = VAR_6->max;

 if (VAR_5->max) {
  VAR_5->params = FUNC_0(VAR_2, VAR_5->max, VAR_1);
  if (!VAR_5->params)
   return -VAR_0;

  FUNC_1(VAR_5->params, VAR_6->params, VAR_5->max);
 }

 VAR_3->dobj.private = VAR_5;
 return 0;
}
