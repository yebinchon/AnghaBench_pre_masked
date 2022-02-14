
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_6__ {int y; int x; } ;
struct TYPE_5__ {int y; int x; } ;
struct TYPE_7__ {TYPE_2__ low; TYPE_1__ high; } ;
typedef TYPE_3__ BOX ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 double FUNC_2 (int ,int ) ;
 double FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static float8
FUNC_5(const BOX *VAR_0)
{







 if (FUNC_0(VAR_0->high.x, VAR_0->low.x) ||
  FUNC_0(VAR_0->high.y, VAR_0->low.y))
  return 0.0;






 if (FUNC_4(VAR_0->high.x) || FUNC_4(VAR_0->high.y))
  return FUNC_3();
 return FUNC_2(FUNC_1(VAR_0->high.x, VAR_0->low.x),
       FUNC_1(VAR_0->high.y, VAR_0->low.y));
}
