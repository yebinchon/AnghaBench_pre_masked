
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int value; TYPE_1__* opcode; } ;
typedef TYPE_2__ aarch64_inst ;
struct TYPE_7__ {int op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 unsigned int FUNC_3 (int ,int ,int ) ;
 unsigned int FUNC_4 (int ,int ,int,int ,int ) ;

__attribute__((used)) static int
FUNC_5 (aarch64_inst *VAR_9)
{
  unsigned int VAR_10;
  switch (VAR_9->opcode->op)
    {
    case 144:
      return FUNC_2 (VAR_9);

    case 141:
    case 140:
    case 143:
    case 142:
      return FUNC_0 (VAR_9);

    case 139:
      return FUNC_1 (VAR_9);

    case 134:
    case 137:
      VAR_10 = FUNC_3 (VAR_3, VAR_9->value, 0);
      return (VAR_10 == FUNC_3 (VAR_2, VAR_9->value, 0)
       && VAR_10 == FUNC_3 (VAR_1, VAR_9->value, 0));

    case 133:
      return (FUNC_3 (VAR_4, VAR_9->value, 0)
       == FUNC_3 (VAR_5, VAR_9->value, 0));

    case 132:

      VAR_10 = FUNC_4 (VAR_9->value, 0, 2, VAR_7, VAR_8);
      return VAR_10 > 0 && VAR_10 <= 16 && VAR_10 == (VAR_10 & -VAR_10);

    case 131:
      return (FUNC_3 (VAR_6, VAR_9->value, 0)
       == FUNC_3 (VAR_5, VAR_9->value, 0));

    case 130:

      VAR_10 = FUNC_4 (VAR_9->value, 0, 2, VAR_7, VAR_8);
      return VAR_10 > 0 && VAR_10 != (VAR_10 & -VAR_10);

    case 138:
      return (FUNC_3 (VAR_0, VAR_9->value, 0)
       == FUNC_3 (VAR_2, VAR_9->value, 0));

    case 136:
    case 135:
      return (FUNC_3 (VAR_3, VAR_9->value, 0)
       == FUNC_3 (VAR_2, VAR_9->value, 0));

    case 129:
    case 128:
      return (FUNC_3 (VAR_2, VAR_9->value, 0)
       == FUNC_3 (VAR_1, VAR_9->value, 0));

    default:
      return 0;
    }
}
