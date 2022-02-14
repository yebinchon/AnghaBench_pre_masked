
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int y; int x; } ;
typedef TYPE_1__ Point ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static inline bool
FUNC_2(Point *VAR_0, Point *VAR_1)
{
 return ((FUNC_0(VAR_0->x, VAR_1->x) && FUNC_0(VAR_0->y, VAR_1->y)) ||
   (FUNC_1(VAR_0->x, VAR_1->x) && FUNC_1(VAR_0->y, VAR_1->y)));
}
