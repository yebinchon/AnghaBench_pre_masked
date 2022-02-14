
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_output {int dummy; } ;
struct obs_encoder {int outputs_mutex; int outputs; } ;


 int FUNC_0 (int ,struct obs_output**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct obs_encoder *VAR_0,
          struct obs_output *VAR_1)
{
 if (!VAR_0)
  return;

 FUNC_1(&VAR_0->outputs_mutex);
 FUNC_0(VAR_0->outputs, &VAR_1);
 FUNC_2(&VAR_0->outputs_mutex);
}
