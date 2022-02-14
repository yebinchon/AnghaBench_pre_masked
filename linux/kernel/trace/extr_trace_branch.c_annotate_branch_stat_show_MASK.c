
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_4__ {int incorrect; int correct; } ;
struct ftrace_likely_data {TYPE_1__ data; int constant; } ;


 char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct seq_file*,TYPE_1__*,char const*) ;
 int FUNC_2 (struct seq_file*,TYPE_1__*,char const*) ;
 int FUNC_3 (struct seq_file*,char*,int ,int ,int,int ) ;
 int FUNC_4 (int *,int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_0, void *VAR_1)
{
 struct ftrace_likely_data *VAR_2 = VAR_1;
 const char *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(&VAR_2->data);

 if (!VAR_2->constant)
  return FUNC_2(VAR_0, &VAR_2->data, VAR_3);

 VAR_4 = FUNC_4(((void*)0), 0, "/%lu", VAR_2->constant);
 VAR_4 = VAR_4 > 8 ? 0 : 8 - VAR_4;

 FUNC_3(VAR_0, "%8lu/%lu %*lu ",
     VAR_2->data.correct, VAR_2->constant, VAR_4, VAR_2->data.incorrect);
 FUNC_1(VAR_0, &VAR_2->data, VAR_3);
 return 0;
}
