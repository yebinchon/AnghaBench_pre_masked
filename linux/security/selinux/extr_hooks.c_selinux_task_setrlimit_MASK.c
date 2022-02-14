
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* signal; } ;
struct rlimit {scalar_t__ rlim_max; } ;
struct TYPE_2__ {struct rlimit* rlim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int FUNC_3(struct task_struct *VAR_3, unsigned int VAR_4,
  struct rlimit *VAR_5)
{
 struct rlimit *VAR_6 = VAR_3->signal->rlim + VAR_4;





 if (VAR_6->rlim_max != VAR_5->rlim_max)
  return FUNC_0(&VAR_2,
        FUNC_1(), FUNC_2(VAR_3),
        VAR_1, VAR_0, ((void*)0));

 return 0;
}
