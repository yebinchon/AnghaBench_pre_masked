
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_kprobe {int tp; int devent; } ;


 int VAR_0 ;
 int FUNC_0 (struct trace_kprobe*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct trace_kprobe*) ;

__attribute__((used)) static int FUNC_6(struct trace_kprobe *VAR_1)
{

 if (FUNC_2(&VAR_1->tp))
  goto unreg;


 if (FUNC_3(&VAR_1->tp))
  return -VAR_0;


 if (FUNC_5(VAR_1))
  return -VAR_0;

unreg:
 FUNC_0(VAR_1);
 FUNC_1(&VAR_1->devent);
 FUNC_4(&VAR_1->tp);

 return 0;
}
