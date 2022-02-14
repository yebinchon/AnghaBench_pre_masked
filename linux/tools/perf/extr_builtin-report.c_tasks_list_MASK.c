
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int ppid; } ;
struct task {int children; int list; struct thread* thread; } ;
struct machine {int dummy; } ;


 int VAR_0 ;
 struct task* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 struct thread* FUNC_3 (struct machine*,int,int) ;
 struct task* FUNC_4 (struct thread*) ;

__attribute__((used)) static struct task *FUNC_5(struct task *VAR_1, struct machine *VAR_2)
{
 struct thread *VAR_3, *VAR_4 = VAR_1->thread;
 struct task *VAR_5;


 if (!FUNC_2(&VAR_1->list))
  return ((void*)0);


 if (VAR_4->ppid == -1)
  return VAR_1;

 VAR_3 = FUNC_3(VAR_2, -1, VAR_4->ppid);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_4(VAR_3);
 FUNC_1(&VAR_1->list, &VAR_5->children);
 return FUNC_5(VAR_5, VAR_2);
}
