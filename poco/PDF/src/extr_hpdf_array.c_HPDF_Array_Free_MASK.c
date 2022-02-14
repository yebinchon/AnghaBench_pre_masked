
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ obj_class; } ;
struct TYPE_7__ {int mmgr; TYPE_1__ header; int list; } ;
typedef TYPE_2__* HPDF_Array ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

void
FUNC_4 (HPDF_Array VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_3((" HPDF_Array_Free\n"));

    FUNC_0 (VAR_0);

    FUNC_2 (VAR_0->list);

    VAR_0->header.obj_class = 0;

    FUNC_1 (VAR_0->mmgr, VAR_0);
}
