
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int msi_dialog ;
struct TYPE_3__ {int hwnd; } ;
typedef TYPE_1__ msi_control ;
typedef int WCHAR ;
typedef scalar_t__* LPWSTR ;
typedef int LPARAM ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*) ;

__attribute__((used)) static void FUNC_5( msi_dialog *VAR_1, msi_control *VAR_2 )
{
    LPWSTR VAR_3, VAR_4;
    DWORD VAR_5;

    VAR_5 = FUNC_0( 0, ((void*)0) );
    if ( !VAR_5 ) return;

    VAR_3 = FUNC_3( (VAR_5 + 1) * sizeof(WCHAR) );
    if ( !VAR_3 ) return;

    FUNC_0( VAR_5, VAR_3 );

    VAR_4 = VAR_3;
    while (*VAR_4)
    {
        FUNC_1( VAR_2->hwnd, VAR_0, 0, (LPARAM)VAR_4 );
        VAR_4 += FUNC_2(VAR_4) + 1;
    }

    FUNC_4( VAR_3 );
}
