
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_code ;
struct TYPE_4__ {int pc; int lastpc; } ;
typedef TYPE_1__ codegen_scope ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_1(codegen_scope *VAR_0, mrb_code VAR_1)
{
  VAR_0->lastpc = VAR_0->pc;
  FUNC_0(VAR_0, VAR_1);
}
