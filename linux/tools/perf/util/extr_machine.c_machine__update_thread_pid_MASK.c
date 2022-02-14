
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int pid_; int tid; scalar_t__ mg; } ;
struct machine {int dummy; } ;
typedef int pid_t ;


 struct thread* FUNC_0 (struct machine*,int,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct machine*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (struct thread*) ;

__attribute__((used)) static void FUNC_7(struct machine *VAR_0,
           struct thread *VAR_1, pid_t VAR_2)
{
 struct thread *VAR_3;

 if (VAR_2 == VAR_1->pid_ || VAR_2 == -1 || VAR_1->pid_ != -1)
  return;

 VAR_1->pid_ = VAR_2;

 if (VAR_1->pid_ == VAR_1->tid)
  return;

 VAR_3 = FUNC_0(VAR_0, VAR_1->pid_, VAR_1->pid_);
 if (!VAR_3)
  goto out_err;

 if (!VAR_3->mg)
  VAR_3->mg = FUNC_3(VAR_0);

 if (!VAR_3->mg)
  goto out_err;

 if (VAR_1->mg == VAR_3->mg)
  return;

 if (VAR_1->mg) {





  if (!FUNC_1(VAR_1->mg))
   FUNC_5("Discarding thread maps for %d:%d\n",
          VAR_1->pid_, VAR_1->tid);
  FUNC_4(VAR_1->mg);
 }

 VAR_1->mg = FUNC_2(VAR_3->mg);
out_put:
 FUNC_6(VAR_3);
 return;
out_err:
 FUNC_5("Failed to join map groups for %d:%d\n", VAR_1->pid_, VAR_1->tid);
 goto out_put;
}
