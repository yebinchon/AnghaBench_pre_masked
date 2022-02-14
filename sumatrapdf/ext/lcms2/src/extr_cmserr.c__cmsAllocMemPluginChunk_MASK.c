
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cmsContext_struct {int DefaultMemoryManager; int ** chunks; int MemPool; } ;
typedef int _cmsMemPluginChunkType ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *,int) ;

void FUNC_2(struct _cmsContext_struct* VAR_1, const struct _cmsContext_struct* VAR_2)
{
    FUNC_0(VAR_1 != ((void*)0));

    if (VAR_2 != ((void*)0)) {


        VAR_1 ->chunks[VAR_0] = FUNC_1(VAR_1 ->MemPool, VAR_2 ->chunks[VAR_0], sizeof(_cmsMemPluginChunkType));
    }
    else {


        VAR_1 ->chunks[VAR_0] = &VAR_1 ->DefaultMemoryManager;
    }
}
