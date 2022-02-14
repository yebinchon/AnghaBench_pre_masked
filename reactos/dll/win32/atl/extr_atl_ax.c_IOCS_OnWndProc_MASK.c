
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int WPARAM ;
typedef int WNDPROC ;
typedef int UINT ;
struct TYPE_7__ {int OrigWndProc; } ;
typedef int RECT ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef TYPE_1__ IOCS ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;





__attribute__((used)) static LRESULT FUNC_8( IOCS *VAR_0, HWND VAR_1, UINT VAR_2, WPARAM VAR_3, LPARAM VAR_4 )
{
    WNDPROC VAR_5 = VAR_0->OrigWndProc;

    switch( VAR_2 )
    {
        case 131:
            FUNC_2( VAR_0 );
            break;
        case 128:
            {
                RECT VAR_6;
                FUNC_7(&VAR_6, 0, 0, FUNC_6(VAR_4), FUNC_1(VAR_4));
                FUNC_5( VAR_0, &VAR_6 );
            }
            break;
        case 129:
            FUNC_4( VAR_0, (BOOL) VAR_3 );
            break;
        case 130:
            FUNC_3( VAR_0 );
            break;
    }

    return FUNC_0( VAR_5, VAR_1, VAR_2, VAR_3, VAR_4 );
}
