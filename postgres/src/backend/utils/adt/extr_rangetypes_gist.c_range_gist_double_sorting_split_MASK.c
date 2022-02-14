
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


struct TYPE_32__ {int fn_oid; } ;
struct TYPE_34__ {TYPE_1__ rng_subdiff_finfo; } ;
typedef TYPE_3__ TypeCacheEntry ;
struct TYPE_40__ {size_t index; scalar_t__ delta; } ;
struct TYPE_39__ {int entries_count; int first; size_t common_left; TYPE_4__* right_lower; TYPE_4__* left_upper; scalar_t__ has_subtype_diff; TYPE_3__* typcache; } ;
struct TYPE_38__ {size_t* spl_left; size_t* spl_right; void* spl_rdatum; void* spl_ldatum; scalar_t__ spl_nright; scalar_t__ spl_nleft; } ;
struct TYPE_37__ {size_t n; TYPE_2__* vector; } ;
struct TYPE_35__ {int val; } ;
struct TYPE_36__ {TYPE_4__ lower; TYPE_4__ upper; } ;
struct TYPE_33__ {int key; } ;
typedef int RangeType ;
typedef TYPE_4__ RangeBound ;
typedef size_t OffsetNumber ;
typedef TYPE_5__ NonEmptyRange ;
typedef TYPE_6__ GistEntryVector ;
typedef TYPE_7__ GIST_SPLITVEC ;
typedef TYPE_8__ ConsiderSplitContext ;
typedef TYPE_9__ CommonEntry ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 void* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_9 (TYPE_8__*,int ,int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (TYPE_9__*,int,int,int ) ;
 int FUNC_12 (TYPE_5__*,int,int,int ,TYPE_3__*) ;
 scalar_t__ FUNC_13 (TYPE_3__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_14 (TYPE_3__*,int *,TYPE_4__*,TYPE_4__*,int*) ;
 int FUNC_15 (TYPE_8__*,TYPE_4__*,int,TYPE_4__*,int) ;
 int FUNC_16 (TYPE_3__*,TYPE_6__*,TYPE_7__*) ;

__attribute__((used)) static void
FUNC_17(TypeCacheEntry *VAR_4,
        GistEntryVector *VAR_5,
        GIST_SPLITVEC *VAR_6)
{
 ConsiderSplitContext VAR_7;
 OffsetNumber VAR_8,
    VAR_9;
 RangeType *VAR_10,
      *VAR_11 = ((void*)0),
      *VAR_12 = ((void*)0);
 int VAR_13;
 NonEmptyRange *VAR_14,
      *VAR_15;
 CommonEntry *VAR_16;
 int VAR_17,
    VAR_18,
    VAR_19;
 RangeBound *VAR_20,
      *VAR_21;

 FUNC_9(&VAR_7, 0, sizeof(ConsiderSplitContext));
 VAR_7.typcache = VAR_4;
 VAR_7.has_subtype_diff = FUNC_3(VAR_4->rng_subdiff_finfo.fn_oid);

 VAR_9 = VAR_5->n - 1;
 VAR_17 = VAR_7.entries_count = VAR_9 - VAR_0 + 1;
 VAR_7.first = 1;


 VAR_14 = (NonEmptyRange *) FUNC_10(VAR_17 * sizeof(NonEmptyRange));
 VAR_15 = (NonEmptyRange *) FUNC_10(VAR_17 * sizeof(NonEmptyRange));


 for (VAR_8 = VAR_0; VAR_8 <= VAR_9; VAR_8 = FUNC_2(VAR_8))
 {
  RangeType *VAR_22 = FUNC_1(VAR_5->vector[VAR_8].key);
  bool VAR_23;

  FUNC_14(VAR_4, VAR_22,
        &VAR_14[VAR_8 - VAR_0].lower,
        &VAR_14[VAR_8 - VAR_0].upper,
        &VAR_23);
  FUNC_0(!VAR_23);
 }





 FUNC_8(VAR_15, VAR_14, VAR_17 * sizeof(NonEmptyRange));
 FUNC_12(VAR_14, VAR_17, sizeof(NonEmptyRange),
     VAR_2, VAR_4);
 FUNC_12(VAR_15, VAR_17, sizeof(NonEmptyRange),
     VAR_3, VAR_4);
 VAR_18 = 0;
 VAR_19 = 0;
 VAR_20 = &VAR_14[VAR_18].lower;
 VAR_21 = &VAR_15[VAR_19].lower;
 while (1)
 {



  while (VAR_18 < VAR_17 &&
      FUNC_13(VAR_4, VAR_20,
        &VAR_14[VAR_18].lower) == 0)
  {
   if (FUNC_13(VAR_4, &VAR_14[VAR_18].upper,
         VAR_21) > 0)
    VAR_21 = &VAR_14[VAR_18].upper;
   VAR_18++;
  }
  if (VAR_18 >= VAR_17)
   break;
  VAR_20 = &VAR_14[VAR_18].lower;





  while (VAR_19 < VAR_17 &&
      FUNC_13(VAR_4, &VAR_15[VAR_19].upper,
        VAR_21) <= 0)
   VAR_19++;




  FUNC_15(&VAR_7, VAR_20, VAR_18, VAR_21, VAR_19);
 }





 VAR_18 = VAR_17 - 1;
 VAR_19 = VAR_17 - 1;
 VAR_20 = &VAR_14[VAR_18].upper;
 VAR_21 = &VAR_15[VAR_19].upper;
 while (1)
 {



  while (VAR_19 >= 0 &&
      FUNC_13(VAR_4, VAR_21,
        &VAR_15[VAR_19].upper) == 0)
  {
   if (FUNC_13(VAR_4, &VAR_15[VAR_19].lower,
         VAR_20) < 0)
    VAR_20 = &VAR_15[VAR_19].lower;
   VAR_19--;
  }
  if (VAR_19 < 0)
   break;
  VAR_21 = &VAR_15[VAR_19].upper;





  while (VAR_18 >= 0 &&
      FUNC_13(VAR_4, &VAR_14[VAR_18].lower,
        VAR_20) >= 0)
   VAR_18--;




  FUNC_15(&VAR_7, VAR_20, VAR_18 + 1,
          VAR_21, VAR_19 + 1);
 }




 if (VAR_7.first)
 {
  FUNC_16(VAR_4, VAR_5, VAR_6);
  return;
 }
 VAR_6->spl_left = (OffsetNumber *) FUNC_10(VAR_17 * sizeof(OffsetNumber));
 VAR_6->spl_right = (OffsetNumber *) FUNC_10(VAR_17 * sizeof(OffsetNumber));
 VAR_6->spl_nleft = 0;
 VAR_6->spl_nright = 0;





 VAR_13 = 0;
 VAR_16 = (CommonEntry *) FUNC_10(VAR_17 * sizeof(CommonEntry));





 for (VAR_8 = VAR_0; VAR_8 <= VAR_9; VAR_8 = FUNC_2(VAR_8))
 {
  RangeBound VAR_24,
     VAR_25;
  bool VAR_26;




  VAR_10 = FUNC_1(VAR_5->vector[VAR_8].key);

  FUNC_14(VAR_4, VAR_10, &VAR_24, &VAR_25, &VAR_26);

  if (FUNC_13(VAR_4, &VAR_25, VAR_7.left_upper) <= 0)
  {

   if (FUNC_13(VAR_4, &VAR_24, VAR_7.right_lower) >= 0)
   {

    VAR_16[VAR_13].index = VAR_8;
    if (VAR_7.has_subtype_diff)
    {




     VAR_16[VAR_13].delta =
      FUNC_7(VAR_4,
            VAR_24.val,
            VAR_7.right_lower->val) -
      FUNC_7(VAR_4,
            VAR_7.left_upper->val,
            VAR_25.val);
    }
    else
    {

     VAR_16[VAR_13].delta = 0;
    }
    VAR_13++;
   }
   else
   {

    FUNC_4(VAR_10, VAR_8);
   }
  }
  else
  {





   FUNC_0(FUNC_13(VAR_4, &VAR_24,
         VAR_7.right_lower) >= 0);
   FUNC_5(VAR_10, VAR_8);
  }
 }




 if (VAR_13 > 0)
 {




  FUNC_11(VAR_16, VAR_13, sizeof(CommonEntry),
     VAR_1);




  for (VAR_8 = 0; VAR_8 < VAR_13; VAR_8++)
  {
   int VAR_27 = VAR_16[VAR_8].index;

   VAR_10 = FUNC_1(VAR_5->vector[VAR_27].key);





   if (VAR_8 < VAR_7.common_left)
    FUNC_4(VAR_10, VAR_27);
   else
    FUNC_5(VAR_10, VAR_27);
  }
 }

 VAR_6->spl_ldatum = FUNC_6(VAR_11);
 VAR_6->spl_rdatum = FUNC_6(VAR_12);
}
