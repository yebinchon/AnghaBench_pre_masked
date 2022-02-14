
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hierarchy_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ lParam; int * hItem; int mask; } ;
typedef TYPE_1__ TVITEMW ;
typedef int LPARAM ;
typedef int HWND ;
typedef int * HTREEITEM ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct hierarchy_data *FUNC_1(HWND VAR_4,
 HTREEITEM VAR_5)
{
    struct hierarchy_data *VAR_6 = ((void*)0);
    HTREEITEM VAR_7 = ((void*)0);

    do {
        HTREEITEM VAR_8 = (HTREEITEM)FUNC_0(VAR_4, VAR_3,
         VAR_0, (LPARAM)VAR_5);

        if (!VAR_8)
            VAR_7 = VAR_5;
        VAR_5 = VAR_8;
    } while (VAR_5);
    if (VAR_7)
    {
        TVITEMW VAR_9;

        VAR_9.mask = VAR_1;
        VAR_9.hItem = VAR_7;
        FUNC_0(VAR_4, VAR_2, 0, (LPARAM)&VAR_9);
        VAR_6 = (struct hierarchy_data *)VAR_9.lParam;
    }
    return VAR_6;
}
