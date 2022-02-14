
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_idrinfo {int lock; int action_idr; } ;
struct tc_action {int tcfa_index; TYPE_1__* ops; int tcfa_refcnt; int tcfa_bindcnt; } ;
struct module {int dummy; } ;
struct TYPE_2__ {struct module* owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct tc_action* FUNC_2 (int *,int ) ;
 struct tc_action* FUNC_3 (int *,int ) ;
 int FUNC_4 (struct module*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct tc_action*) ;

__attribute__((used)) static int FUNC_9(struct tcf_idrinfo *VAR_2, u32 VAR_3)
{
 struct tc_action *VAR_4;
 int VAR_5 = 0;

 FUNC_5(&VAR_2->lock);
 VAR_4 = FUNC_2(&VAR_2->action_idr, VAR_3);
 if (!VAR_4) {
  FUNC_6(&VAR_2->lock);
  return -VAR_0;
 }

 if (!FUNC_1(&VAR_4->tcfa_bindcnt)) {
  if (FUNC_7(&VAR_4->tcfa_refcnt)) {
   struct module *VAR_6 = VAR_4->ops->owner;

   FUNC_0(VAR_4 != FUNC_3(&VAR_2->action_idr,
      VAR_4->tcfa_index));
   FUNC_6(&VAR_2->lock);

   FUNC_8(VAR_4);
   FUNC_4(VAR_6);
   return 0;
  }
  VAR_5 = 0;
 } else {
  VAR_5 = -VAR_1;
 }

 FUNC_6(&VAR_2->lock);
 return VAR_5;
}
