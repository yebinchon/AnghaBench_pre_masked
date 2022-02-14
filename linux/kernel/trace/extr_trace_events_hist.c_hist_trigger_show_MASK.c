
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct seq_file {int dummy; } ;
struct hist_trigger_data {TYPE_1__* map; } ;
struct event_trigger_data {struct hist_trigger_data* private_data; TYPE_2__* ops; } ;
struct TYPE_4__ {int (* print ) (struct seq_file*,TYPE_2__*,struct event_trigger_data*) ;} ;
struct TYPE_3__ {int drops; int hits; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,struct hist_trigger_data*) ;
 int FUNC_2 (struct seq_file*,char*,int ,int,int ) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (struct seq_file*,TYPE_2__*,struct event_trigger_data*) ;
 int FUNC_5 (struct seq_file*,struct hist_trigger_data*) ;

__attribute__((used)) static void FUNC_6(struct seq_file *VAR_0,
         struct event_trigger_data *VAR_1, int VAR_2)
{
 struct hist_trigger_data *VAR_3;
 int VAR_4;

 if (VAR_2 > 0)
  FUNC_3(VAR_0, "\n\n");

 FUNC_3(VAR_0, "# event histogram\n#\n# trigger info: ");
 VAR_1->ops->print(VAR_0, VAR_1->ops, VAR_1);
 FUNC_3(VAR_0, "#\n\n");

 VAR_3 = VAR_1->private_data;
 VAR_4 = FUNC_1(VAR_0, VAR_3);
 if (VAR_4 < 0)
  VAR_4 = 0;

 FUNC_5(VAR_0, VAR_3);

 FUNC_2(VAR_0, "\nTotals:\n    Hits: %llu\n    Entries: %u\n    Dropped: %llu\n",
     (u64)FUNC_0(&VAR_3->map->hits),
     VAR_4, (u64)FUNC_0(&VAR_3->map->drops));
}
