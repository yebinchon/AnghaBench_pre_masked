
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {unsigned int lockdep_depth; int curr_chain_key; } ;
struct lockdep_map {int dummy; } ;
struct lock_class_key {int dummy; } ;
struct lock_class {int dummy; } ;
struct held_lock {int prev_chain_key; struct lock_class* class_idx; } ;


 scalar_t__ FUNC_0 (int) ;
 struct task_struct* VAR_0 ;
 int VAR_1 ;
 struct held_lock* FUNC_1 (struct task_struct*,struct lockdep_map*,unsigned int,int*) ;
 int VAR_2 ;
 int FUNC_2 (struct lockdep_map*,char const*,struct lock_class_key*,int ) ;
 int FUNC_3 (struct task_struct*,struct lockdep_map*,unsigned long) ;
 scalar_t__ FUNC_4 (struct task_struct*,unsigned int,int,unsigned int*) ;
 struct lock_class* FUNC_5 (struct lockdep_map*,unsigned int,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct lockdep_map *VAR_3, const char *VAR_4,
   struct lock_class_key *VAR_5, unsigned int VAR_6,
   unsigned long VAR_7)
{
 struct task_struct *VAR_8 = VAR_0;
 unsigned int VAR_9, VAR_10 = 0;
 struct held_lock *VAR_11;
 struct lock_class *VAR_12;
 int VAR_13;

 if (FUNC_6(!VAR_1))
  return 0;

 VAR_9 = VAR_8->lockdep_depth;




 if (FUNC_0(!VAR_9))
  return 0;

 VAR_11 = FUNC_1(VAR_8, VAR_3, VAR_9, &VAR_13);
 if (!VAR_11) {
  FUNC_3(VAR_8, VAR_3, VAR_7);
  return 0;
 }

 FUNC_2(VAR_3, VAR_4, VAR_5, 0);
 VAR_12 = FUNC_5(VAR_3, VAR_6, 0);
 VAR_11->class_idx = VAR_12 - VAR_2;

 VAR_8->lockdep_depth = VAR_13;
 VAR_8->curr_chain_key = VAR_11->prev_chain_key;

 if (FUNC_4(VAR_8, VAR_9, VAR_13, &VAR_10))
  return 0;





 if (FUNC_0(VAR_8->lockdep_depth != VAR_9 - VAR_10))
  return 0;
 return 1;
}
