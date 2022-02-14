
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objtool_file {int insn_list; } ;
struct instruction {scalar_t__ sec; int list; } ;


 int VAR_0 ;
 struct instruction* FUNC_0 (struct instruction*,int ) ;

__attribute__((used)) static struct instruction *FUNC_1(struct objtool_file *VAR_1,
           struct instruction *VAR_2)
{
 struct instruction *VAR_3 = FUNC_0(VAR_2, VAR_0);

 if (!VAR_3 || &VAR_3->list == &VAR_1->insn_list || VAR_3->sec != VAR_2->sec)
  return ((void*)0);

 return VAR_3;
}
