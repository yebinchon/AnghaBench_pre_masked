
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_7__ {int value; TYPE_2__* opcode; TYPE_1__* operands; } ;
typedef TYPE_3__ aarch64_inst ;
struct TYPE_6__ {int iclass; int ** qualifiers_list; } ;
struct TYPE_5__ {int qualifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int,int ,int,int ,int ) ;
__attribute__((used)) static bfd_boolean
FUNC_2 (aarch64_inst *VAR_12)
{
  int VAR_13, VAR_14;

  VAR_14 = 0;
  switch (VAR_12->opcode->iclass)
    {
    case 139:
      VAR_14 = FUNC_1 (VAR_12->value, 0, 2, VAR_10, VAR_2);
      break;

    case 138:
      VAR_13 = FUNC_1 (VAR_12->value, 0, 2, VAR_6, VAR_9);
      if ((VAR_13 & 31) == 0)
 return VAR_1;
      while ((VAR_13 & 1) == 0)
 {
   VAR_13 >>= 1;
   VAR_14 += 1;
 }
      break;

    case 137:

      if ((VAR_12->value & 0x20600) == 0x600)
 VAR_14 = 0;
      else if ((VAR_12->value & 0x20400) == 0x400)
 VAR_14 = 1;
      else if ((VAR_12->value & 0x20000) == 0)
 VAR_14 = 2;
      else
 VAR_14 = 3;
      break;

    case 136:

      break;

    case 135:
      VAR_14 = FUNC_1 (VAR_12->value, 0, 2, VAR_10, VAR_3);
      break;

    case 134:
      VAR_14 = FUNC_0 (VAR_4, VAR_12->value, 0);
      break;

    case 133:
      VAR_13 = FUNC_1 (VAR_12->value, 0, 2, VAR_6, VAR_8);
    sve_shift:
      if (VAR_13 == 0)
 return VAR_1;
      while (VAR_13 != 1)
 {
   VAR_13 >>= 1;
   VAR_14 += 1;
 }
      break;

    case 132:
      VAR_13 = FUNC_1 (VAR_12->value, 0, 2, VAR_6, VAR_7);
      goto sve_shift;

    case 131:
      VAR_14 = FUNC_0 (VAR_10, VAR_12->value, 0);
      if (VAR_14 >= 3)
 return VAR_1;
      break;

    case 130:
      VAR_14 = FUNC_0 (VAR_10, VAR_12->value, 0);
      break;

    case 129:
      VAR_13 = FUNC_0 (VAR_10, VAR_12->value, 0);
      if (VAR_13 < 1)
 return VAR_1;
      VAR_14 = VAR_13 - 1;
      break;

    case 128:
      VAR_14 = FUNC_0 (VAR_5, VAR_12->value, 0);
      break;

    default:

      return VAR_11;
    }

  for (VAR_13 = 0; VAR_13 < VAR_0; ++VAR_13)
    VAR_12->operands[VAR_13].qualifier = VAR_12->opcode->qualifiers_list[VAR_14][VAR_13];
  return VAR_11;
}
