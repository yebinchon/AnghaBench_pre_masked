
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int seq; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct seq_file*,int *) ;
 int FUNC_2 (struct trace_seq*) ;

int FUNC_3(struct seq_file *VAR_0, struct trace_seq *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1);

 VAR_2 = FUNC_1(VAR_0, &VAR_1->seq);






 if (!VAR_2)
  FUNC_2(VAR_1);

 return VAR_2;
}
