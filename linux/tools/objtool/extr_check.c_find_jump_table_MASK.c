
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {scalar_t__ sec; scalar_t__ offset; } ;
struct section {int name; int rodata; } ;
struct rela {unsigned long addend; scalar_t__ type; TYPE_2__* sym; } ;
struct objtool_file {int ignore_unreachables; int insn_list; } ;
struct instruction {scalar_t__ sec; scalar_t__ offset; scalar_t__ type; int len; TYPE_1__* jump_dest; scalar_t__ first_jump_src; int list; } ;
struct TYPE_4__ {scalar_t__ type; struct section* sec; } ;
struct TYPE_3__ {scalar_t__ offset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct rela* FUNC_0 (struct section*,unsigned long) ;
 struct rela* FUNC_1 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct section*,unsigned long) ;
 int VAR_5 ;
 struct instruction* FUNC_3 (struct instruction*,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static struct rela *FUNC_5(struct objtool_file *VAR_6,
          struct symbol *VAR_7,
          struct instruction *VAR_8)
{
 struct rela *VAR_9, *VAR_10;
 struct instruction *VAR_11 = VAR_8;
 struct section *VAR_12;
 unsigned long VAR_13;






 for (;
      &VAR_8->list != &VAR_6->insn_list &&
      VAR_8->sec == VAR_7->sec &&
      VAR_8->offset >= VAR_7->offset;

      VAR_8 = VAR_8->first_jump_src ?: FUNC_3(VAR_8, VAR_5)) {

  if (VAR_8 != VAR_11 && VAR_8->type == VAR_1)
   break;


  if (VAR_8->type == VAR_2 &&
      VAR_8->jump_dest &&
      (VAR_8->jump_dest->offset <= VAR_8->offset ||
       VAR_8->jump_dest->offset > VAR_11->offset))
      break;


  VAR_9 = FUNC_1(VAR_8->sec, VAR_8->offset,
          VAR_8->len);
  if (!VAR_9 || VAR_9->sym->type != VAR_4 ||
      !VAR_9->sym->sec->rodata)
   continue;

  VAR_13 = VAR_9->addend;
  VAR_12 = VAR_9->sym->sec;

  if (VAR_9->type == VAR_3)
   VAR_13 += 4;
  if (FUNC_2(VAR_12, VAR_13) &&
      FUNC_4(VAR_12->name, VAR_0))
   continue;


  VAR_10 = FUNC_0(VAR_12, VAR_13);
  if (!VAR_10)
   continue;






  if (VAR_9->type == VAR_3)
   VAR_6->ignore_unreachables = 1;

  return VAR_10;
 }

 return ((void*)0);
}
