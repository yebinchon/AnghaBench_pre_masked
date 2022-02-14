
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int iItem; scalar_t__ lParam; int mask; scalar_t__ iSubItem; } ;
struct TYPE_4__ {int * name; } ;
typedef TYPE_1__* PLINE_INFO ;
typedef TYPE_2__ LVITEMW ;
typedef int * LPCWSTR ;
typedef int HWND ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int,int ) ;

LPCWSTR FUNC_2(HWND VAR_3, int VAR_4)
{
    int VAR_5;
    LVITEMW VAR_6;
    PLINE_INFO VAR_7;





    VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_2);
    if (VAR_5 == -1) return ((void*)0);




    VAR_6.iItem = VAR_5;
    VAR_6.iSubItem = 0;
    VAR_6.mask = VAR_1;
    if (FUNC_0(VAR_3, &VAR_6) == VAR_0)
        return ((void*)0);

    VAR_7 = (PLINE_INFO)VAR_6.lParam;
    if (VAR_7 == ((void*)0))
        return ((void*)0);

    return VAR_7->name;
}
