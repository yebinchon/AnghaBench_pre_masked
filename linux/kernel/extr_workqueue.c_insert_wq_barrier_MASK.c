
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct list_head* next; } ;
struct work_struct {TYPE_2__ entry; int lockdep_map; } ;
struct wq_barrier {struct work_struct work; int task; int done; } ;
struct TYPE_3__ {struct list_head* next; } ;
struct worker {TYPE_1__ scheduled; } ;
struct pool_workqueue {int dummy; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct work_struct*,int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,unsigned long*) ;
 int VAR_4 ;
 int FUNC_2 (struct work_struct*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct pool_workqueue*,struct work_struct*,struct list_head*,unsigned int) ;
 unsigned int FUNC_5 (int ) ;
 unsigned long* FUNC_6 (struct work_struct*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(struct pool_workqueue *VAR_6,
         struct wq_barrier *VAR_7,
         struct work_struct *VAR_8, struct worker *VAR_9)
{
 struct list_head *VAR_10;
 unsigned int VAR_11 = 0;







 FUNC_0(&VAR_7->work, VAR_5);
 FUNC_1(VAR_3, FUNC_6(&VAR_7->work));

 FUNC_3(&VAR_7->done, &VAR_8->lockdep_map);

 VAR_7->task = VAR_4;





 if (VAR_9)
  VAR_10 = VAR_9->scheduled.next;
 else {
  unsigned long *VAR_12 = FUNC_6(VAR_8);

  VAR_10 = VAR_8->entry.next;

  VAR_11 = *VAR_12 & VAR_1;
  FUNC_1(VAR_2, VAR_12);
 }

 FUNC_2(&VAR_7->work);
 FUNC_4(VAR_6, &VAR_7->work, VAR_10,
      FUNC_5(VAR_0) | VAR_11);
}
