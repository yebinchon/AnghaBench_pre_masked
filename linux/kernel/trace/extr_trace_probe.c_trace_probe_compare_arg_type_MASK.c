
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_probe {int nr_args; TYPE_1__* args; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ count; int name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

int FUNC_1(struct trace_probe *VAR_0, struct trace_probe *VAR_1)
{
 int VAR_2;


 if (VAR_0->nr_args < VAR_1->nr_args)
  return VAR_0->nr_args + 1;
 if (VAR_0->nr_args > VAR_1->nr_args)
  return VAR_1->nr_args + 1;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_args; VAR_2++) {
  if ((VAR_1->nr_args <= VAR_2) ||
      ((VAR_0->args[VAR_2].type != VAR_1->args[VAR_2].type) ||
       (VAR_0->args[VAR_2].count != VAR_1->args[VAR_2].count) ||
       FUNC_0(VAR_0->args[VAR_2].name, VAR_1->args[VAR_2].name)))
   return VAR_2 + 1;
 }

 return 0;
}
