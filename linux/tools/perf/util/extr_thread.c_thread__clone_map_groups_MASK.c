
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ pid_; scalar_t__ mg; int tid; } ;


 int FUNC_0 (struct thread*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_2 (struct thread*) ;

__attribute__((used)) static int FUNC_3(struct thread *VAR_0,
        struct thread *VAR_1,
        bool VAR_2)
{

 if (VAR_0->pid_ == VAR_1->pid_)
  return FUNC_2(VAR_0);

 if (VAR_0->mg == VAR_1->mg) {
  FUNC_1("broken map groups on thread %d/%d parent %d/%d\n",
    VAR_0->pid_, VAR_0->tid, VAR_1->pid_, VAR_1->tid);
  return 0;
 }

 return VAR_2 ? FUNC_0(VAR_0, VAR_1->mg) : 0;
}
