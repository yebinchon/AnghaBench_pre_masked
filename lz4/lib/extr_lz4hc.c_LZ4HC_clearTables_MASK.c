
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* chainTable; scalar_t__ hashTable; } ;
typedef TYPE_1__ LZ4HC_CCtx_internal ;


 int FUNC_0 (void*,int,int) ;

__attribute__((used)) static void FUNC_1 (LZ4HC_CCtx_internal* VAR_0)
{
    FUNC_0((void*)VAR_0->hashTable, 0, sizeof(VAR_0->hashTable));
    FUNC_0(VAR_0->chainTable, 0xFF, sizeof(VAR_0->chainTable));
}
