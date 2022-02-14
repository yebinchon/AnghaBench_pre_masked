
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _cmsContext_struct {int MemPool; void** chunks; } ;
struct TYPE_2__ {int * member_0; } ;
typedef TYPE_1__ _cmsInterpPluginChunkType ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,void*,int) ;

void FUNC_2(struct _cmsContext_struct* VAR_1, const struct _cmsContext_struct* VAR_2)
{
    void* VAR_3;

    FUNC_0(VAR_1 != ((void*)0));

    if (VAR_2 != ((void*)0)) {
        VAR_3 = VAR_2 ->chunks[VAR_0];
    }
    else {
        static _cmsInterpPluginChunkType VAR_4 = { ((void*)0) };

        VAR_3 = &VAR_4;
    }

    FUNC_0(VAR_3 != ((void*)0));
    VAR_1 ->chunks[VAR_0] = FUNC_1(VAR_1 ->MemPool, VAR_3, sizeof(_cmsInterpPluginChunkType));
}
