
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_buffer {int dummy; } ;
struct seq_file {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct trace_buffer*,struct seq_file*) ;
 int FUNC_1 (struct seq_file*,char*,int,char const*) ;

__attribute__((used)) static void FUNC_2(struct trace_buffer *VAR_1, struct seq_file *VAR_2,
           unsigned int VAR_3)
{
 bool VAR_4 = VAR_3 & VAR_0;
 const char *VAR_5 = "          ";
 int VAR_6 = VAR_4 ? 10 : 2;

 FUNC_0(VAR_1, VAR_2);

 FUNC_1(VAR_2, "#                          %.*s  _-----=> irqs-off\n", VAR_6, VAR_5);
 FUNC_1(VAR_2, "#                          %.*s / _----=> need-resched\n", VAR_6, VAR_5);
 FUNC_1(VAR_2, "#                          %.*s| / _---=> hardirq/softirq\n", VAR_6, VAR_5);
 FUNC_1(VAR_2, "#                          %.*s|| / _--=> preempt-depth\n", VAR_6, VAR_5);
 FUNC_1(VAR_2, "#                          %.*s||| /     delay\n", VAR_6, VAR_5);
 FUNC_1(VAR_2, "#           TASK-PID %.*sCPU#  ||||    TIMESTAMP  FUNCTION\n", VAR_6, "   TGID   ");
 FUNC_1(VAR_2, "#              | |   %.*s  |   ||||       |         |\n", VAR_6, "     |    ");
}
