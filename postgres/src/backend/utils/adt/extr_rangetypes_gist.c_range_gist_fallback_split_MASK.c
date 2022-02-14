
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TypeCacheEntry ;
struct TYPE_8__ {void* spl_rdatum; void* spl_ldatum; scalar_t__ spl_nright; scalar_t__ spl_nleft; } ;
struct TYPE_7__ {int n; TYPE_1__* vector; } ;
struct TYPE_6__ {int key; } ;
typedef int RangeType ;
typedef int OffsetNumber ;
typedef TYPE_2__ GistEntryVector ;
typedef TYPE_3__ GIST_SPLITVEC ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 void* FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(TypeCacheEntry *VAR_1,
        GistEntryVector *VAR_2,
        GIST_SPLITVEC *VAR_3)
{
 RangeType *VAR_4 = ((void*)0);
 RangeType *VAR_5 = ((void*)0);
 OffsetNumber VAR_6,
    VAR_7,
    VAR_8;

 VAR_7 = VAR_2->n - 1;

 VAR_8 = (VAR_7 - VAR_0) / 2 + VAR_0;

 VAR_3->spl_nleft = 0;
 VAR_3->spl_nright = 0;
 for (VAR_6 = VAR_0; VAR_6 <= VAR_7; VAR_6++)
 {
  RangeType *VAR_9 = FUNC_0(VAR_2->vector[VAR_6].key);

  if (VAR_6 < VAR_8)
   FUNC_1(VAR_9, VAR_6);
  else
   FUNC_2(VAR_9, VAR_6);
 }

 VAR_3->spl_ldatum = FUNC_3(VAR_4);
 VAR_3->spl_rdatum = FUNC_3(VAR_5);
}
