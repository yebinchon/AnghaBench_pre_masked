
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int y; int x; } ;
struct TYPE_7__ {int y; int x; } ;
struct TYPE_10__ {TYPE_2__ low; TYPE_1__ high; } ;
struct TYPE_9__ {void* y; void* x; } ;
typedef TYPE_3__ Point ;
typedef TYPE_4__ BOX ;


 void* FUNC_0 (int ,double) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(Point *VAR_0, BOX *VAR_1)
{
 VAR_0->x = FUNC_0(FUNC_1(VAR_1->high.x, VAR_1->low.x), 2.0);
 VAR_0->y = FUNC_0(FUNC_1(VAR_1->high.y, VAR_1->low.y), 2.0);
}
