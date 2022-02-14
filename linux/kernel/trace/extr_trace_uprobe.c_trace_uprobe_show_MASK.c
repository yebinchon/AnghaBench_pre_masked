
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nr_args; TYPE_1__* args; } ;
struct trace_uprobe {char ref_ctr_offset; TYPE_2__ tp; int offset; int filename; } ;
struct seq_file {int dummy; } ;
struct dyn_event {int dummy; } ;
struct TYPE_4__ {int comm; int name; } ;


 scalar_t__ FUNC_0 (struct trace_uprobe*) ;
 int FUNC_1 (struct seq_file*,char*,char,...) ;
 int FUNC_2 (struct seq_file*,char) ;
 struct trace_uprobe* FUNC_3 (struct dyn_event*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_0, struct dyn_event *VAR_1)
{
 struct trace_uprobe *VAR_2 = FUNC_3(VAR_1);
 char VAR_3 = FUNC_0(VAR_2) ? 'r' : 'p';
 int VAR_4;

 FUNC_1(VAR_0, "%c:%s/%s %s:0x%0*lx", VAR_3, FUNC_4(&VAR_2->tp),
   FUNC_5(&VAR_2->tp), VAR_2->filename,
   (int)(sizeof(void *) * 2), VAR_2->offset);

 if (VAR_2->ref_ctr_offset)
  FUNC_1(VAR_0, "(0x%lx)", VAR_2->ref_ctr_offset);

 for (VAR_4 = 0; VAR_4 < VAR_2->tp.nr_args; VAR_4++)
  FUNC_1(VAR_0, " %s=%s", VAR_2->tp.args[VAR_4].name, VAR_2->tp.args[VAR_4].comm);

 FUNC_2(VAR_0, '\n');
 return 0;
}
