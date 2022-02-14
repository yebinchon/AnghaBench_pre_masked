
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct ftrace_branch_data {int line; int func; } ;


 long FUNC_0 (struct ftrace_branch_data*) ;
 int FUNC_1 (struct seq_file*,char*,long,...) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0,
        struct ftrace_branch_data *VAR_1, const char *VAR_2)
{
 long VAR_3;




 VAR_3 = FUNC_0(VAR_1);

 if (VAR_3 < 0)
  FUNC_2(VAR_0, "  X ");
 else
  FUNC_1(VAR_0, "%3ld ", VAR_3);

 FUNC_1(VAR_0, "%-30.30s %-20.20s %d\n", VAR_1->func, VAR_2, VAR_1->line);
}
