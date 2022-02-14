
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_uprobe {struct trace_uprobe* filename; int tp; int path; } ;


 int FUNC_0 (struct trace_uprobe*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct trace_uprobe *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(&VAR_0->path);
 FUNC_2(&VAR_0->tp);
 FUNC_0(VAR_0->filename);
 FUNC_0(VAR_0);
}
