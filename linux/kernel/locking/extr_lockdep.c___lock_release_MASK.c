
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {unsigned int lockdep_depth; int curr_chain_key; } ;
struct lockdep_map {int dummy; } ;
struct held_lock {int prev_chain_key; scalar_t__ references; int pin_count; struct lockdep_map* instance; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 struct task_struct* VAR_0 ;
 int VAR_1 ;
 struct held_lock* FUNC_2 (struct task_struct*,struct lockdep_map*,unsigned int,int*) ;
 int FUNC_3 (struct held_lock*) ;
 int FUNC_4 (struct task_struct*,struct lockdep_map*,unsigned long) ;
 scalar_t__ FUNC_5 (struct task_struct*,unsigned int,int,unsigned int*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct lockdep_map *VAR_2, unsigned long VAR_3)
{
 struct task_struct *VAR_4 = VAR_0;
 unsigned int VAR_5, VAR_6 = 1;
 struct held_lock *VAR_7;
 int VAR_8;

 if (FUNC_6(!VAR_1))
  return 0;

 VAR_5 = VAR_4->lockdep_depth;




 if (VAR_5 <= 0) {
  FUNC_4(VAR_4, VAR_2, VAR_3);
  return 0;
 }





 VAR_7 = FUNC_2(VAR_4, VAR_2, VAR_5, &VAR_8);
 if (!VAR_7) {
  FUNC_4(VAR_4, VAR_2, VAR_3);
  return 0;
 }

 if (VAR_7->instance == VAR_2)
  FUNC_3(VAR_7);

 FUNC_1(VAR_7->pin_count, "releasing a pinned lock\n");

 if (VAR_7->references) {
  VAR_7->references--;
  if (VAR_7->references) {





   return 1;
  }
 }







 VAR_4->lockdep_depth = VAR_8;
 VAR_4->curr_chain_key = VAR_7->prev_chain_key;





 if (VAR_8 == VAR_5-1)
  return 1;

 if (FUNC_5(VAR_4, VAR_5, VAR_8 + 1, &VAR_6))
  return 0;






 FUNC_0(VAR_4->lockdep_depth != VAR_5 - VAR_6);






 return 0;
}
