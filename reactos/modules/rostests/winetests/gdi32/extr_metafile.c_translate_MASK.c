
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int eM11; int eM21; int eM12; int eM22; scalar_t__ eDy; scalar_t__ eDx; } ;
typedef TYPE_1__ XFORM ;
typedef int UINT ;
struct TYPE_6__ {void* y; void* x; } ;
typedef TYPE_2__ POINT ;
typedef void* LONG ;
typedef int FLOAT ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1( POINT *VAR_0, UINT VAR_1, const XFORM *VAR_2 )
{
    while (VAR_1--)
    {
        FLOAT VAR_3 = (FLOAT)VAR_0->x;
        FLOAT VAR_4 = (FLOAT)VAR_0->y;
        VAR_0->x = (LONG)FUNC_0( VAR_3 * VAR_2->eM11 + VAR_4 * VAR_2->eM21 + VAR_2->eDx + 0.5 );
        VAR_0->y = (LONG)FUNC_0( VAR_3 * VAR_2->eM12 + VAR_4 * VAR_2->eM22 + VAR_2->eDy + 0.5 );
        VAR_0++;
    }
}
