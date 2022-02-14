
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int lockdep_depth; struct held_lock* held_locks; } ;
struct pin_cookie {scalar_t__ val; } ;
struct lockdep_map {int dummy; } ;
struct held_lock {scalar_t__ pin_count; } ;


 scalar_t__ FUNC_0 (int,char*) ;
 struct task_struct* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct held_lock*,struct lockdep_map*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct lockdep_map *VAR_2, struct pin_cookie VAR_3)
{
 struct task_struct *VAR_4 = VAR_0;
 int VAR_5;

 if (FUNC_2(!VAR_1))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_4->lockdep_depth; VAR_5++) {
  struct held_lock *VAR_6 = VAR_4->held_locks + VAR_5;

  if (FUNC_1(VAR_6, VAR_2)) {
   if (FUNC_0(!VAR_6->pin_count, "unpinning an unpinned lock\n"))
    return;

   VAR_6->pin_count -= VAR_3.val;

   if (FUNC_0((int)VAR_6->pin_count < 0, "pin count corrupted\n"))
    VAR_6->pin_count = 0;

   return;
  }
 }

 FUNC_0(1, "unpinning an unheld lock\n");
}
