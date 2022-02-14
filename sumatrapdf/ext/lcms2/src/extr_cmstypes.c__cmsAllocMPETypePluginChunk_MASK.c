
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _cmsContext_struct {int MemPool; int * chunks; } ;
struct TYPE_3__ {int * member_0; } ;
typedef TYPE_1__ _cmsTagTypePluginChunkType ;


 int FUNC_0 (struct _cmsContext_struct*,struct _cmsContext_struct const*,size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*,int) ;

void FUNC_2(struct _cmsContext_struct* VAR_1,
                               const struct _cmsContext_struct* VAR_2)
{
    if (VAR_2 != ((void*)0)) {


        FUNC_0(VAR_1, VAR_2, VAR_0);
    }
    else {
        static _cmsTagTypePluginChunkType VAR_3 = { ((void*)0) };
        VAR_1 ->chunks[VAR_0] = FUNC_1(VAR_1 ->MemPool, &VAR_3, sizeof(_cmsTagTypePluginChunkType));
    }

}
