
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_uprobe {int tp; int devent; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct trace_uprobe*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct trace_uprobe*) ;

__attribute__((used)) static int FUNC_5(struct trace_uprobe *VAR_0)
{
 int VAR_1;

 if (FUNC_2(&VAR_0->tp))
  goto unreg;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1)
  return VAR_1;

unreg:
 FUNC_0(&VAR_0->devent);
 FUNC_3(&VAR_0->tp);
 FUNC_1(VAR_0);
 return 0;
}
