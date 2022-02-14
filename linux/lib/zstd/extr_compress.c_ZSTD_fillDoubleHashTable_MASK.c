
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hashLog; int chainLog; } ;
struct TYPE_6__ {TYPE_1__ cParams; } ;
struct TYPE_7__ {int* hashTable; int* chainTable; int nextToUpdate; int * base; TYPE_2__ params; } ;
typedef TYPE_3__ ZSTD_CCtx ;
typedef int U32 ;
typedef int BYTE ;


 int const* VAR_0 ;
 size_t FUNC_0 (int const*,int const,int const) ;

__attribute__((used)) static void FUNC_1(ZSTD_CCtx *VAR_1, const void *VAR_2, const U32 VAR_3)
{
 U32 *const VAR_4 = VAR_1->hashTable;
 U32 const VAR_5 = VAR_1->params.cParams.hashLog;
 U32 *const VAR_6 = VAR_1->chainTable;
 U32 const VAR_7 = VAR_1->params.cParams.chainLog;
 const BYTE *const VAR_8 = VAR_1->base;
 const BYTE *VAR_9 = VAR_8 + VAR_1->nextToUpdate;
 const BYTE *const VAR_10 = ((const BYTE *)VAR_2) - VAR_0;
 const size_t VAR_11 = 3;

 while (VAR_9 <= VAR_10) {
  VAR_6[FUNC_0(VAR_9, VAR_7, VAR_3)] = (U32)(VAR_9 - VAR_8);
  VAR_4[FUNC_0(VAR_9, VAR_5, 8)] = (U32)(VAR_9 - VAR_8);
  VAR_9 += VAR_11;
 }
}
