
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int pid; int comm; int alloc_lock; } ;
struct access_report_info {char const* access; int work; struct task_struct* agent; struct task_struct* target; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (char*,struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct access_report_info*) ;
 struct access_report_info* FUNC_6 (int,int ) ;
 int FUNC_7 (char*,char const*,int ,int ,int ,int ) ;
 int FUNC_8 (struct task_struct*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int *,int) ;

__attribute__((used)) static void FUNC_10(const char *VAR_4, struct task_struct *VAR_5,
    struct task_struct *VAR_6)
{
 struct access_report_info *VAR_7;
 char VAR_8[sizeof(VAR_6->comm)];

 FUNC_1(&VAR_5->alloc_lock);

 if (VAR_3->flags & VAR_1) {



  FUNC_7(
      "ptrace %s of \"%s\"[%d] was attempted by \"%s\"[%d]\n",
      VAR_4, VAR_5->comm, VAR_5->pid,
      FUNC_2(VAR_8, VAR_6), VAR_6->pid);
  return;
 }

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return;
 FUNC_4(&VAR_7->work, VAR_2);
 FUNC_3(VAR_5);
 FUNC_3(VAR_6);
 VAR_7->access = VAR_4;
 VAR_7->target = VAR_5;
 VAR_7->agent = VAR_6;
 if (FUNC_9(VAR_3, &VAR_7->work, 1) == 0)
  return;

 FUNC_0(1, "report_access called from exiting task");
 FUNC_8(VAR_5);
 FUNC_8(VAR_6);
 FUNC_5(VAR_7);
}
