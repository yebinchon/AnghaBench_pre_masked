
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ (* getLeftMostChild ) (TYPE_2__*,int ) ;int entryCategory; int entryKey; int entryAttnum; int ginstate; scalar_t__ fullScan; } ;
struct TYPE_6__ {int off; int predictNumber; int buffer; } ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int * IndexTuple ;
typedef int GinNullCategory ;
typedef TYPE_1__ GinBtreeStack ;
typedef TYPE_2__* GinBtree ;
typedef int Datum ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *,int *) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int ) ;

__attribute__((used)) static BlockNumber
FUNC_13(GinBtree VAR_2, GinBtreeStack *VAR_3)
{
 OffsetNumber VAR_4,
    VAR_5,
    VAR_6;
 IndexTuple VAR_7 = ((void*)0);
 int VAR_8;
 Page VAR_9 = FUNC_1(VAR_3->buffer);

 FUNC_0(!FUNC_4(VAR_9));
 FUNC_0(!FUNC_3(VAR_9));

 if (VAR_2->fullScan)
 {
  VAR_3->off = VAR_0;
  VAR_3->predictNumber *= FUNC_8(VAR_9);
  return VAR_2->getLeftMostChild(VAR_2, VAR_9);
 }

 VAR_4 = VAR_0;
 VAR_6 = VAR_5 = FUNC_8(VAR_9);
 FUNC_0(VAR_5 >= VAR_4);

 VAR_5++;

 while (VAR_5 > VAR_4)
 {
  OffsetNumber VAR_10 = VAR_4 + ((VAR_5 - VAR_4) / 2);

  if (VAR_10 == VAR_6 && FUNC_5(VAR_9))
  {

   VAR_8 = -1;
  }
  else
  {
   OffsetNumber VAR_11;
   Datum VAR_12;
   GinNullCategory VAR_13;

   VAR_7 = (IndexTuple) FUNC_6(VAR_9, FUNC_7(VAR_9, VAR_10));
   VAR_11 = FUNC_10(VAR_2->ginstate, VAR_7);
   VAR_12 = FUNC_11(VAR_2->ginstate, VAR_7, &VAR_13);
   VAR_8 = FUNC_9(VAR_2->ginstate,
            VAR_2->entryAttnum,
            VAR_2->entryKey,
            VAR_2->entryCategory,
            VAR_11, VAR_12, VAR_13);
  }

  if (VAR_8 == 0)
  {
   VAR_3->off = VAR_10;
   FUNC_0(FUNC_2(VAR_7) != VAR_1);
   return FUNC_2(VAR_7);
  }
  else if (VAR_8 > 0)
   VAR_4 = VAR_10 + 1;
  else
   VAR_5 = VAR_10;
 }

 FUNC_0(VAR_5 >= VAR_0 && VAR_5 <= VAR_6);

 VAR_3->off = VAR_5;
 VAR_7 = (IndexTuple) FUNC_6(VAR_9, FUNC_7(VAR_9, VAR_5));
 FUNC_0(FUNC_2(VAR_7) != VAR_1);
 return FUNC_2(VAR_7);
}
