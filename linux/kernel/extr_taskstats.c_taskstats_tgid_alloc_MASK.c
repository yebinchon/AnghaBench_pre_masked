
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct taskstats {int dummy; } ;
struct task_struct {TYPE_1__* sighand; struct signal_struct* signal; } ;
struct signal_struct {struct taskstats* stats; } ;
struct TYPE_2__ {int siglock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct taskstats*) ;
 struct taskstats* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct task_struct*) ;

__attribute__((used)) static struct taskstats *FUNC_5(struct task_struct *VAR_2)
{
 struct signal_struct *VAR_3 = VAR_2->signal;
 struct taskstats *VAR_4;

 if (VAR_3->stats || FUNC_4(VAR_2))
  goto ret;


 VAR_4 = FUNC_1(VAR_1, VAR_0);

 FUNC_2(&VAR_2->sighand->siglock);
 if (!VAR_3->stats) {
  VAR_3->stats = VAR_4;
  VAR_4 = ((void*)0);
 }
 FUNC_3(&VAR_2->sighand->siglock);

 if (VAR_4)
  FUNC_0(VAR_1, VAR_4);
ret:
 return VAR_3->stats;
}
