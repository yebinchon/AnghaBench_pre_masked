
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_8__ {scalar_t__ queryCategory; int attnum; int extra_data; int strategy; int queryKey; } ;
struct TYPE_7__ {int * supportCollation; int * comparePartialFn; } ;
typedef int Page ;
typedef int OffsetNumber ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_1__ GinState ;
typedef TYPE_2__* GinScanEntry ;
typedef scalar_t__ GinNullCategory ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static bool
FUNC_8(GinState *VAR_1, Page VAR_2,
        OffsetNumber VAR_3, OffsetNumber VAR_4,
        GinScanEntry VAR_5,
        Datum *VAR_6, GinNullCategory *VAR_7,
        bool *VAR_8)
{
 IndexTuple VAR_9;
 int32 VAR_10;


 if (VAR_5->queryCategory != VAR_0)
  return 0;

 while (VAR_3 < VAR_4)
 {
  VAR_9 = (IndexTuple) FUNC_2(VAR_2, FUNC_3(VAR_2, VAR_3));

  if (FUNC_6(VAR_1, VAR_9) != VAR_5->attnum)
   return 0;

  if (VAR_8[VAR_3 - 1] == 0)
  {
   VAR_6[VAR_3 - 1] = FUNC_7(VAR_1, VAR_9,
             &VAR_7[VAR_3 - 1]);
   VAR_8[VAR_3 - 1] = 1;
  }


  if (VAR_7[VAR_3 - 1] != VAR_0)
   return 0;
  VAR_10 = FUNC_0(FUNC_1(&VAR_1->comparePartialFn[VAR_5->attnum - 1],
             VAR_1->supportCollation[VAR_5->attnum - 1],
             VAR_5->queryKey,
             VAR_6[VAR_3 - 1],
             FUNC_5(VAR_5->strategy),
             FUNC_4(VAR_5->extra_data)));
  if (VAR_10 == 0)
   return 1;
  else if (VAR_10 > 0)
   return 0;

  VAR_3++;
 }

 return 0;
}
