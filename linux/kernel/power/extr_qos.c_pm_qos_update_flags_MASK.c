
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_qos_flags_request {int node; scalar_t__ flags; } ;
struct pm_qos_flags {scalar_t__ effective_flags; int list; } ;
typedef scalar_t__ s32 ;
typedef enum pm_qos_req_action { ____Placeholder_pm_qos_req_action } pm_qos_req_action ;


 int FUNC_0 (int *) ;



 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct pm_qos_flags*,struct pm_qos_flags_request*) ;
 int VAR_0 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__,scalar_t__) ;

bool FUNC_7(struct pm_qos_flags *VAR_1,
    struct pm_qos_flags_request *VAR_2,
    enum pm_qos_req_action VAR_3, s32 VAR_4)
{
 unsigned long VAR_5;
 s32 VAR_6, VAR_7;

 FUNC_4(&VAR_0, VAR_5);

 VAR_6 = FUNC_2(&VAR_1->list) ? 0 : VAR_1->effective_flags;

 switch (VAR_3) {
 case 129:
  FUNC_3(VAR_1, VAR_2);
  break;
 case 128:
  FUNC_3(VAR_1, VAR_2);

 case 130:
  VAR_2->flags = VAR_4;
  FUNC_0(&VAR_2->node);
  FUNC_1(&VAR_2->node, &VAR_1->list);
  VAR_1->effective_flags |= VAR_4;
  break;
 default:

  ;
 }

 VAR_7 = FUNC_2(&VAR_1->list) ? 0 : VAR_1->effective_flags;

 FUNC_5(&VAR_0, VAR_5);

 FUNC_6(VAR_3, VAR_6, VAR_7);
 return VAR_6 != VAR_7;
}
