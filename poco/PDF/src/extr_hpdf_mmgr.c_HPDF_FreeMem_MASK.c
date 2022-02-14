
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int free_cnt; int (* free_fn ) (void*) ;int mpool; } ;
typedef TYPE_1__* HPDF_MMgr ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;

void
FUNC_2 (HPDF_MMgr VAR_0,
               void *VAR_1)
{
    if (!VAR_1)
        return;

    if (!VAR_0->mpool) {
        FUNC_0(("-%p mmgr-free-mem\n", VAR_1));
        VAR_0->free_fn(VAR_1);




    }

    return;
}
