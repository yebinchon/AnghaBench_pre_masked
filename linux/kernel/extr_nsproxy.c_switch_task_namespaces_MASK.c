
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct nsproxy* nsproxy; } ;
struct nsproxy {int count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct nsproxy*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;

void FUNC_5(struct task_struct *VAR_0, struct nsproxy *VAR_1)
{
 struct nsproxy *VAR_2;

 FUNC_2();

 FUNC_3(VAR_0);
 VAR_2 = VAR_0->nsproxy;
 VAR_0->nsproxy = VAR_1;
 FUNC_4(VAR_0);

 if (VAR_2 && FUNC_0(&VAR_2->count))
  FUNC_1(VAR_2);
}
