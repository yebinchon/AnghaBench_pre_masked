
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t last_block; int offset; scalar_t__* blocks; } ;
typedef TYPE_1__ heap_pool_t ;
typedef scalar_t__ DWORD ;
typedef void BYTE ;


 scalar_t__ FUNC_0 (size_t) ;
 void* FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (void*,void*,scalar_t__) ;

void *FUNC_3(heap_pool_t *VAR_0, void *VAR_1, DWORD VAR_2, DWORD VAR_3)
{
    void *VAR_4;

    if(VAR_1 == (BYTE*)VAR_0->blocks[VAR_0->last_block] + VAR_0->offset-VAR_2
            && VAR_0->offset+VAR_3 < FUNC_0(VAR_0->last_block)) {
        VAR_0->offset += VAR_3;
        return VAR_1;
    }

    VAR_4 = FUNC_1(VAR_0, VAR_2+VAR_3);
    if(VAR_4)
        FUNC_2(VAR_4, VAR_1, VAR_2);
    return VAR_4;
}
