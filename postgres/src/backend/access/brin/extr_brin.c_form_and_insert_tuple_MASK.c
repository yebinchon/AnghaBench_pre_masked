
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bs_numtuples; int bs_currRangeStart; int bs_currentInsertBuf; int bs_rmAccess; int bs_pagesPerRange; int bs_irel; int bs_dtuple; int bs_bdesc; } ;
typedef int Size ;
typedef int BrinTuple ;
typedef TYPE_1__ BrinBuildState ;


 int FUNC_0 (int ,int ,int ,int *,int ,int *,int ) ;
 int * FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(BrinBuildState *VAR_0)
{
 BrinTuple *VAR_1;
 Size VAR_2;

 VAR_1 = FUNC_1(VAR_0->bs_bdesc, VAR_0->bs_currRangeStart,
        VAR_0->bs_dtuple, &VAR_2);
 FUNC_0(VAR_0->bs_irel, VAR_0->bs_pagesPerRange, VAR_0->bs_rmAccess,
      &VAR_0->bs_currentInsertBuf, VAR_0->bs_currRangeStart,
      VAR_1, VAR_2);
 VAR_0->bs_numtuples++;

 FUNC_2(VAR_1);
}
