
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* chainTable; int nextToUpdate; int dictLimit; int lowLimit; int const* dictBase; int const* end; int const* base; scalar_t__ hashTable; } ;
typedef TYPE_1__ LZ4HC_CCtx_internal ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int) ;

__attribute__((used)) static void FUNC_1(LZ4HC_CCtx_internal *VAR_1, const BYTE *VAR_2)
{
 FUNC_0((void *)VAR_1->hashTable, 0, sizeof(VAR_1->hashTable));
 FUNC_0(VAR_1->chainTable, 0xFF, sizeof(VAR_1->chainTable));
 VAR_1->nextToUpdate = 64 * VAR_0;
 VAR_1->base = VAR_2 - 64 * VAR_0;
 VAR_1->end = VAR_2;
 VAR_1->dictBase = VAR_2 - 64 * VAR_0;
 VAR_1->dictLimit = 64 * VAR_0;
 VAR_1->lowLimit = 64 * VAR_0;
}
