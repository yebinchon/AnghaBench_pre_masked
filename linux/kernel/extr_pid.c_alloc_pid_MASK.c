
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upid {int nr; struct pid_namespace* ns; } ;
struct pid_namespace {int level; int pid_allocated; int pid_cachep; int idr; struct pid_namespace* parent; } ;
struct pid {int level; struct upid* numbers; int wait_pidfd; int * tasks; int count; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pid* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct pid_namespace*) ;
 int FUNC_3 (int *,int *,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,struct pid*,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct pid*) ;
 struct pid* FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,struct pid*) ;
 int VAR_8 ;
 scalar_t__ FUNC_14 (struct pid_namespace*) ;
 int VAR_9 ;
 int FUNC_15 (struct pid_namespace*) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int ) ;

struct pid *FUNC_20(struct pid_namespace *VAR_10)
{
 struct pid *VAR_11;
 enum pid_type VAR_12;
 int VAR_13, VAR_14;
 struct pid_namespace *VAR_15;
 struct upid *VAR_16;
 int VAR_17 = -VAR_1;

 VAR_11 = FUNC_12(VAR_10->pid_cachep, VAR_4);
 if (!VAR_11)
  return FUNC_0(VAR_17);

 VAR_15 = VAR_10;
 VAR_11->level = VAR_10->level;

 for (VAR_13 = VAR_10->level; VAR_13 >= 0; VAR_13--) {
  int VAR_18 = 1;

  FUNC_5(VAR_4);
  FUNC_17(&VAR_9);





  if (FUNC_4(&VAR_15->idr) > VAR_7)
   VAR_18 = VAR_7;





  VAR_14 = FUNC_3(&VAR_15->idr, ((void*)0), VAR_18,
          VAR_8, VAR_3);
  FUNC_18(&VAR_9);
  FUNC_6();

  if (VAR_14 < 0) {
   VAR_17 = (VAR_14 == -VAR_2) ? -VAR_0 : VAR_14;
   goto out_free;
  }

  VAR_11->numbers[VAR_13].nr = VAR_14;
  VAR_11->numbers[VAR_13].ns = VAR_15;
  VAR_15 = VAR_15->parent;
 }

 if (FUNC_19(FUNC_11(VAR_11))) {
  if (FUNC_14(VAR_10))
   goto out_free;
 }

 FUNC_2(VAR_10);
 FUNC_16(&VAR_11->count, 1);
 for (VAR_12 = 0; VAR_12 < VAR_6; ++VAR_12)
  FUNC_1(&VAR_11->tasks[VAR_12]);

 FUNC_10(&VAR_11->wait_pidfd);

 VAR_16 = VAR_11->numbers + VAR_10->level;
 FUNC_17(&VAR_9);
 if (!(VAR_10->pid_allocated & VAR_5))
  goto out_unlock;
 for ( ; VAR_16 >= VAR_11->numbers; --VAR_16) {

  FUNC_8(&VAR_16->ns->idr, VAR_11, VAR_16->nr);
  VAR_16->ns->pid_allocated++;
 }
 FUNC_18(&VAR_9);

 return VAR_11;

out_unlock:
 FUNC_18(&VAR_9);
 FUNC_15(VAR_10);

out_free:
 FUNC_17(&VAR_9);
 while (++VAR_13 <= VAR_10->level) {
  VAR_16 = VAR_11->numbers + VAR_13;
  FUNC_7(&VAR_16->ns->idr, VAR_16->nr);
 }


 if (VAR_10->pid_allocated == VAR_5)
  FUNC_9(&VAR_10->idr, 0);

 FUNC_18(&VAR_9);

 FUNC_13(VAR_10->pid_cachep, VAR_11);
 return FUNC_0(VAR_17);
}
