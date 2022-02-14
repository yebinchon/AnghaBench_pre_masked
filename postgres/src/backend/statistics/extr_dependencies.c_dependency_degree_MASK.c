
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tupDesc; int attrcollid; int attrtypid; } ;
typedef TYPE_1__ VacAttrStats ;
struct TYPE_6__ {scalar_t__ lt_opr; } ;
typedef TYPE_2__ TypeCacheEntry ;
typedef size_t SortItem ;
typedef size_t* MultiSortSupport ;
typedef int HeapTuple ;
typedef int Bitmapset ;
typedef size_t AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t* FUNC_1 (int *,int*) ;
 size_t* FUNC_2 (int,int*,int *,int ,size_t*,int,size_t*) ;
 int FUNC_3 (int ,char*,int ) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 (size_t*,int,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int,size_t*,size_t*,size_t*) ;
 scalar_t__ FUNC_7 (int ,int,size_t*,size_t*,size_t*) ;
 size_t* FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (size_t*) ;

__attribute__((used)) static double
FUNC_11(int VAR_3, HeapTuple *VAR_4, int VAR_5, AttrNumber *VAR_6,
      VacAttrStats **VAR_7, Bitmapset *VAR_8)
{
 int VAR_9,
    VAR_10;
 MultiSortSupport VAR_11;
 SortItem *VAR_12;
 AttrNumber *VAR_13;
 AttrNumber *VAR_14;
 int VAR_15;


 int VAR_16 = 0;
 int VAR_17 = 0;


 int VAR_18 = 0;


 FUNC_0(VAR_5 >= 2);


 VAR_11 = FUNC_8(VAR_5);






 VAR_13 = FUNC_1(VAR_8, &VAR_15);

 VAR_14 = (AttrNumber *) FUNC_9(VAR_5 * sizeof(AttrNumber));
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  VAR_14[VAR_9] = VAR_13[VAR_6[VAR_9]];
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
 {
  VacAttrStats *VAR_19 = VAR_7[VAR_6[VAR_9]];
  TypeCacheEntry *VAR_20;

  VAR_20 = FUNC_4(VAR_19->attrtypid, VAR_2);
  if (VAR_20->lt_opr == VAR_1)
   FUNC_3(VAR_0, "cache lookup failed for ordering operator for type %u",
     VAR_19->attrtypid);


  FUNC_5(VAR_11, VAR_9, VAR_20->lt_opr, VAR_19->attrcollid);
 }
 VAR_12 = FUNC_2(VAR_3, &VAR_10, VAR_4, VAR_7[0]->tupDesc,
          VAR_11, VAR_5, VAR_14);
 VAR_16 = 1;


 for (VAR_9 = 1; VAR_9 <= VAR_10; VAR_9++)
 {





  if (VAR_9 == VAR_10 ||
   FUNC_7(0, VAR_5 - 2, &VAR_12[VAR_9 - 1], &VAR_12[VAR_9], VAR_11) != 0)
  {




   if (VAR_17 == 0)
    VAR_18 += VAR_16;


   VAR_17 = 0;
   VAR_16 = 1;
   continue;
  }

  else if (FUNC_6(VAR_5 - 1, &VAR_12[VAR_9 - 1], &VAR_12[VAR_9], VAR_11) != 0)
   VAR_17++;

  VAR_16++;
 }

 if (VAR_12)
  FUNC_10(VAR_12);

 FUNC_10(VAR_11);
 FUNC_10(VAR_13);
 FUNC_10(VAR_14);


 return (VAR_18 * 1.0 / VAR_3);
}
