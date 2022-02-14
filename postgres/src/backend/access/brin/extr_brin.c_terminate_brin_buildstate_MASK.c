
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* bs_dtuple; int bs_bdesc; int bs_irel; int bs_currentInsertBuf; } ;
typedef int Size ;
typedef int Page ;
typedef TYPE_1__ BrinBuildState ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(BrinBuildState *VAR_0)
{




 if (!FUNC_2(VAR_0->bs_currentInsertBuf))
 {
  Page VAR_1;
  Size VAR_2;
  BlockNumber VAR_3;

  VAR_1 = FUNC_1(VAR_0->bs_currentInsertBuf);
  VAR_2 = FUNC_4(VAR_1);
  VAR_3 = FUNC_0(VAR_0->bs_currentInsertBuf);
  FUNC_6(VAR_0->bs_currentInsertBuf);
  FUNC_5(VAR_0->bs_irel, VAR_3, VAR_2);
  FUNC_3(VAR_0->bs_irel, VAR_3, VAR_3 + 1);
 }

 FUNC_7(VAR_0->bs_bdesc);
 FUNC_8(VAR_0->bs_dtuple);
 FUNC_8(VAR_0);
}
