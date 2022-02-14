
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct policydb {int dummy; } ;
struct cond_node {int cur_state; struct cond_av_list* false_list; struct cond_av_list* true_list; int expr; } ;
struct cond_av_list {TYPE_2__* node; struct cond_av_list* next; } ;
struct TYPE_3__ {int specified; } ;
struct TYPE_4__ {TYPE_1__ key; } ;


 int VAR_0 ;
 int FUNC_0 (struct policydb*,int ) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct policydb *VAR_1, struct cond_node *VAR_2)
{
 int VAR_3;
 struct cond_av_list *VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2->expr);
 if (VAR_3 != VAR_2->cur_state) {
  VAR_2->cur_state = VAR_3;
  if (VAR_3 == -1)
   FUNC_1("SELinux: expression result was undefined - disabling all rules.\n");

  for (VAR_4 = VAR_2->true_list; VAR_4; VAR_4 = VAR_4->next) {
   if (VAR_3 <= 0)
    VAR_4->node->key.specified &= ~VAR_0;
   else
    VAR_4->node->key.specified |= VAR_0;
  }

  for (VAR_4 = VAR_2->false_list; VAR_4; VAR_4 = VAR_4->next) {

   if (VAR_3)
    VAR_4->node->key.specified &= ~VAR_0;
   else
    VAR_4->node->key.specified |= VAR_0;
  }
 }
 return 0;
}
