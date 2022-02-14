
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_7__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_10__ {TYPE_2__ low; TYPE_1__ high; } ;
struct TYPE_9__ {scalar_t__ x; scalar_t__ y; } ;
typedef TYPE_3__ Point ;
typedef TYPE_4__ BOX ;



__attribute__((used)) static bool
FUNC_0(BOX *VAR_0, Point *VAR_1)
{
 return VAR_0->high.x >= VAR_1->x && VAR_0->low.x <= VAR_1->x &&
  VAR_0->high.y >= VAR_1->y && VAR_0->low.y <= VAR_1->y;
}
