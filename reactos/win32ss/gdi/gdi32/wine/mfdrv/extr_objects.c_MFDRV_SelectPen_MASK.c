
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct brush_pattern {int dummy; } ;
typedef int pen ;
struct TYPE_15__ {scalar_t__ y; int x; } ;
struct TYPE_19__ {int elpColor; int elpWidth; int elpPenStyle; int lopnColor; TYPE_1__ lopnWidth; int lopnStyle; } ;
struct TYPE_16__ {scalar_t__ y; int x; } ;
struct TYPE_18__ {int lopnColor; TYPE_2__ lopnWidth; int lopnStyle; } ;
struct TYPE_17__ {int hdc; } ;
typedef TYPE_3__* PHYSDEV ;
typedef TYPE_4__ LOGPEN16 ;
typedef TYPE_5__ LOGPEN ;
typedef scalar_t__ INT16 ;
typedef int INT ;
typedef int HPEN ;
typedef TYPE_5__ EXTLOGPEN ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,TYPE_5__*) ;
 int FUNC_2 () ;
 TYPE_5__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,scalar_t__) ;

HPEN FUNC_8( PHYSDEV VAR_0, HPEN VAR_1, const struct brush_pattern *VAR_2 )
{
    LOGPEN16 VAR_3;
    INT16 VAR_4;

    VAR_4 = FUNC_6(VAR_0, VAR_1);
    if( VAR_4 < 0 )
    {

        INT VAR_5 = FUNC_1( VAR_1, 0, ((void*)0) );

        if (!VAR_5) return 0;

        if (VAR_5 == sizeof(LOGPEN))
        {
            LOGPEN VAR_6;

            FUNC_1( VAR_1, sizeof(VAR_6), &VAR_6 );
            VAR_3.lopnStyle = VAR_6.lopnStyle;
            VAR_3.lopnWidth.x = VAR_6.lopnWidth.x;
            VAR_3.lopnWidth.y = VAR_6.lopnWidth.y;
            VAR_3.lopnColor = VAR_6.lopnColor;
        }
        else
        {
            EXTLOGPEN *VAR_7 = FUNC_3( FUNC_2(), 0, VAR_5 );

            FUNC_1( VAR_1, VAR_5, VAR_7 );

            VAR_3.lopnStyle = VAR_7->elpPenStyle;
            VAR_3.lopnWidth.x = VAR_7->elpWidth;
            VAR_3.lopnWidth.y = 0;
            VAR_3.lopnColor = VAR_7->elpColor;

            FUNC_4( FUNC_2(), 0, VAR_7 );
        }

        VAR_4 = FUNC_5( VAR_0, VAR_1, &VAR_3 );
        if( VAR_4 < 0 )
            return 0;
        FUNC_0(VAR_1, VAR_0->hdc);
    }
    return FUNC_7( VAR_0, VAR_4 ) ? VAR_1 : 0;
}
