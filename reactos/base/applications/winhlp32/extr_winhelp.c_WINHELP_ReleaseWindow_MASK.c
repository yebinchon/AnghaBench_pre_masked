
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hMainWnd; int ref_count; } ;
typedef TYPE_1__ WINHELP_WINDOW ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_1__*,int ) ;

BOOL FUNC_2(WINHELP_WINDOW* VAR_2)
{
    FUNC_1("Release %p#%d--\n", VAR_2, VAR_2->ref_count);

    if (!--VAR_2->ref_count)
    {
        FUNC_0(VAR_2->hMainWnd);
        return VAR_0;
    }
    return VAR_1;
}
