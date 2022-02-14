
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sp; } ;
typedef TYPE_1__ codegen_scope ;


 int FUNC_0 (TYPE_1__*,char*) ;

__attribute__((used)) static void
FUNC_1(codegen_scope *VAR_0, int VAR_1)
{
  if ((int)VAR_0->sp-VAR_1 < 0) {
    FUNC_0(VAR_0, "stack pointer underflow");
  }
  VAR_0->sp-=VAR_1;
}
