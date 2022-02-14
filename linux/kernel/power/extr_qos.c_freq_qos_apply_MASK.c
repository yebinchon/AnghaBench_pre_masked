
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct freq_qos_request {int type; int pnode; TYPE_1__* qos; } ;
typedef int s32 ;
typedef enum pm_qos_req_action { ____Placeholder_pm_qos_req_action } pm_qos_req_action ;
struct TYPE_2__ {int max_freq; int min_freq; } ;


 int VAR_0 ;


 int FUNC_0 (int *,int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct freq_qos_request *VAR_1,
     enum pm_qos_req_action VAR_2, s32 VAR_3)
{
 int VAR_4;

 switch(VAR_1->type) {
 case 128:
  VAR_4 = FUNC_0(&VAR_1->qos->min_freq, &VAR_1->pnode,
        VAR_2, VAR_3);
  break;
 case 129:
  VAR_4 = FUNC_0(&VAR_1->qos->max_freq, &VAR_1->pnode,
        VAR_2, VAR_3);
  break;
 default:
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
