
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ref_count; } ;
typedef TYPE_1__ WINHELP_WINDOW ;


 int FUNC_0 (char*,TYPE_1__*,int ) ;

WINHELP_WINDOW* FUNC_1(WINHELP_WINDOW* VAR_0)
{
    FUNC_0("Grab %p#%d++\n", VAR_0, VAR_0->ref_count);
    VAR_0->ref_count++;
    return VAR_0;
}
