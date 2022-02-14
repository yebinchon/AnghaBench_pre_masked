
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int lockdep_depth; struct held_lock* held_locks; } ;
struct pin_cookie {int val; } ;
struct lockdep_map {int dummy; } ;
struct held_lock {int pin_count; } ;


 struct pin_cookie VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct task_struct* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct held_lock*,struct lockdep_map*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct pin_cookie FUNC_4(struct lockdep_map *VAR_3)
{
 struct pin_cookie VAR_4 = VAR_0;
 struct task_struct *VAR_5 = VAR_1;
 int VAR_6;

 if (FUNC_3(!VAR_2))
  return VAR_4;

 for (VAR_6 = 0; VAR_6 < VAR_5->lockdep_depth; VAR_6++) {
  struct held_lock *VAR_7 = VAR_5->held_locks + VAR_6;

  if (FUNC_1(VAR_7, VAR_3)) {





   VAR_4.val = 1 + (FUNC_2() >> 16);
   VAR_7->pin_count += VAR_4.val;
   return VAR_4;
  }
 }

 FUNC_0(1, "pinning an unheld lock\n");
 return VAR_4;
}
