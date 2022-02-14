
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_uprobe {int nhit; int tp; int filename; } ;
struct seq_file {int dummy; } ;
struct dyn_event {int dummy; } ;


 int FUNC_0 (struct dyn_event*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ) ;
 struct trace_uprobe* FUNC_2 (struct dyn_event*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct dyn_event *VAR_2 = VAR_1;
 struct trace_uprobe *VAR_3;

 if (!FUNC_0(VAR_2))
  return 0;

 VAR_3 = FUNC_2(VAR_2);
 FUNC_1(VAR_0, "  %s %-44s %15lu\n", VAR_3->filename,
   FUNC_3(&VAR_3->tp), VAR_3->nhit);
 return 0;
}
