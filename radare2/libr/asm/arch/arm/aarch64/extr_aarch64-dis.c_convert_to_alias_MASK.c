
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int op; } ;
typedef TYPE_1__ aarch64_opcode ;
typedef int aarch64_inst ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12 (aarch64_inst *VAR_0, const aarch64_opcode *VAR_1)
{
  switch (VAR_1->op)
    {
    case 151:
    case 141:
      return FUNC_3 (VAR_0);
    case 142:
      return FUNC_11 (VAR_0);
    case 147:
    case 146:
    case 145:
      return FUNC_6 (VAR_0);
    case 144:
    case 143:
      return FUNC_4 (VAR_0);
    case 130:
    case 148:
    case 134:
      return FUNC_2 (VAR_0);
    case 135:
    case 149:
    case 131:
      return FUNC_1 (VAR_0);
    case 150:
      return FUNC_0 (VAR_0);
    case 137:
      return FUNC_9 (VAR_0);
    case 139:
    case 138:
      return FUNC_8 (VAR_0);
    case 140:
      return FUNC_7 (VAR_0);
    case 136:
      return FUNC_5 (VAR_0);
    case 133:
    case 132:
    case 129:
    case 128:
      return FUNC_10 (VAR_0);
    default:
      return 0;
    }
}
