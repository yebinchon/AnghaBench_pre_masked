
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htb_sched {int overlimits; } ;
struct htb_class {int cmode; scalar_t__ prio_activity; int overlimits; } ;
typedef int s64 ;
typedef enum htb_cmode { ____Placeholder_htb_cmode } htb_cmode ;


 int VAR_0 ;
 int FUNC_0 (struct htb_sched*,struct htb_class*) ;
 int FUNC_1 (struct htb_class*,int *) ;
 int FUNC_2 (struct htb_sched*,struct htb_class*) ;

__attribute__((used)) static void
FUNC_3(struct htb_sched *VAR_1, struct htb_class *VAR_2, s64 *VAR_3)
{
 enum htb_cmode VAR_4 = FUNC_1(VAR_2, VAR_3);

 if (VAR_4 == VAR_2->cmode)
  return;

 if (VAR_4 == VAR_0) {
  VAR_2->overlimits++;
  VAR_1->overlimits++;
 }

 if (VAR_2->prio_activity) {
  if (VAR_2->cmode != VAR_0)
   FUNC_2(VAR_1, VAR_2);
  VAR_2->cmode = VAR_4;
  if (VAR_4 != VAR_0)
   FUNC_0(VAR_1, VAR_2);
 } else
  VAR_2->cmode = VAR_4;
}
