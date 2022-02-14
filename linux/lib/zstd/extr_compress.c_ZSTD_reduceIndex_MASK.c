
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hashLog; scalar_t__ strategy; int chainLog; } ;
struct TYPE_6__ {TYPE_1__ cParams; } ;
struct TYPE_7__ {int hashLog3; int hashTable3; int chainTable; TYPE_2__ params; int hashTable; } ;
typedef TYPE_3__ ZSTD_CCtx ;
typedef int U32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int const,int const) ;

__attribute__((used)) static void FUNC_1(ZSTD_CCtx *VAR_1, const U32 VAR_2)
{
 {
  U32 const VAR_3 = 1 << VAR_1->params.cParams.hashLog;
  FUNC_0(VAR_1->hashTable, VAR_3, VAR_2);
 }

 {
  U32 const VAR_4 = (VAR_1->params.cParams.strategy == VAR_0) ? 0 : (1 << VAR_1->params.cParams.chainLog);
  FUNC_0(VAR_1->chainTable, VAR_4, VAR_2);
 }

 {
  U32 const VAR_5 = (VAR_1->hashLog3) ? 1 << VAR_1->hashLog3 : 0;
  FUNC_0(VAR_1->hashTable3, VAR_5, VAR_2);
 }
}
