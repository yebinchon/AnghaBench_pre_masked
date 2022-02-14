
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hWndFocus; int hwnd; } ;
typedef TYPE_1__ msi_dialog ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2( msi_dialog *VAR_2 )
{
    HWND VAR_3 = VAR_2->hWndFocus;

    VAR_3 = FUNC_0( VAR_2->hwnd, VAR_3, VAR_1);
    VAR_3 = FUNC_0( VAR_2->hwnd, VAR_3, VAR_0);
    FUNC_1( VAR_3 );
    VAR_2->hWndFocus = VAR_3;
}
