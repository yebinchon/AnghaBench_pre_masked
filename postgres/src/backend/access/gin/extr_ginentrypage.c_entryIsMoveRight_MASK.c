
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entryCategory; int entryKey; int entryAttnum; int ginstate; } ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int IndexTuple ;
typedef int GinNullCategory ;
typedef TYPE_1__* GinBtree ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static bool
FUNC_5(GinBtree VAR_0, Page VAR_1)
{
 IndexTuple VAR_2;
 OffsetNumber VAR_3;
 Datum VAR_4;
 GinNullCategory VAR_5;

 if (FUNC_0(VAR_1))
  return 0;

 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = FUNC_3(VAR_0->ginstate, VAR_2);
 VAR_4 = FUNC_4(VAR_0->ginstate, VAR_2, &VAR_5);

 if (FUNC_2(VAR_0->ginstate,
        VAR_0->entryAttnum, VAR_0->entryKey, VAR_0->entryCategory,
        VAR_3, VAR_4, VAR_5) > 0)
  return 1;

 return 0;
}
