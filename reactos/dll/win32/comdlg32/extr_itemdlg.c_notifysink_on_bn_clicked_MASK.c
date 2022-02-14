
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int id; int hwnd; } ;
typedef TYPE_1__ customctrl ;
typedef int WPARAM ;
typedef int LRESULT ;
typedef int HWND ;
typedef int FileDialogImpl ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char*,int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int) ;
 TYPE_1__* FUNC_5 (int *,int ) ;

__attribute__((used)) static LRESULT FUNC_6(FileDialogImpl *VAR_4, HWND VAR_5, WPARAM VAR_6)
{
    customctrl *VAR_7 = FUNC_5(VAR_4, FUNC_0(VAR_6));

    FUNC_2("%p, %lx\n", VAR_4, VAR_6);

    if(VAR_7)
    {
        if(VAR_7->type == VAR_2)
        {
            BOOL VAR_8 = (FUNC_1(VAR_7->hwnd, VAR_0, 0, 0) == VAR_1);
            FUNC_4(VAR_4, VAR_7->id, VAR_8);
        }
        else
            FUNC_3(VAR_4, VAR_7->id);
    }

    return VAR_3;
}
