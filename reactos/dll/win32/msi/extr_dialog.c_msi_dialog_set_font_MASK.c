
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hfont; } ;
typedef TYPE_1__ msi_font ;
typedef int msi_dialog ;
typedef int WPARAM ;
typedef int UINT ;
typedef int LPCWSTR ;
typedef int HWND ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *,int ) ;

__attribute__((used)) static UINT FUNC_4( msi_dialog *VAR_3, HWND VAR_4, LPCWSTR VAR_5 )
{
    msi_font *VAR_6;

    VAR_6 = FUNC_3( VAR_3, VAR_5 );
    if( VAR_6 )
        FUNC_1( VAR_4, VAR_2, (WPARAM) VAR_6->hfont, VAR_1 );
    else
        FUNC_0("No font entry for %s\n", FUNC_2(VAR_5));
    return VAR_0;
}
