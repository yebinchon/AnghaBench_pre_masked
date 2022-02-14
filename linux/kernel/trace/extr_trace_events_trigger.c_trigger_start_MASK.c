
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int triggers; } ;
struct seq_file {int private; } ;
typedef int loff_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* VAR_1 ;
 struct trace_event_file* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void *FUNC_6(struct seq_file *VAR_3, loff_t *VAR_4)
{
 struct trace_event_file *VAR_5;


 FUNC_3(&VAR_2);
 VAR_5 = FUNC_1(VAR_3->private);
 if (FUNC_5(!VAR_5))
  return FUNC_0(-VAR_0);

 if (FUNC_2(&VAR_5->triggers))
  return *VAR_4 == 0 ? VAR_1 : ((void*)0);

 return FUNC_4(&VAR_5->triggers, *VAR_4);
}
