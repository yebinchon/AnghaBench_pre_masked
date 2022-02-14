
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_smack {int smk_rules; } ;
struct seq_file {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 () ;
 struct task_smack* FUNC_1 (int ) ;
 void* FUNC_2 (struct seq_file*,void*,int *,int *) ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct task_smack *VAR_3 = FUNC_1(FUNC_0());

 return FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_3->smk_rules);
}
