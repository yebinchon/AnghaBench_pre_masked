
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TypeCacheEntry ;
struct TYPE_11__ {void* spl_rdatum; void* spl_ldatum; scalar_t__ spl_nright; scalar_t__ spl_nleft; } ;
struct TYPE_10__ {int n; TYPE_1__* vector; } ;
struct TYPE_9__ {int index; int bound; } ;
struct TYPE_8__ {int key; } ;
typedef TYPE_2__ SingleBoundSortItem ;
typedef int RangeType ;
typedef int RangeBound ;
typedef int OffsetNumber ;
typedef TYPE_3__ GistEntryVector ;
typedef TYPE_4__ GIST_SPLITVEC ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 void* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,int,int,int ,int *) ;
 int FUNC_8 (int *,int *,int *,int *,int*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_9(TypeCacheEntry *VAR_2,
        GistEntryVector *VAR_3,
        GIST_SPLITVEC *VAR_4,
        bool VAR_5)
{
 SingleBoundSortItem *VAR_6;
 RangeType *VAR_7 = ((void*)0);
 RangeType *VAR_8 = ((void*)0);
 OffsetNumber VAR_9,
    VAR_10,
    VAR_11;

 VAR_10 = VAR_3->n - 1;

 VAR_6 = (SingleBoundSortItem *)
  FUNC_6(VAR_10 * sizeof(SingleBoundSortItem));




 for (VAR_9 = VAR_0; VAR_9 <= VAR_10; VAR_9 = FUNC_2(VAR_9))
 {
  RangeType *VAR_12 = FUNC_1(VAR_3->vector[VAR_9].key);
  RangeBound VAR_13;
  bool VAR_14;

  VAR_6[VAR_9 - 1].index = VAR_9;

  if (VAR_5)
   FUNC_8(VAR_2, VAR_12, &VAR_13,
         &VAR_6[VAR_9 - 1].bound, &VAR_14);
  else
   FUNC_8(VAR_2, VAR_12, &VAR_6[VAR_9 - 1].bound,
         &VAR_13, &VAR_14);
  FUNC_0(!VAR_14);
 }

 FUNC_7(VAR_6, VAR_10, sizeof(SingleBoundSortItem),
     VAR_1, VAR_2);

 VAR_11 = VAR_10 / 2;

 VAR_4->spl_nleft = 0;
 VAR_4->spl_nright = 0;

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
 {
  int VAR_15 = VAR_6[VAR_9].index;
  RangeType *VAR_16 = FUNC_1(VAR_3->vector[VAR_15].key);

  if (VAR_9 < VAR_11)
   FUNC_3(VAR_16, VAR_15);
  else
   FUNC_4(VAR_16, VAR_15);
 }

 VAR_4->spl_ldatum = FUNC_5(VAR_7);
 VAR_4->spl_rdatum = FUNC_5(VAR_8);
}
