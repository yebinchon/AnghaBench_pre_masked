
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int iItem; scalar_t__ lParam; int mask; } ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__* PLINE_INFO ;
typedef TYPE_2__ LVITEMW ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;

BOOL FUNC_2(HWND VAR_2, int VAR_3)
{
    PLINE_INFO VAR_4;
    LVITEMW VAR_5;

    VAR_5.mask = VAR_1;
    VAR_5.iItem = VAR_3;
    if(FUNC_0(VAR_2, &VAR_5))
    {
        VAR_4 = (PLINE_INFO)VAR_5.lParam;
        return VAR_4 && (!VAR_4->name || !FUNC_1(VAR_4->name, L""));
    }
    return VAR_0;
}
