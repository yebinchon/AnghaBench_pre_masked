
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _cmsContext_struct {int DefaultMemoryManager; void** chunks; } ;
struct TYPE_3__ {int * ReallocPtr; int * FreePtr; int * MallocPtr; } ;
typedef TYPE_1__ cmsPluginMemHandler ;
typedef int cmsPluginBase ;
typedef int * cmsContext ;
typedef int cmsBool ;
typedef int _cmsMemPluginChunkType ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,size_t) ;
 int FUNC_1 (TYPE_1__*,int *) ;

cmsBool FUNC_2(cmsContext VAR_3, cmsPluginBase *VAR_4)
{
    cmsPluginMemHandler* VAR_5 = (cmsPluginMemHandler*) VAR_4;
    _cmsMemPluginChunkType* VAR_6;




    if (VAR_4 == ((void*)0)) {

       struct _cmsContext_struct* VAR_7 = ( struct _cmsContext_struct*) VAR_3;


        if (VAR_3 != ((void*)0)) {
            VAR_7->chunks[VAR_1] = (void*) &VAR_7->DefaultMemoryManager;
        }
        return VAR_2;
    }


    if (VAR_5 -> MallocPtr == ((void*)0) ||
        VAR_5 -> FreePtr == ((void*)0) ||
        VAR_5 -> ReallocPtr == ((void*)0)) return VAR_0;


    VAR_6 = (_cmsMemPluginChunkType*) FUNC_0(VAR_3, VAR_1);
    if (VAR_6 == ((void*)0))
        return VAR_0;

    FUNC_1(VAR_5, VAR_6);
    return VAR_2;
}
