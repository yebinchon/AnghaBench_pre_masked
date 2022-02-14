
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int package; } ;
typedef TYPE_1__ msi_dialog ;
struct TYPE_7__ {int attributes; int property; int hwnd; } ;
typedef TYPE_2__ msi_control ;
typedef int WPARAM ;
typedef int WCHAR ;
typedef int UINT ;
typedef int LPWSTR ;
typedef int LPARAM ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;

__attribute__((used)) static UINT FUNC_6( msi_dialog *VAR_8,
                                       msi_control *VAR_9, WPARAM VAR_10 )
{
    WCHAR VAR_11[VAR_6];
    LPWSTR VAR_12;
    BOOL VAR_13;
    int VAR_14;

    if (FUNC_1(VAR_10) != VAR_0)
        return VAR_5;

    VAR_14 = FUNC_2( VAR_9->hwnd, VAR_2, 0, 0 );
    if ( VAR_14 == VAR_1 )
    {
        FUNC_0("No ComboBox item selected!\n");
        return VAR_4;
    }

    FUNC_2( VAR_9->hwnd, VAR_3, VAR_14, (LPARAM)VAR_11 );

    VAR_13 = VAR_9->attributes & VAR_7;
    VAR_12 = FUNC_3( VAR_8, VAR_9->property, VAR_13 );

    FUNC_4( VAR_8->package, VAR_12, VAR_11 );

    FUNC_5( VAR_12 );
    return VAR_5;
}
