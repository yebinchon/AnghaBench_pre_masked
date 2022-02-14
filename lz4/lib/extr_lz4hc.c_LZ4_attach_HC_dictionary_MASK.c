
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* dictCtx; } ;
struct TYPE_6__ {TYPE_1__ internal_donotuse; } ;
typedef TYPE_2__ LZ4_streamHC_t ;



void FUNC_0(LZ4_streamHC_t *VAR_0, const LZ4_streamHC_t *VAR_1) {
    VAR_0->internal_donotuse.dictCtx = VAR_1 != ((void*)0) ? &(VAR_1->internal_donotuse) : ((void*)0);
}
