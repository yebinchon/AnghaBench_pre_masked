
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * set_filename; int dlg_hwnd; } ;
typedef scalar_t__ LPCWSTR ;
typedef TYPE_1__ FileDialogImpl ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int * FUNC_2 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_3(FileDialogImpl *VAR_1, LPCWSTR VAR_2)
{
    if(VAR_1->set_filename)
        FUNC_0(VAR_1->set_filename);

    VAR_1->set_filename = VAR_2 ? FUNC_2(VAR_2) : ((void*)0);

    return FUNC_1(VAR_1->dlg_hwnd, VAR_0, VAR_1->set_filename);
}
