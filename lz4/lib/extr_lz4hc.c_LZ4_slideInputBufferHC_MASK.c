
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uptrval ;
struct TYPE_4__ {int lowLimit; int compressionLevel; int * base; } ;
struct TYPE_5__ {TYPE_1__ internal_donotuse; } ;
typedef TYPE_2__ LZ4_streamHC_t ;
typedef int BYTE ;


 int FUNC_0 (TYPE_2__*,int ) ;

char* FUNC_1(void* VAR_0)
{
    LZ4_streamHC_t *VAR_1 = (LZ4_streamHC_t*)VAR_0;
    const BYTE *VAR_2 = VAR_1->internal_donotuse.base + VAR_1->internal_donotuse.lowLimit;
    FUNC_0(VAR_1, VAR_1->internal_donotuse.compressionLevel);

    return (char *)(uptrval)VAR_2;
}
