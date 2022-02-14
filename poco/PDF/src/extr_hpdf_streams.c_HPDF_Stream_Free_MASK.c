
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mmgr; scalar_t__ sig_bytes; int (* free_fn ) (TYPE_1__*) ;} ;
typedef TYPE_1__* HPDF_Stream ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2 (HPDF_Stream VAR_0)
{
    if (!VAR_0)
        return;

    if (VAR_0->free_fn)
        VAR_0->free_fn(VAR_0);

    VAR_0->sig_bytes = 0;

    FUNC_0(VAR_0->mmgr, VAR_0);
}
