
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ins {int dummy; } ;
struct arch {int nr_instructions_allocated; int nr_instructions; struct ins* instructions; } ;


 struct ins* FUNC_0 (size_t,int) ;
 int FUNC_1 (struct ins*,struct ins*,int) ;
 struct ins* FUNC_2 (struct ins*,size_t) ;

__attribute__((used)) static int FUNC_3(struct arch *VAR_0)
{
 struct ins *VAR_1;
 size_t VAR_2;

 if (VAR_0->nr_instructions_allocated == 0 && VAR_0->instructions)
  goto grow_from_non_allocated_table;

 VAR_2 = VAR_0->nr_instructions_allocated + 128;
 VAR_1 = FUNC_2(VAR_0->instructions, VAR_2 * sizeof(struct ins));
 if (VAR_1 == ((void*)0))
  return -1;

out_update_instructions:
 VAR_0->instructions = VAR_1;
 VAR_0->nr_instructions_allocated = VAR_2;
 return 0;

grow_from_non_allocated_table:
 VAR_2 = VAR_0->nr_instructions + 128;
 VAR_1 = FUNC_0(VAR_2, sizeof(struct ins));
 if (VAR_1 == ((void*)0))
  return -1;

 FUNC_1(VAR_1, VAR_0->instructions, VAR_0->nr_instructions);
 goto out_update_instructions;
}
