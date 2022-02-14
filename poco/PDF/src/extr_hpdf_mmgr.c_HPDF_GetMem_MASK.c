
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int buf_size; int alloc_cnt; int error; void* (* alloc_fn ) (int) ;TYPE_1__* mpool; } ;
struct TYPE_4__ {int size; int used_size; int * buf; struct TYPE_4__* next_node; } ;
typedef int HPDF_UINT ;
typedef int HPDF_MPool_Node_Rec ;
typedef TYPE_1__* HPDF_MPool_Node ;
typedef TYPE_2__* HPDF_MMgr ;
typedef int HPDF_BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;

void*
FUNC_4 (HPDF_MMgr VAR_3,
              HPDF_UINT VAR_4)
{
    void * VAR_5;

    if (VAR_3->mpool) {
        HPDF_MPool_Node VAR_6 = VAR_3->mpool;






        if (VAR_6->size - VAR_6->used_size >= VAR_4) {
            VAR_5 = (HPDF_BYTE*)VAR_6->buf + VAR_6->used_size;
            VAR_6->used_size += VAR_4;
            return VAR_5;
        } else {
            HPDF_UINT VAR_7 = (VAR_3->buf_size < VAR_4) ? VAR_4 :
                VAR_3->buf_size;

            VAR_6 = (HPDF_MPool_Node)VAR_3->alloc_fn (sizeof(HPDF_MPool_Node_Rec)
                    + VAR_7);
            FUNC_0(("+%p mmgr-new-node\n", VAR_6));

            if (!VAR_6) {
                FUNC_1 (VAR_3->error, VAR_1,
                        VAR_2);
                return ((void*)0);
            }

            VAR_6->size = VAR_7;
        }

        VAR_6->next_node = VAR_3->mpool;
        VAR_3->mpool = VAR_6;
        VAR_6->used_size = VAR_4;
        VAR_6->buf = (HPDF_BYTE*)VAR_6 + sizeof(HPDF_MPool_Node_Rec);
        VAR_5 = VAR_6->buf;
    } else {
        VAR_5 = VAR_3->alloc_fn (VAR_4);
        FUNC_0(("+%p mmgr-alloc_fn size=%u\n", VAR_5, VAR_4));

        if (VAR_5 == ((void*)0))
            FUNC_1 (VAR_3->error, VAR_1, VAR_2);
    }






    return VAR_5;
}
