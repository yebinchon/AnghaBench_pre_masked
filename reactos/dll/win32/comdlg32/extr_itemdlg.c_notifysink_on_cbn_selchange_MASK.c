
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; int hwnd; } ;
typedef TYPE_1__ customctrl ;
typedef int WPARAM ;
typedef int UINT ;
typedef int LRESULT ;
typedef int HWND ;
typedef int FileDialogImpl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char*,int *,TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int ) ;
 TYPE_1__* FUNC_4 (int *,int ) ;

__attribute__((used)) static LRESULT FUNC_5(FileDialogImpl *VAR_3, HWND VAR_4, WPARAM VAR_5)
{
    customctrl *VAR_6 = FUNC_4(VAR_3, FUNC_0(VAR_5));
    FUNC_2("%p, %p (%lx)\n", VAR_3, VAR_6, VAR_5);

    if(VAR_6)
    {
        UINT VAR_7 = FUNC_1(VAR_6->hwnd, VAR_0, 0, 0);
        UINT VAR_8 = FUNC_1(VAR_6->hwnd, VAR_1, VAR_7, 0);

        FUNC_3(VAR_3, VAR_6->id, VAR_8);
    }
    return VAR_2;
}
