
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_entry {int pid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct trace_seq*,struct trace_entry*) ;
 int FUNC_2 (struct trace_seq*,char*,char*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct trace_seq *VAR_1, struct trace_entry *VAR_2, int VAR_3)
{
 char VAR_4[VAR_0];

 FUNC_0(VAR_2->pid, VAR_4);

 FUNC_2(VAR_1, "%8.8s-%-5d %3d",
    VAR_4, VAR_2->pid, VAR_3);

 return FUNC_1(VAR_1, VAR_2);
}
