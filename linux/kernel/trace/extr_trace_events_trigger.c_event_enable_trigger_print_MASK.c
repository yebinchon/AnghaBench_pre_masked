
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct event_trigger_ops {int dummy; } ;
struct event_trigger_data {int count; int filter_str; struct enable_trigger_data* private_data; } ;
struct enable_trigger_data {TYPE_2__* file; scalar_t__ enable; scalar_t__ hist; } ;
struct TYPE_6__ {TYPE_1__* class; } ;
struct TYPE_5__ {TYPE_3__* event_call; } ;
struct TYPE_4__ {int system; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct seq_file*,char*,int,...) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char*) ;
 int FUNC_3 (TYPE_3__*) ;

int FUNC_4(struct seq_file *VAR_4,
          struct event_trigger_ops *VAR_5,
          struct event_trigger_data *VAR_6)
{
 struct enable_trigger_data *VAR_7 = VAR_6->private_data;

 FUNC_0(VAR_4, "%s:%s:%s",
     VAR_7->hist ?
     (VAR_7->enable ? VAR_3 : VAR_1) :
     (VAR_7->enable ? VAR_2 : VAR_0),
     VAR_7->file->event_call->class->system,
     FUNC_3(VAR_7->file->event_call));

 if (VAR_6->count == -1)
  FUNC_2(VAR_4, ":unlimited");
 else
  FUNC_0(VAR_4, ":count=%ld", VAR_6->count);

 if (VAR_6->filter_str)
  FUNC_0(VAR_4, " if %s\n", VAR_6->filter_str);
 else
  FUNC_1(VAR_4, '\n');

 return 0;
}
