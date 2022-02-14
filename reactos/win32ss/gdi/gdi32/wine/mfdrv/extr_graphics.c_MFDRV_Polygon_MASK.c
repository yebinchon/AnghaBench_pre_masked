
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int y; int x; } ;
struct TYPE_7__ {int y; int x; } ;
typedef TYPE_1__ POINTS ;
typedef TYPE_2__ POINT ;
typedef int PHYSDEV ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,TYPE_1__*,int) ;

BOOL FUNC_4( PHYSDEV VAR_2, const POINT* VAR_3, INT VAR_4 )
{
    int VAR_5;
    POINTS *VAR_6;
    BOOL VAR_7;

    VAR_6 = FUNC_1( FUNC_0(), 0, sizeof(POINTS)*VAR_4 );
    if(!VAR_6) return VAR_0;
    for (VAR_5=VAR_4;VAR_5--;)
    {
        VAR_6[VAR_5].x = VAR_3[VAR_5].x;
        VAR_6[VAR_5].y = VAR_3[VAR_5].y;
    }
    VAR_7 = FUNC_3(VAR_2, VAR_1, VAR_6, VAR_4);

    FUNC_2( FUNC_0(), 0, VAR_6 );
    return VAR_7;
}
