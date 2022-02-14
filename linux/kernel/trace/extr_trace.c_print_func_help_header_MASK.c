
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_buffer {int dummy; } ;
struct seq_file {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct trace_buffer*,struct seq_file*) ;
 int FUNC_1 (struct seq_file*,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct trace_buffer *VAR_1, struct seq_file *VAR_2,
       unsigned int VAR_3)
{
 bool VAR_4 = VAR_3 & VAR_0;

 FUNC_0(VAR_1, VAR_2);

 FUNC_1(VAR_2, "#           TASK-PID   %s  CPU#   TIMESTAMP  FUNCTION\n", VAR_4 ? "TGID     " : "");
 FUNC_1(VAR_2, "#              | |     %s    |       |         |\n", VAR_4 ? "  |      " : "");
}
