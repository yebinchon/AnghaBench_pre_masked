
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ free_cnt; scalar_t__ alloc_cnt; int (* free_fn ) (TYPE_1__*) ;struct TYPE_6__* next_node; struct TYPE_6__* mpool; } ;
typedef TYPE_1__* HPDF_MPool_Node ;
typedef TYPE_1__* HPDF_MMgr ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4 (HPDF_MMgr VAR_0)
{
    HPDF_MPool_Node VAR_1;

    FUNC_1((" HPDF_MMgr_Free\n"));

    if (VAR_0 == ((void*)0))
        return;

    VAR_1 = VAR_0->mpool;


    while (VAR_1 != ((void*)0)) {
        HPDF_MPool_Node VAR_2 = VAR_1;
        VAR_1 = VAR_2->next_node;

        FUNC_1(("-%p mmgr-node-free\n", VAR_2));
        VAR_0->free_fn (VAR_2);





    }
    FUNC_1(("-%p mmgr-free\n", VAR_0));
    VAR_0->free_fn (VAR_0);
}
