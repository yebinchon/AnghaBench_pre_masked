
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int * hwndFocus; } ;
typedef int * HWND ;
typedef TYPE_1__ DIALOGINFO ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7( HWND VAR_2, BOOL VAR_3 )
{
    DIALOGINFO *VAR_4;

    if (FUNC_4( VAR_2 )) return;
    if (!(VAR_4 = FUNC_1(VAR_2))) return;

    if (VAR_4->flags & VAR_0) return;
    if (!FUNC_5(VAR_4->hwndFocus) || VAR_4->hwndFocus == VAR_2) {
        if (VAR_3) return;


        VAR_4->hwndFocus = FUNC_3( VAR_2, 0, VAR_1 );


        if (!VAR_4->hwndFocus) VAR_4->hwndFocus = FUNC_2( VAR_2, 0, VAR_1 );
        if (!FUNC_5( VAR_4->hwndFocus )) return;
    }
    if (VAR_3)
        FUNC_6( VAR_4->hwndFocus );
    else
        FUNC_0( VAR_4->hwndFocus );

    VAR_4->hwndFocus = ((void*)0);
}
