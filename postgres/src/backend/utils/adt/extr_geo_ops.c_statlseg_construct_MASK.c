
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* p; } ;
struct TYPE_8__ {int y; int x; } ;
struct TYPE_7__ {int y; int x; } ;
typedef TYPE_2__ Point ;
typedef TYPE_3__ LSEG ;



__attribute__((used)) static inline void
FUNC_0(LSEG *VAR_0, Point *VAR_1, Point *VAR_2)
{
 VAR_0->p[0].x = VAR_1->x;
 VAR_0->p[0].y = VAR_1->y;
 VAR_0->p[1].x = VAR_2->x;
 VAR_0->p[1].y = VAR_2->y;
}
