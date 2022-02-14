
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_4__ {int notifiers; } ;
struct TYPE_3__ {int notifiers; } ;
struct freq_constraints {TYPE_2__ max_freq; TYPE_1__ min_freq; } ;
typedef enum freq_qos_req_type { ____Placeholder_freq_qos_req_type } freq_qos_req_type ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (struct freq_constraints*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct notifier_block*) ;

int FUNC_3(struct freq_constraints *VAR_1,
        enum freq_qos_req_type VAR_2,
        struct notifier_block *VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_1) || !VAR_3)
  return -VAR_0;

 switch (VAR_2) {
 case 128:
  VAR_4 = FUNC_2(VAR_1->min_freq.notifiers,
        VAR_3);
  break;
 case 129:
  VAR_4 = FUNC_2(VAR_1->max_freq.notifiers,
        VAR_3);
  break;
 default:
  FUNC_1(1);
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
