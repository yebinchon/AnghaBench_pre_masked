
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; scalar_t__ reg; scalar_t__ offset; } ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ reg; } ;
struct stack_op {TYPE_2__ src; TYPE_1__ dest; } ;
struct instruction {struct stack_op stack_op; } ;
struct cfi_reg {scalar_t__ base; int offset; } ;
struct insn_state {struct cfi_reg cfa; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_0(struct instruction *VAR_7, struct insn_state *VAR_8)
{
 struct cfi_reg *VAR_9 = &VAR_8->cfa;
 struct stack_op *VAR_10 = &VAR_7->stack_op;

 if (VAR_9->base != VAR_0)
  return 0;


 if (VAR_10->dest.type == VAR_1 || VAR_10->dest.type == VAR_2)
  VAR_9->offset += 8;


 if (VAR_10->src.type == VAR_5 || VAR_10->src.type == VAR_6)
  VAR_9->offset -= 8;


 if (VAR_10->dest.type == VAR_3 && VAR_10->src.type == VAR_4 &&
     VAR_10->dest.reg == VAR_0 && VAR_10->src.reg == VAR_0)
  VAR_9->offset -= VAR_10->src.offset;

 return 0;
}
