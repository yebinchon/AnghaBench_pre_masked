
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_data {int dummy; } ;
struct sst_cmd_set_params {int params; int command_id; int dst; } ;
struct sst_algo_control {int max; int task_id; int params; int cmd_id; int module_id; int pipe_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sst_cmd_set_params*) ;
 struct sst_cmd_set_params* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct sst_data*,int ,int ,int ,int ,struct sst_cmd_set_params*,int) ;

__attribute__((used)) static int FUNC_5(struct sst_data *VAR_4,
         struct sst_algo_control *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 struct sst_cmd_set_params *VAR_8;


 VAR_6 = sizeof(VAR_8->dst) + sizeof(VAR_8->command_id) + VAR_5->max;

 VAR_8 = FUNC_2(VAR_6, VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 FUNC_0(2, VAR_8->dst, VAR_5->pipe_id, VAR_5->module_id);
 VAR_8->command_id = VAR_5->cmd_id;
 FUNC_3(VAR_8->params, VAR_5->params, VAR_5->max);

 VAR_7 = FUNC_4(VAR_4, VAR_3,
    VAR_2, VAR_5->task_id, 0, VAR_8, VAR_6);
 FUNC_1(VAR_8);
 return VAR_7;
}
