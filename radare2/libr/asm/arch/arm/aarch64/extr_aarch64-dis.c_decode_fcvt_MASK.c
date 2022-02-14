
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum aarch64_opnd_qualifier { ____Placeholder_aarch64_opnd_qualifier } aarch64_opnd_qualifier ;
struct TYPE_7__ {TYPE_1__* operands; int value; } ;
typedef TYPE_2__ aarch64_inst ;
typedef int aarch64_insn ;
struct TYPE_8__ {int member_0; int member_1; } ;
typedef TYPE_3__ aarch64_field ;
struct TYPE_6__ {int qualifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__ const*,int ,int ) ;

__attribute__((used)) static int
FUNC_1 (aarch64_inst *VAR_3)
{
  enum aarch64_opnd_qualifier VAR_4;
  aarch64_insn VAR_5;
  const aarch64_field VAR_6 = {15, 2};


  VAR_5 = FUNC_0 (&VAR_6, VAR_3->value, 0);
  switch (VAR_5)
    {
    case 0: VAR_4 = VAR_2; break;
    case 1: VAR_4 = VAR_0; break;
    case 3: VAR_4 = VAR_1; break;
    default: return 0;
    }
  VAR_3->operands[0].qualifier = VAR_4;

  return 1;
}
