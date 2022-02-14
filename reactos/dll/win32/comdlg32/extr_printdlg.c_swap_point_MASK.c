
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int x; } ;
typedef TYPE_1__ POINT ;
typedef int LONG ;



__attribute__((used)) static inline void FUNC_0(POINT *VAR_0)
{
    LONG VAR_1 = VAR_0->x;
    VAR_0->x = VAR_0->y;
    VAR_0->y = VAR_1;
}
