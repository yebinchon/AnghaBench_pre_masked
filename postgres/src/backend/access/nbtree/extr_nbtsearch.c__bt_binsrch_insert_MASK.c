
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_6__ {int bounds_valid; scalar_t__ low; scalar_t__ stricthigh; int buf; TYPE_1__* itup_key; } ;
struct TYPE_5__ {int nextkey; } ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef TYPE_1__* BTScanInsert ;
typedef scalar_t__ BTPageOpaque ;
typedef TYPE_2__* BTInsertState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_1__*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;

OffsetNumber
FUNC_8(Relation VAR_1, BTInsertState VAR_2)
{
 BTScanInsert VAR_3 = VAR_2->itup_key;
 Page VAR_4;
 BTPageOpaque VAR_5;
 OffsetNumber VAR_6,
    VAR_7,
    VAR_8;
 int32 VAR_9,
    VAR_10;

 VAR_4 = FUNC_1(VAR_2->buf);
 VAR_5 = (BTPageOpaque) FUNC_5(VAR_4);

 FUNC_0(FUNC_3(VAR_5));
 FUNC_0(!VAR_3->nextkey);

 if (!VAR_2->bounds_valid)
 {

  VAR_6 = FUNC_2(VAR_5);
  VAR_7 = FUNC_4(VAR_4);
 }
 else
 {

  VAR_6 = VAR_2->low;
  VAR_7 = VAR_2->stricthigh;
 }


 if (FUNC_7(VAR_7 < VAR_6))
 {

  VAR_2->low = VAR_0;
  VAR_2->stricthigh = VAR_0;
  VAR_2->bounds_valid = 0;
  return VAR_6;
 }
 if (!VAR_2->bounds_valid)
  VAR_7++;
 VAR_8 = VAR_7;

 VAR_10 = 1;

 while (VAR_7 > VAR_6)
 {
  OffsetNumber VAR_11 = VAR_6 + ((VAR_7 - VAR_6) / 2);



  VAR_9 = FUNC_6(VAR_1, VAR_3, VAR_4, VAR_11);

  if (VAR_9 >= VAR_10)
   VAR_6 = VAR_11 + 1;
  else
  {
   VAR_7 = VAR_11;
   if (VAR_9 != 0)
    VAR_8 = VAR_7;
  }
 }
 VAR_2->low = VAR_6;
 VAR_2->stricthigh = VAR_8;
 VAR_2->bounds_valid = 1;

 return VAR_6;
}
