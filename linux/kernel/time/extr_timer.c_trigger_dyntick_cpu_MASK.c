
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int flags; int expires; } ;
struct timer_base {int cpu; int next_expiry; int is_idle; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct timer_base *VAR_1, struct timer_list *VAR_2)
{
 if (!FUNC_0())
  return;





 if (VAR_2->flags & VAR_0) {
  if (FUNC_1(VAR_1->cpu))
   FUNC_3(VAR_1->cpu);
  return;
 }






 if (!VAR_1->is_idle)
  return;


 if (FUNC_2(VAR_2->expires, VAR_1->next_expiry))
  return;





 VAR_1->next_expiry = VAR_2->expires;
 FUNC_3(VAR_1->cpu);
}
