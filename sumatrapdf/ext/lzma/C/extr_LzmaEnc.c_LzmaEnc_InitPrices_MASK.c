
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tableSize; } ;
struct TYPE_6__ {int pb; int ProbPrices; TYPE_3__ repLenEnc; TYPE_3__ lenEnc; scalar_t__ numFastBytes; int fastMode; } ;
typedef TYPE_1__ CLzmaEnc ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_3__*,int,int ) ;

void FUNC_3(CLzmaEnc *VAR_1)
{
  if (!VAR_1->fastMode)
  {
    FUNC_1(VAR_1);
    FUNC_0(VAR_1);
  }

  VAR_1->lenEnc.tableSize =
  VAR_1->repLenEnc.tableSize =
      VAR_1->numFastBytes + 1 - VAR_0;
  FUNC_2(&VAR_1->lenEnc, 1 << VAR_1->pb, VAR_1->ProbPrices);
  FUNC_2(&VAR_1->repLenEnc, 1 << VAR_1->pb, VAR_1->ProbPrices);
}
