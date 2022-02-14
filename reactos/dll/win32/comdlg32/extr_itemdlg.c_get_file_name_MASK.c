
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_3__ {scalar_t__ set_filename; int dlg_hwnd; } ;
typedef scalar_t__ LPWSTR ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_1__ FileDialogImpl ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static UINT FUNC_5(FileDialogImpl *VAR_3, LPWSTR *VAR_4)
{
    HWND VAR_5 = FUNC_1(VAR_3->dlg_hwnd, VAR_0);
    UINT VAR_6;

    if(!VAR_5)
    {
        if(VAR_3->set_filename)
        {
            VAR_6 = FUNC_4(VAR_3->set_filename);
            *VAR_4 = FUNC_0(sizeof(WCHAR)*(VAR_6+1));
            FUNC_3(*VAR_4, VAR_3->set_filename);
            return VAR_6;
        }
        return 0;
    }

    VAR_6 = FUNC_2(VAR_5, VAR_2, 0, 0);
    *VAR_4 = FUNC_0(sizeof(WCHAR)*(VAR_6+1));
    if(!*VAR_4)
        return 0;

    FUNC_2(VAR_5, VAR_1, VAR_6+1, (LPARAM)*VAR_4);
    return VAR_6;
}
