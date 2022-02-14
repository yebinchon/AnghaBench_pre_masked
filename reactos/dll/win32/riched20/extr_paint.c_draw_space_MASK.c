
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_14__ {TYPE_1__* editor; int hDC; } ;
struct TYPE_13__ {scalar_t__ nWidth; int style; } ;
struct TYPE_12__ {int styleFlags; int texthost; scalar_t__ bEmulateVersion10; int bHaveFocus; scalar_t__ bHideSelection; } ;
typedef int RECT ;
typedef TYPE_2__ ME_Run ;
typedef TYPE_3__ ME_Context ;
typedef int * HFONT ;
typedef int HDC ;
typedef int HBRUSH ;
typedef int COLORREF ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int,int ,int *,char const*,int,scalar_t__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int *) ;
 int FUNC_7 (int ,int,int,scalar_t__,int,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int,int,scalar_t__,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*,TYPE_2__*,int,int,int ) ;
 int FUNC_13 (TYPE_3__*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_14( ME_Context *VAR_5, ME_Run *VAR_6, int VAR_7, int VAR_8,
                        BOOL VAR_9, BOOL VAR_10, int VAR_11, int VAR_12 )
{
    HDC VAR_13 = VAR_5->hDC;
    BOOL VAR_14 = VAR_4;
    RECT VAR_15;
    COLORREF VAR_16 = 0;

    FUNC_9( &VAR_15, VAR_7, VAR_11, VAR_7 + VAR_6->nWidth, VAR_11 + VAR_12 );

    if (VAR_5->editor->bHideSelection || (!VAR_5->editor->bHaveFocus &&
                !(VAR_5->editor->styleFlags & VAR_2))) VAR_9 = VAR_4;
    if (VAR_5->editor->bEmulateVersion10)
    {
        VAR_14 = VAR_9;
        VAR_9 = VAR_4;
    }

    if (VAR_9)
        VAR_16 = FUNC_4( VAR_5->editor->texthost, VAR_0 );

    if (VAR_10)
    {
        COLORREF VAR_17 = FUNC_13( VAR_5, VAR_6->style, VAR_9 );
        COLORREF VAR_18, VAR_19;
        HFONT VAR_20 = ((void*)0);
        int VAR_21 = FUNC_11( VAR_5, VAR_6->style );
        static const WCHAR VAR_22[1] = {' '};

        VAR_20 = FUNC_5( VAR_5, VAR_6->style );
        VAR_18 = FUNC_10( VAR_13, VAR_17 );
        if (VAR_9) VAR_19 = FUNC_8( VAR_13, VAR_16 );

        FUNC_2( VAR_13, VAR_7, VAR_8 - VAR_21, VAR_9 ? VAR_3 : 0, &VAR_15, VAR_22, 1, &VAR_6->nWidth );

        if (VAR_9) FUNC_8( VAR_13, VAR_19 );
        FUNC_10( VAR_13, VAR_18 );
        FUNC_6( VAR_5, VAR_6->style, VAR_20 );

        FUNC_12( VAR_5, VAR_6, VAR_7, VAR_8 - VAR_21, VAR_17 );
    }
    else if (VAR_9)
    {
        HBRUSH VAR_23 = FUNC_0( VAR_16 );
        FUNC_3( VAR_13, &VAR_15, VAR_23 );
        FUNC_1( VAR_23 );
    }

    if (VAR_14)
        FUNC_7( VAR_13, VAR_7, VAR_11, VAR_6->nWidth, VAR_12, VAR_1 );
}
