
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int entryCategory; int entryKey; int entryAttnum; int ginstate; scalar_t__ fullScan; } ;
struct TYPE_5__ {void* off; int buffer; } ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef scalar_t__ IndexTuple ;
typedef int GinNullCategory ;
typedef TYPE_1__ GinBtreeStack ;
typedef TYPE_2__* GinBtree ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__,int *) ;

__attribute__((used)) static bool
FUNC_10(GinBtree VAR_1, GinBtreeStack *VAR_2)
{
 Page VAR_3 = FUNC_1(VAR_2->buffer);
 OffsetNumber VAR_4,
    VAR_5;

 FUNC_0(FUNC_3(VAR_3));
 FUNC_0(!FUNC_2(VAR_3));

 if (VAR_1->fullScan)
 {
  VAR_2->off = VAR_0;
  return 1;
 }

 VAR_4 = VAR_0;
 VAR_5 = FUNC_6(VAR_3);

 if (VAR_5 < VAR_4)
 {
  VAR_2->off = VAR_0;
  return 0;
 }

 VAR_5++;

 while (VAR_5 > VAR_4)
 {
  OffsetNumber VAR_6 = VAR_4 + ((VAR_5 - VAR_4) / 2);
  IndexTuple VAR_7;
  OffsetNumber VAR_8;
  Datum VAR_9;
  GinNullCategory VAR_10;
  int VAR_11;

  VAR_7 = (IndexTuple) FUNC_4(VAR_3, FUNC_5(VAR_3, VAR_6));
  VAR_8 = FUNC_8(VAR_1->ginstate, VAR_7);
  VAR_9 = FUNC_9(VAR_1->ginstate, VAR_7, &VAR_10);
  VAR_11 = FUNC_7(VAR_1->ginstate,
           VAR_1->entryAttnum,
           VAR_1->entryKey,
           VAR_1->entryCategory,
           VAR_8, VAR_9, VAR_10);
  if (VAR_11 == 0)
  {
   VAR_2->off = VAR_6;
   return 1;
  }
  else if (VAR_11 > 0)
   VAR_4 = VAR_6 + 1;
  else
   VAR_5 = VAR_6;
 }

 VAR_2->off = VAR_5;
 return 0;
}
