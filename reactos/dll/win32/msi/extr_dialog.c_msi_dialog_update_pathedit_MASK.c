
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int msi_dialog ;
struct TYPE_4__ {int attributes; int hwnd; int property; } ;
typedef TYPE_1__ msi_control ;
typedef int LPWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int) ;
 TYPE_1__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5( msi_dialog *VAR_4, msi_control *VAR_5 )
{
    LPWSTR VAR_6, VAR_7;
    BOOL VAR_8;

    if (!VAR_5 && !(VAR_5 = FUNC_3( VAR_4, VAR_3 )))
       return;

    VAR_8 = VAR_5->attributes & VAR_2;
    VAR_6 = FUNC_2( VAR_4, VAR_5->property, VAR_8 );
    VAR_7 = FUNC_2( VAR_4, VAR_6, VAR_1 );

    FUNC_1( VAR_5->hwnd, VAR_7 );
    FUNC_0( VAR_5->hwnd, VAR_0, 0, -1 );

    FUNC_4( VAR_7 );
    FUNC_4( VAR_6 );
}
