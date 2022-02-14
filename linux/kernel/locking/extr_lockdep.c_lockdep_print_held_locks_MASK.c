
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ state; scalar_t__ held_locks; int comm; int lockdep_depth; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static void FUNC_4(struct task_struct *VAR_2)
{
 int VAR_3, VAR_4 = FUNC_0(VAR_2->lockdep_depth);

 if (!VAR_4)
  FUNC_2("no locks held by %s/%d.\n", VAR_2->comm, FUNC_3(VAR_2));
 else
  FUNC_2("%d lock%s held by %s/%d:\n", VAR_4,
         VAR_4 > 1 ? "s" : "", VAR_2->comm, FUNC_3(VAR_2));




 if (VAR_2->state == VAR_0 && VAR_2 != VAR_1)
  return;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  FUNC_2(" #%d: ", VAR_3);
  FUNC_1(VAR_2->held_locks + VAR_3);
 }
}
