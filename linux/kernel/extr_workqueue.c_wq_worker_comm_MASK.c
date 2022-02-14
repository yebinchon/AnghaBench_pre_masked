
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {int lock; } ;
struct worker {char* desc; scalar_t__ current_work; struct worker_pool* pool; } ;
struct task_struct {int flags; int comm; } ;


 int VAR_0 ;
 struct worker* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,size_t,char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,size_t) ;
 int VAR_1 ;

void FUNC_7(char *VAR_2, size_t VAR_3, struct task_struct *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_6(VAR_2, VAR_4->comm, VAR_3);
 if (VAR_5 < 0)
  return;


 FUNC_1(&VAR_1);

 if (VAR_4->flags & VAR_0) {
  struct worker *VAR_6 = FUNC_0(VAR_4);
  struct worker_pool *VAR_7 = VAR_6->pool;

  if (VAR_7) {
   FUNC_4(&VAR_7->lock);





   if (VAR_6->desc[0] != '\0') {
    if (VAR_6->current_work)
     FUNC_3(VAR_2 + VAR_5, VAR_3 - VAR_5, "+%s",
        VAR_6->desc);
    else
     FUNC_3(VAR_2 + VAR_5, VAR_3 - VAR_5, "-%s",
        VAR_6->desc);
   }
   FUNC_5(&VAR_7->lock);
  }
 }

 FUNC_2(&VAR_1);
}
