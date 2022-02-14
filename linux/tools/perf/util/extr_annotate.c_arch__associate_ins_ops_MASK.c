
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ins_ops {int dummy; } ;
struct ins {struct ins_ops* ops; int name; } ;
struct arch {size_t nr_instructions; size_t nr_instructions_allocated; struct ins* instructions; } ;


 scalar_t__ FUNC_0 (struct arch*) ;
 int FUNC_1 (struct arch*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct arch* VAR_0, const char *VAR_1, struct ins_ops *VAR_2)
{
 struct ins *VAR_3;

 if (VAR_0->nr_instructions == VAR_0->nr_instructions_allocated &&
     FUNC_0(VAR_0))
  return -1;

 VAR_3 = &VAR_0->instructions[VAR_0->nr_instructions];
 VAR_3->name = FUNC_2(VAR_1);
 if (!VAR_3->name)
  return -1;

 VAR_3->ops = VAR_2;
 VAR_0->nr_instructions++;

 FUNC_1(VAR_0);
 return 0;
}
