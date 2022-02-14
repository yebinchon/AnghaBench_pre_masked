
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpCreateParams; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef int FileDialogImpl ;
typedef TYPE_1__ CREATESTRUCTW ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,int *) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT FUNC_2(HWND VAR_2, CREATESTRUCTW *VAR_3)
{
    FileDialogImpl *VAR_4 = VAR_3->lpCreateParams;
    FUNC_1("%p\n", VAR_4);

    FUNC_0(VAR_2, VAR_0, (LPARAM)VAR_4);
    return VAR_1;
}
