
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {void* buf_size; scalar_t__ alloc_cnt; TYPE_1__* mpool; int (* free_fn ) (TYPE_2__*) ;scalar_t__ (* alloc_fn ) (void*) ;scalar_t__ free_cnt; int error; } ;
struct TYPE_8__ {int * next_node; scalar_t__ used_size; void* size; int * buf; } ;
typedef void* HPDF_UINT ;
typedef int HPDF_MPool_Node_Rec ;
typedef TYPE_1__* HPDF_MPool_Node ;
typedef int HPDF_MMgr_Rec ;
typedef TYPE_2__* HPDF_MMgr ;
typedef int (* HPDF_Free_Func ) (TYPE_2__*) ;
typedef int HPDF_Error ;
typedef int HPDF_BYTE ;
typedef scalar_t__ (* HPDF_Alloc_Func ) (int) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (TYPE_2__*) ;

HPDF_MMgr
FUNC_6 (HPDF_Error VAR_2,
                HPDF_UINT VAR_3,
                HPDF_Alloc_Func VAR_4,
                HPDF_Free_Func VAR_5)
{
    HPDF_MMgr VAR_6;

    FUNC_0((" HPDF_MMgr_New\n"));

    if (VAR_4)
        VAR_6 = (HPDF_MMgr)VAR_4 (sizeof(HPDF_MMgr_Rec));
    else
        VAR_6 = (HPDF_MMgr)FUNC_3 (sizeof(HPDF_MMgr_Rec));

    FUNC_0(("+%p mmgr-new\n", VAR_6));

    if (VAR_6 != ((void*)0)) {

        VAR_6->error = VAR_2;
        if (VAR_4 && VAR_5) {
            VAR_6->alloc_fn = VAR_4;
            VAR_6->free_fn = VAR_5;
        } else {
            VAR_6->alloc_fn = FUNC_3;
            VAR_6->free_fn = FUNC_2;
        }






        if (!VAR_3)
            VAR_6->mpool = ((void*)0);
        else {
            HPDF_MPool_Node VAR_7;

            VAR_7 = (HPDF_MPool_Node)VAR_6->alloc_fn (sizeof(HPDF_MPool_Node_Rec) +
                    VAR_3);

            FUNC_0(("+%p mmgr-node-new\n", VAR_7));

            if (VAR_7 == ((void*)0)) {
                FUNC_1 (VAR_2, VAR_0, VAR_1);

                VAR_6->free_fn(VAR_6);
                VAR_6 = ((void*)0);
            } else {
                VAR_6->mpool = VAR_7;
                VAR_7->buf = (HPDF_BYTE *)VAR_7 + sizeof(HPDF_MPool_Node_Rec);
                VAR_7->size = VAR_3;
                VAR_7->used_size = 0;
                VAR_7->next_node = ((void*)0);
            }






        }

        if (VAR_6) {
            VAR_6->buf_size = VAR_3;
        }
    } else
        FUNC_1(VAR_2, VAR_0, VAR_1);

    return VAR_6;
}
