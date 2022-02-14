
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void const* previousDstEnd; void const* dictEnd; char const* virtualStart; void const* prefixStart; } ;
typedef TYPE_1__ ZSTD_DCtx ;



__attribute__((used)) static void FUNC_0(ZSTD_DCtx* VAR_0, const void* VAR_1)
{
    if (VAR_1 != VAR_0->previousDstEnd) {
        VAR_0->dictEnd = VAR_0->previousDstEnd;
        VAR_0->virtualStart = (const char*)VAR_1 - ((const char*)(VAR_0->previousDstEnd) - (const char*)(VAR_0->prefixStart));
        VAR_0->prefixStart = VAR_1;
        VAR_0->previousDstEnd = VAR_1;
    }
}
