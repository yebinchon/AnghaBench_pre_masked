
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rseq_cs {scalar_t__ abort_ip; int post_commit_offset; int start_ip; int flags; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (struct task_struct*) ;
 struct task_struct* VAR_0 ;
 int FUNC_1 (unsigned long,struct rseq_cs*) ;
 unsigned long FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (struct pt_regs*,unsigned long) ;
 int FUNC_4 (struct task_struct*,struct rseq_cs*) ;
 int FUNC_5 (struct task_struct*,int ) ;
 int FUNC_6 (unsigned long,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct pt_regs *VAR_1)
{
 unsigned long VAR_2 = FUNC_2(VAR_1);
 struct task_struct *VAR_3 = VAR_0;
 struct rseq_cs VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;






 if (!FUNC_1(VAR_2, &VAR_4))
  return FUNC_0(VAR_3);
 VAR_5 = FUNC_5(VAR_3, VAR_4.flags);
 if (VAR_5 <= 0)
  return VAR_5;
 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5)
  return VAR_5;
 FUNC_6(VAR_2, VAR_4.start_ip, VAR_4.post_commit_offset,
       VAR_4.abort_ip);
 FUNC_3(VAR_1, (unsigned long)VAR_4.abort_ip);
 return 0;
}
