
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pf; int rcu_head; } ;
struct TYPE_6__ {int locks_before; int locks_after; int lock_entry; } ;
struct TYPE_5__ {int zapped; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_5(void)
{
 static bool VAR_5, VAR_6;
 int VAR_7;

 if (FUNC_3(VAR_6))
  return;

 if (VAR_4 >= VAR_0) {
  FUNC_2(&VAR_1.rcu_head);
  VAR_6 = 1;
 }

 if (VAR_5)
  return;

 VAR_5 = 1;

 FUNC_1(&VAR_1.pf[0].zapped);
 FUNC_1(&VAR_1.pf[1].zapped);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  FUNC_4(&VAR_3[VAR_7].lock_entry, &VAR_2);
  FUNC_1(&VAR_3[VAR_7].locks_after);
  FUNC_1(&VAR_3[VAR_7].locks_before);
 }
}
