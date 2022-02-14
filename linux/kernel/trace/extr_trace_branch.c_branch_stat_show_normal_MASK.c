
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct ftrace_branch_data {int incorrect; int correct; } ;


 int FUNC_0 (struct seq_file*,struct ftrace_branch_data*,char const*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0,
       struct ftrace_branch_data *VAR_1, const char *VAR_2)
{
 FUNC_1(VAR_0, "%8lu %8lu ", VAR_1->correct, VAR_1->incorrect);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 return 0;
}
