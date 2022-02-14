
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pid; int comm; } ;
struct oom_control {size_t constraint; int memcg; int nodemask; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct task_struct*) ;
 int FUNC_3 (int ) ;
 int * VAR_1 ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (struct task_struct*) ;

__attribute__((used)) static void FUNC_7(struct oom_control *VAR_2, struct task_struct *VAR_3)
{

 FUNC_5("oom-kill:constraint=%s,nodemask=%*pbl",
   VAR_1[VAR_2->constraint],
   FUNC_3(VAR_2->nodemask));
 FUNC_0();
 FUNC_2(VAR_2->memcg, VAR_3);
 FUNC_4(",task=%s,pid=%d,uid=%d\n", VAR_3->comm, VAR_3->pid,
  FUNC_1(&VAR_0, FUNC_6(VAR_3)));
}
