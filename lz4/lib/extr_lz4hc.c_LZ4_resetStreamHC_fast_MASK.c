
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uptrval ;
struct TYPE_7__ {int * dictCtx; int * base; int end; scalar_t__ dirty; } ;
struct TYPE_8__ {TYPE_1__ internal_donotuse; } ;
typedef TYPE_2__ LZ4_streamHC_t ;


 int FUNC_0 (int,char*,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;

void FUNC_3 (LZ4_streamHC_t* VAR_0, int VAR_1)
{
    FUNC_0(4, "LZ4_resetStreamHC_fast(%p, %d)", VAR_0, VAR_1);
    if (VAR_0->internal_donotuse.dirty) {
        FUNC_1(VAR_0, sizeof(*VAR_0));
    } else {

        VAR_0->internal_donotuse.end -= (uptrval)VAR_0->internal_donotuse.base;
        VAR_0->internal_donotuse.base = ((void*)0);
        VAR_0->internal_donotuse.dictCtx = ((void*)0);
    }
    FUNC_2(VAR_0, VAR_1);
}
