
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * insn; int syntax; } ;
typedef TYPE_1__ tms320_dasm_t ;
typedef int insn_item_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*,char*,char*) ;

__attribute__((used)) static insn_item_t * FUNC_3(tms320_dasm_t * VAR_2)
{


 FUNC_2(VAR_2->syntax, "  ", "%s", " ");



 if (FUNC_0 (VAR_2, VAR_1)) {
  FUNC_1 (VAR_2->syntax, " ", ".lr ");
 }
 if (FUNC_0 (VAR_2, VAR_0)) {
  FUNC_1 (VAR_2->syntax, " ", ".cr ");
 }

 return VAR_2->insn;
}
