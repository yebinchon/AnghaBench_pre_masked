
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TypeCacheEntry ;
struct TYPE_8__ {void* spl_rdatum; void* spl_ldatum; scalar_t__ spl_nright; scalar_t__ spl_nleft; } ;
struct TYPE_7__ {size_t n; TYPE_1__* vector; } ;
struct TYPE_6__ {int key; } ;
typedef scalar_t__ SplitLR ;
typedef int RangeType ;
typedef size_t OffsetNumber ;
typedef TYPE_2__ GistEntryVector ;
typedef TYPE_3__ GIST_SPLITVEC ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,size_t) ;
 void* FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(TypeCacheEntry *VAR_3,
        GistEntryVector *VAR_4,
        GIST_SPLITVEC *VAR_5,
        SplitLR *VAR_6)
{
 RangeType *VAR_7 = ((void*)0);
 RangeType *VAR_8 = ((void*)0);
 OffsetNumber VAR_9,
    VAR_10;

 VAR_10 = VAR_4->n - 1;

 VAR_5->spl_nleft = 0;
 VAR_5->spl_nright = 0;
 for (VAR_9 = VAR_0; VAR_9 <= VAR_10; VAR_9 = FUNC_2(VAR_9))
 {
  RangeType *VAR_11 = FUNC_1(VAR_4->vector[VAR_9].key);
  int VAR_12;


  VAR_12 = FUNC_6(VAR_11);


  if (VAR_6[VAR_12] == VAR_1)
   FUNC_3(VAR_11, VAR_9);
  else
  {
   FUNC_0(VAR_6[VAR_12] == VAR_2);
   FUNC_4(VAR_11, VAR_9);
  }
 }

 VAR_5->spl_ldatum = FUNC_5(VAR_7);
 VAR_5->spl_rdatum = FUNC_5(VAR_8);
}
