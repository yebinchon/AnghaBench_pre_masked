
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct event_trigger_ops {int dummy; } ;
struct event_trigger_data {int filter_str; scalar_t__ count; } ;


 int FUNC_0 (char*,struct seq_file*,void*,int ) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0, struct event_trigger_ops *VAR_1,
        struct event_trigger_data *VAR_2)
{
 return FUNC_0("traceon", VAR_0, (void *)VAR_2->count,
       VAR_2->filter_str);
}
