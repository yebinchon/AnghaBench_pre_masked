
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ aarch64_opnd_qualifier_t ;
typedef scalar_t__* aarch64_opnd_qualifier_seq_t ;
struct TYPE_8__ {TYPE_2__* opcode; TYPE_1__* operands; } ;
typedef TYPE_3__ aarch64_inst ;
struct TYPE_7__ {int qualifiers_list; } ;
struct TYPE_6__ {scalar_t__ qualifier; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__ const*,int ,int,scalar_t__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static aarch64_opnd_qualifier_t
FUNC_2 (const aarch64_inst *VAR_1, int VAR_2)
{
  aarch64_opnd_qualifier_seq_t VAR_3;

  FUNC_1 (VAR_1->operands[VAR_2].qualifier == VAR_0);
  if (FUNC_0 (VAR_1, VAR_1->opcode->qualifiers_list,
          VAR_2, VAR_3))
    return VAR_3[VAR_2];
  else
    return VAR_0;
}
