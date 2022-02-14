
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_2__ {int code; } ;
typedef TYPE_1__ NMHDR ;
typedef int LRESULT ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef int FileDialogImpl ;


 int VAR_0 ;

 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static LRESULT FUNC_1(FileDialogImpl *VAR_1, HWND VAR_2, WPARAM VAR_3, LPARAM VAR_4)
{
    NMHDR *VAR_5 = (NMHDR*)VAR_4;

    switch(VAR_5->code)
    {
    case 128: return FUNC_0(VAR_1, VAR_4);
    }

    return VAR_0;
}
