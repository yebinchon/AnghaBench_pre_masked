
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bs_bdesc; int bs_dtuple; int * bs_rmAccess; scalar_t__ bs_currRangeStart; int bs_pagesPerRange; int bs_currentInsertBuf; scalar_t__ bs_numtuples; int bs_irel; } ;
typedef int Relation ;
typedef int BrinRevmap ;
typedef TYPE_1__ BrinBuildState ;
typedef int BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static BrinBuildState *
FUNC_4(Relation VAR_1, BrinRevmap *VAR_2,
         BlockNumber VAR_3)
{
 BrinBuildState *VAR_4;

 VAR_4 = FUNC_3(sizeof(BrinBuildState));

 VAR_4->bs_irel = VAR_1;
 VAR_4->bs_numtuples = 0;
 VAR_4->bs_currentInsertBuf = VAR_0;
 VAR_4->bs_pagesPerRange = VAR_3;
 VAR_4->bs_currRangeStart = 0;
 VAR_4->bs_rmAccess = VAR_2;
 VAR_4->bs_bdesc = FUNC_0(VAR_1);
 VAR_4->bs_dtuple = FUNC_2(VAR_4->bs_bdesc);

 FUNC_1(VAR_4->bs_dtuple, VAR_4->bs_bdesc);

 return VAR_4;
}
