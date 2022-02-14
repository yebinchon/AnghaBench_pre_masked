
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int x; int y; } ;
struct TYPE_8__ {int nTotalCreated; scalar_t__ nActiveChildren; scalar_t__ idFirstChild; } ;
struct TYPE_7__ {int bottom; int top; int right; int left; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ MDICLIENTINFO ;
typedef TYPE_3__* LPPOINT ;
typedef int INT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,scalar_t__) ;
 TYPE_2__* FUNC_3 (int ) ;

void FUNC_4( HWND VAR_2, INT VAR_3, LPPOINT VAR_4, INT VAR_5, UINT *VAR_6 )
{
    INT VAR_7;
    RECT VAR_8;
    INT VAR_9 = FUNC_1(VAR_0) + FUNC_1(VAR_1) - 1;

    if (VAR_3 < 0)
    {
        MDICLIENTINFO *VAR_10 = FUNC_3(VAR_2);
        VAR_3 = VAR_10 ? VAR_10->nTotalCreated : 0;
        *VAR_6 = VAR_10 ? VAR_10->idFirstChild + VAR_10->nActiveChildren : 0;
        FUNC_2("MDI child id %04x\n", *VAR_6);
    }

    FUNC_0( VAR_2, &VAR_8 );
    if( VAR_8.bottom - VAR_8.top - VAR_5 >= VAR_9 )
 VAR_8.bottom -= VAR_5;

    VAR_7 = (VAR_8.bottom - VAR_8.top)/(3 * VAR_9);
    VAR_4[1].x = (VAR_8.right - VAR_8.left - VAR_7 * VAR_9);
    VAR_4[1].y = (VAR_8.bottom - VAR_8.top - VAR_7 * VAR_9);
    VAR_4[0].x = VAR_4[0].y = VAR_9 * (VAR_3%(VAR_7+1));
}
