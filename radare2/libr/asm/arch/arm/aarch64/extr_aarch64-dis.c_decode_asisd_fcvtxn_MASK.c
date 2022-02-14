
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* operands; int value; } ;
typedef TYPE_2__ aarch64_inst ;
struct TYPE_9__ {int member_1; int member_0; } ;
typedef TYPE_3__ aarch64_field ;
struct TYPE_7__ {int qualifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (int ,int ,int,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_2 (aarch64_inst *VAR_2)
{
  aarch64_field VAR_3 = {0, 0};
  FUNC_1 (VAR_1, 0, 1, &VAR_3);
  if (!FUNC_0 (&VAR_3, VAR_2->value, 0))
    return 0;
  VAR_2->operands[0].qualifier = VAR_0;
  return 1;
}
