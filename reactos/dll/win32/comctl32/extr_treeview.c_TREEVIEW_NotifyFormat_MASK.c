
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int bNtfUnicode; scalar_t__ hwnd; } ;
typedef TYPE_1__ TREEVIEW_INFO ;
typedef scalar_t__ INT ;
typedef int HWND ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int VAR_4 ;

__attribute__((used)) static INT FUNC_2 (TREEVIEW_INFO *VAR_5, HWND VAR_6, UINT VAR_7)
{
    INT VAR_8;

    FUNC_1("(hwndFrom=%p, nCommand=%d)\n", VAR_6, VAR_7);

    if (VAR_7 != VAR_3) return 0;

    VAR_8 = FUNC_0(VAR_6, VAR_4, (WPARAM)VAR_5->hwnd, VAR_2);
    FUNC_1("format=%d\n", VAR_8);


    if (VAR_8 != VAR_0 && VAR_8 != VAR_1)
        VAR_8 = VAR_0;

    VAR_5->bNtfUnicode = (VAR_8 == VAR_1);

    return VAR_8;
}
