
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ptrdiff_t ;
struct TYPE_6__ {scalar_t__ dirty; scalar_t__ favorDecSpeed; int * dictCtx; int * base; int const* end; } ;
struct TYPE_7__ {TYPE_1__ internal_donotuse; } ;
typedef TYPE_2__ LZ4_streamHC_t ;
typedef int LZ4HC_CCtx_internal ;
typedef int BYTE ;


 int FUNC_0 (int,char*,TYPE_2__* const,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__* const,int ) ;
 int FUNC_3 () ;

LZ4_streamHC_t* FUNC_4 (void* VAR_2, size_t VAR_3)
{
    LZ4_streamHC_t* const VAR_4 = (LZ4_streamHC_t*)VAR_2;
    if (VAR_2 == ((void*)0)) return ((void*)0);
    if (VAR_3 < sizeof(LZ4_streamHC_t)) return ((void*)0);



    if (((size_t)VAR_2) & (FUNC_3() - 1)) return ((void*)0);


    FUNC_1(sizeof(LZ4HC_CCtx_internal) <= VAR_1);
    FUNC_0(4, "LZ4_initStreamHC(%p, %u)", VAR_4, (unsigned)VAR_3);

    VAR_4->internal_donotuse.end = (const BYTE *)(ptrdiff_t)-1;
    VAR_4->internal_donotuse.base = ((void*)0);
    VAR_4->internal_donotuse.dictCtx = ((void*)0);
    VAR_4->internal_donotuse.favorDecSpeed = 0;
    VAR_4->internal_donotuse.dirty = 0;
    FUNC_2(VAR_4, VAR_0);
    return VAR_4;
}
