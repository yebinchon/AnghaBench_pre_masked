
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_qos_constraints {int default_value; scalar_t__ notifiers; int list; } ;
struct plist_node {int dummy; } ;
typedef enum pm_qos_req_action { ____Placeholder_pm_qos_req_action } pm_qos_req_action ;



 int VAR_0 ;


 int FUNC_0 (scalar_t__,unsigned long,int *) ;
 int FUNC_1 (struct plist_node*,int *) ;
 int FUNC_2 (struct plist_node*,int *) ;
 int FUNC_3 (struct plist_node*,int) ;
 int FUNC_4 (struct pm_qos_constraints*) ;
 int VAR_1 ;
 int FUNC_5 (struct pm_qos_constraints*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int,int,int) ;

int FUNC_9(struct pm_qos_constraints *VAR_2, struct plist_node *VAR_3,
    enum pm_qos_req_action VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10;

 FUNC_6(&VAR_1, VAR_6);
 VAR_7 = FUNC_4(VAR_2);
 if (VAR_5 == VAR_0)
  VAR_9 = VAR_2->default_value;
 else
  VAR_9 = VAR_5;

 switch (VAR_4) {
 case 129:
  FUNC_2(VAR_3, &VAR_2->list);
  break;
 case 128:





  FUNC_2(VAR_3, &VAR_2->list);

 case 130:
  FUNC_3(VAR_3, VAR_9);
  FUNC_1(VAR_3, &VAR_2->list);
  break;
 default:

  ;
 }

 VAR_8 = FUNC_4(VAR_2);
 FUNC_5(VAR_2, VAR_8);

 FUNC_7(&VAR_1, VAR_6);

 FUNC_8(VAR_4, VAR_7, VAR_8);
 if (VAR_7 != VAR_8) {
  VAR_10 = 1;
  if (VAR_2->notifiers)
   FUNC_0(VAR_2->notifiers,
           (unsigned long)VAR_8,
           ((void*)0));
 } else {
  VAR_10 = 0;
 }
 return VAR_10;
}
