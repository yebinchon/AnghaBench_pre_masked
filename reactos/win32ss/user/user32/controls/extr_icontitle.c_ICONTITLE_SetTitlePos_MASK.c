
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int str ;
typedef char WCHAR ;
struct TYPE_7__ {int x; int y; } ;
struct TYPE_6__ {int right; int left; int bottom; int top; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef int INT ;
typedef int HWND ;
typedef int HFONT ;
typedef int HDC ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,TYPE_1__*,int) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ,TYPE_2__*,int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int,int) ;
 int FUNC_9 (int ,int ,int,int,int,int,int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static BOOL FUNC_12( HWND VAR_15, HWND VAR_16 )
{
    static const WCHAR VAR_17[] = {'<','.','.','.','>',0};
    WCHAR VAR_18[80];
    HDC VAR_19;
    HFONT VAR_20;
    RECT VAR_21;
    INT VAR_22, VAR_23;
    POINT VAR_24;

    int VAR_25 = FUNC_4( VAR_16, VAR_18, sizeof(VAR_18)/sizeof(WCHAR) );

    while (VAR_25 && VAR_18[VAR_25 - 1] == ' ')
        VAR_18[--VAR_25] = 0;

    if( !VAR_25 )
    {
        FUNC_10( VAR_18, VAR_17 );
        VAR_25 = FUNC_11( VAR_18 );
    }

    if (!(VAR_19 = FUNC_1( VAR_15 ))) return VAR_5;

    VAR_20 = FUNC_7( VAR_19, VAR_14 );

    FUNC_8( &VAR_21, 0, 0, FUNC_3(VAR_8) -
             FUNC_3(VAR_6) * 2,
             FUNC_3(VAR_9) * 2 );

    FUNC_0( VAR_19, VAR_18, VAR_25, &VAR_21, VAR_0 | VAR_1 | VAR_2 | VAR_4 |
               (( VAR_13 ) ? 0 : VAR_3) );

    FUNC_7( VAR_19, VAR_20 );
    FUNC_6( VAR_15, VAR_19 );

    VAR_22 = VAR_21.right - VAR_21.left + 4 * FUNC_3(VAR_6);
    VAR_23 = VAR_21.bottom - VAR_21.top;

    VAR_24.x = (FUNC_3(VAR_7) - VAR_22) / 2;
    VAR_24.y = FUNC_3(VAR_10);


    FUNC_5( VAR_16, FUNC_2(VAR_15), &VAR_24, 1 );

    FUNC_9( VAR_15, VAR_16, VAR_24.x, VAR_24.y, VAR_22, VAR_23, VAR_11 );
    return VAR_12;
}
