
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {struct ftrace_ops* ops; } ;
struct ftrace_ops {int flags; struct trace_array* private; int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ftrace_ops* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct trace_array *VAR_5)
{
 struct ftrace_ops *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_0;


 VAR_6->func = VAR_4;
 VAR_6->flags = VAR_2 | VAR_1;

 VAR_5->ops = VAR_6;
 VAR_6->private = VAR_5;
 return 0;
}
