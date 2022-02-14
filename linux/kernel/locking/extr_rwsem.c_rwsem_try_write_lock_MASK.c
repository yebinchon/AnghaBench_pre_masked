
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_semaphore {int wait_list; int count; int wait_lock; } ;
typedef enum writer_wait_state { ____Placeholder_writer_wait_state } writer_wait_state ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_0 (int *) ;
 int FUNC_1 (int *,long*,long) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rw_semaphore*) ;

__attribute__((used)) static inline bool FUNC_5(struct rw_semaphore *VAR_6,
     enum writer_wait_state VAR_7)
{
 long VAR_8, VAR_9;

 FUNC_3(&VAR_6->wait_lock);

 VAR_8 = FUNC_0(&VAR_6->count);
 do {
  bool VAR_10 = !!(VAR_8 & VAR_0);

  if (VAR_10 && VAR_7 == VAR_5)
   return 0;

  VAR_9 = VAR_8;

  if (VAR_8 & VAR_2) {
   if (VAR_10 || (VAR_7 != VAR_4))
    return 0;

   VAR_9 |= VAR_0;
  } else {
   VAR_9 |= VAR_3;
   VAR_9 &= ~VAR_0;

   if (FUNC_2(&VAR_6->wait_list))
    VAR_9 &= ~VAR_1;
  }
 } while (!FUNC_1(&VAR_6->count, &VAR_8, VAR_9));





 if (VAR_9 & VAR_0)
  return 0;

 FUNC_4(VAR_6);
 return 1;
}
