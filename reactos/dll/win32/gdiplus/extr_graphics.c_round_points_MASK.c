
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Y; int X; } ;
struct TYPE_5__ {void* y; void* x; } ;
typedef TYPE_1__ POINT ;
typedef int INT ;
typedef TYPE_2__ GpPointF ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(POINT *VAR_0, GpPointF *VAR_1, INT VAR_2)
{
    int VAR_3;

    for(VAR_3 = 0; VAR_3 < VAR_2; VAR_3++){
        VAR_0[VAR_3].x = FUNC_0(VAR_1[VAR_3].X);
        VAR_0[VAR_3].y = FUNC_0(VAR_1[VAR_3].Y);
    }
}
