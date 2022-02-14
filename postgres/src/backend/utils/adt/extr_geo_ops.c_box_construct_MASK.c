
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int y; int x; } ;
struct TYPE_8__ {int y; int x; } ;
struct TYPE_11__ {TYPE_2__ low; TYPE_1__ high; } ;
struct TYPE_10__ {int y; int x; } ;
typedef TYPE_3__ Point ;
typedef TYPE_4__ BOX ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(BOX *VAR_0, Point *VAR_1, Point *VAR_2)
{
 if (FUNC_0(VAR_1->x, VAR_2->x))
 {
  VAR_0->high.x = VAR_1->x;
  VAR_0->low.x = VAR_2->x;
 }
 else
 {
  VAR_0->high.x = VAR_2->x;
  VAR_0->low.x = VAR_1->x;
 }
 if (FUNC_0(VAR_1->y, VAR_2->y))
 {
  VAR_0->high.y = VAR_1->y;
  VAR_0->low.y = VAR_2->y;
 }
 else
 {
  VAR_0->high.y = VAR_2->y;
  VAR_0->low.y = VAR_1->y;
 }
}
