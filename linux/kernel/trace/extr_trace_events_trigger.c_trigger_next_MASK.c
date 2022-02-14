
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int triggers; } ;
struct seq_file {int private; } ;
typedef int loff_t ;


 void* VAR_0 ;
 struct trace_event_file* FUNC_0 (int ) ;
 void* FUNC_1 (void*,int *,int *) ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_1, void *VAR_2, loff_t *VAR_3)
{
 struct trace_event_file *VAR_4 = FUNC_0(VAR_1->private);

 if (VAR_2 == VAR_0)
  return ((void*)0);

 return FUNC_1(VAR_2, &VAR_4->triggers, VAR_3);
}
