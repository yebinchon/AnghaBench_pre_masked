
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int y; int x; } ;
struct TYPE_7__ {int y; int x; } ;
struct TYPE_8__ {TYPE_1__ low; TYPE_2__ high; } ;
typedef TYPE_3__ BOX ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static bool
FUNC_2(BOX *VAR_0, BOX *VAR_1)
{
 return FUNC_0(VAR_0->high.x, VAR_1->high.x) &&
  FUNC_1(VAR_0->low.x, VAR_1->low.x) &&
  FUNC_0(VAR_0->high.y, VAR_1->high.y) &&
  FUNC_1(VAR_0->low.y, VAR_1->low.y);
}
