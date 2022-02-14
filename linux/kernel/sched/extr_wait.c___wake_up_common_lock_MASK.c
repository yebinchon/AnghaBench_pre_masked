
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long flags; int entry; int * func; int * private; } ;
typedef TYPE_1__ wait_queue_entry_t ;
struct wait_queue_head {int lock; } ;


 int FUNC_0 (int *) ;
 long VAR_0 ;
 int FUNC_1 (struct wait_queue_head*,unsigned int,int,int,void*,TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct wait_queue_head *VAR_1, unsigned int VAR_2,
   int VAR_3, int VAR_4, void *VAR_5)
{
 unsigned long VAR_6;
 wait_queue_entry_t VAR_7;

 VAR_7.flags = 0;
 VAR_7.private = ((void*)0);
 VAR_7.func = ((void*)0);
 FUNC_0(&VAR_7.entry);

 do {
  FUNC_2(&VAR_1->lock, VAR_6);
  VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5, &VAR_7);
  FUNC_3(&VAR_1->lock, VAR_6);
 } while (VAR_7.flags & VAR_0);
}
