
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int y; int x; } ;
struct TYPE_6__ {int y; int x; } ;
typedef TYPE_1__ POINTS ;
typedef TYPE_2__ POINT ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;

__attribute__((used)) static POINT *FUNC_2( UINT VAR_0, const POINTS *VAR_1 )
{
    UINT VAR_2;
    POINT *VAR_3 = FUNC_1( FUNC_0(), 0, VAR_0 * sizeof(*VAR_3) );
    if (VAR_3)
    {
        for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
        {
            VAR_3[VAR_2].x = VAR_1[VAR_2].x;
            VAR_3[VAR_2].y = VAR_1[VAR_2].y;
        }
    }
    return VAR_3;
}
