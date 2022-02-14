
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nr_args; TYPE_3__* args; } ;
struct TYPE_6__ {scalar_t__ offset; int addr; } ;
struct TYPE_7__ {TYPE_1__ kp; } ;
struct trace_kprobe {TYPE_4__ tp; TYPE_2__ rp; int symbol; } ;
struct seq_file {int dummy; } ;
struct dyn_event {int dummy; } ;
struct TYPE_8__ {scalar_t__ comm; int name; } ;


 int FUNC_0 (struct seq_file*,char*,int ,...) ;
 int FUNC_1 (struct seq_file*,char) ;
 struct trace_kprobe* FUNC_2 (struct dyn_event*) ;
 scalar_t__ FUNC_3 (struct trace_kprobe*) ;
 int FUNC_4 (struct trace_kprobe*) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_0, struct dyn_event *VAR_1)
{
 struct trace_kprobe *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 FUNC_1(VAR_0, FUNC_3(VAR_2) ? 'r' : 'p');
 FUNC_0(VAR_0, ":%s/%s", FUNC_5(&VAR_2->tp),
    FUNC_6(&VAR_2->tp));

 if (!VAR_2->symbol)
  FUNC_0(VAR_0, " 0x%p", VAR_2->rp.kp.addr);
 else if (VAR_2->rp.kp.offset)
  FUNC_0(VAR_0, " %s+%u", FUNC_4(VAR_2),
      VAR_2->rp.kp.offset);
 else
  FUNC_0(VAR_0, " %s", FUNC_4(VAR_2));

 for (VAR_3 = 0; VAR_3 < VAR_2->tp.nr_args; VAR_3++)
  FUNC_0(VAR_0, " %s=%s", VAR_2->tp.args[VAR_3].name, VAR_2->tp.args[VAR_3].comm);
 FUNC_1(VAR_0, '\n');

 return 0;
}
