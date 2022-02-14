
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t inBuffSize; size_t outBuffSize; int ddictLocal; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 size_t FUNC_0 (int ) ;

size_t FUNC_1 (const ZSTD_DCtx* VAR_0)
{
    if (VAR_0==((void*)0)) return 0;
    return sizeof(*VAR_0)
           + FUNC_0(VAR_0->ddictLocal)
           + VAR_0->inBuffSize + VAR_0->outBuffSize;
}
