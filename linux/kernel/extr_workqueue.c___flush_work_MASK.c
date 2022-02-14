
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wq_barrier {int work; int done; } ;
struct work_struct {int lockdep_map; int func; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct work_struct*,struct wq_barrier*,int) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_6(struct work_struct *VAR_1, bool VAR_2)
{
 struct wq_barrier VAR_3;

 if (FUNC_0(!VAR_0))
  return 0;

 if (FUNC_0(!VAR_1->func))
  return 0;

 if (!VAR_2) {
  FUNC_2(&VAR_1->lockdep_map);
  FUNC_3(&VAR_1->lockdep_map);
 }

 if (FUNC_4(VAR_1, &VAR_3, VAR_2)) {
  FUNC_5(&VAR_3.done);
  FUNC_1(&VAR_3.work);
  return 1;
 } else {
  return 0;
 }
}
