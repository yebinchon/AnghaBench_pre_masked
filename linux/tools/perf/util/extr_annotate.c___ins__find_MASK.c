
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ins_ops {int dummy; } ;
struct ins {struct ins_ops* ops; } ;
struct arch {int nr_instructions; int sorted_instructions; int instructions; } ;


 struct ins* FUNC_0 (char const*,int ,int const,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct arch*) ;

__attribute__((used)) static struct ins_ops *FUNC_2(struct arch *VAR_1, const char *VAR_2)
{
 struct ins *VAR_3;
 const int VAR_4 = VAR_1->nr_instructions;

 if (!VAR_1->sorted_instructions) {
  FUNC_1(VAR_1);
  VAR_1->sorted_instructions = 1;
 }

 VAR_3 = FUNC_0(VAR_2, VAR_1->instructions, VAR_4, sizeof(struct ins), VAR_0);
 return VAR_3 ? VAR_3->ops : ((void*)0);
}
