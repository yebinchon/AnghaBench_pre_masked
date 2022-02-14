
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* TableScanDesc ;
struct TYPE_5__ {int rs_ntuples; scalar_t__* rs_vistuples; } ;
struct TYPE_4__ {int rs_flags; int rs_snapshot; } ;
typedef scalar_t__ OffsetNumber ;
typedef int HeapTuple ;
typedef TYPE_2__* HeapScanDesc ;
typedef int Buffer ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_1(TableScanDesc VAR_1, Buffer VAR_2,
        HeapTuple VAR_3,
        OffsetNumber VAR_4)
{
 HeapScanDesc VAR_5 = (HeapScanDesc) VAR_1;

 if (VAR_1->rs_flags & VAR_0)
 {
  int VAR_6 = 0,
     VAR_7 = VAR_5->rs_ntuples - 1;

  while (VAR_6 <= VAR_7)
  {
   int VAR_8 = (VAR_6 + VAR_7) / 2;
   OffsetNumber VAR_9 = VAR_5->rs_vistuples[VAR_8];

   if (VAR_4 == VAR_9)
    return 1;
   else if (VAR_4 < VAR_9)
    VAR_7 = VAR_8 - 1;
   else
    VAR_6 = VAR_8 + 1;
  }

  return 0;
 }
 else
 {

  return FUNC_0(VAR_3, VAR_1->rs_snapshot,
           VAR_2);
 }
}
