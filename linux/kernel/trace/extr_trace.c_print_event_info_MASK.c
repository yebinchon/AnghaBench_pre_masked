
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_buffer {int dummy; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct trace_buffer*,unsigned long*,unsigned long*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct seq_file*,char*,unsigned long,unsigned long,int ) ;
 int FUNC_3 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_4(struct trace_buffer *VAR_0, struct seq_file *VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3;

 FUNC_0(VAR_0, &VAR_2, &VAR_3);
 FUNC_2(VAR_1, "# entries-in-buffer/entries-written: %lu/%lu   #P:%d\n",
     VAR_3, VAR_2, FUNC_1());
 FUNC_3(VAR_1, "#\n");
}
