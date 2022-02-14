
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pending_free {int zapped; } ;
struct TYPE_2__ {int scheduled; int index; int rcu_head; struct pending_free* pf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pending_free *VAR_2)
{
 FUNC_0(FUNC_2());

 if (FUNC_3(&VAR_2->zapped))
  return;

 if (VAR_0.scheduled)
  return;

 VAR_0.scheduled = 1;

 FUNC_0(VAR_0.pf + VAR_0.index != VAR_2);
 VAR_0.index ^= 1;

 FUNC_1(&VAR_0.rcu_head, VAR_1);
}
