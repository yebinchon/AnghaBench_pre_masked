
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int offset; struct symbol* cfunc; int sec; } ;
struct objtool_file {int insn_list; } ;
struct instruction {struct symbol* func; int list; } ;


 struct instruction* FUNC_0 (struct objtool_file*,int ,int ) ;
 int VAR_0 ;
 struct instruction* FUNC_1 (struct instruction*,int ) ;

__attribute__((used)) static struct instruction *FUNC_2(struct objtool_file *VAR_1,
            struct instruction *VAR_2)
{
 struct instruction *VAR_3 = FUNC_1(VAR_2, VAR_0);
 struct symbol *VAR_4 = VAR_2->func;

 if (!VAR_4)
  return ((void*)0);

 if (&VAR_3->list != &VAR_1->insn_list && VAR_3->func == VAR_4)
  return VAR_3;


 if (VAR_4 == VAR_4->cfunc)
  return ((void*)0);


 return FUNC_0(VAR_1, VAR_4->cfunc->sec, VAR_4->cfunc->offset);
}
