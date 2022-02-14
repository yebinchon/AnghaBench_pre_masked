
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int qsort_arg_comparator ;
struct TYPE_12__ {scalar_t__ f_cmp; } ;
typedef TYPE_2__ gbtree_ninfo ;
struct TYPE_15__ {int* spl_left; int* spl_right; size_t spl_nleft; size_t spl_nright; void* spl_rdatum; void* spl_ldatum; } ;
struct TYPE_14__ {int n; TYPE_1__* vector; } ;
struct TYPE_13__ {int i; int * t; } ;
struct TYPE_11__ {int key; } ;
typedef int OffsetNumber ;
typedef TYPE_3__ Nsrt ;
typedef TYPE_4__ GistEntryVector ;
typedef TYPE_5__ GIST_SPLITVEC ;
typedef int GBT_NUMKEY ;
typedef int FmgrInfo ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (void**,int *,TYPE_2__ const*,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (void*,int,int,int ,void*) ;

GIST_SPLITVEC *
FUNC_6(const GistEntryVector *VAR_1, GIST_SPLITVEC *VAR_2,
      const gbtree_ninfo *VAR_3, FmgrInfo *VAR_4)
{
 OffsetNumber VAR_5,
    VAR_6 = VAR_1->n - 1;
 Nsrt *VAR_7;
 int VAR_8;

 VAR_7 = (Nsrt *) FUNC_4((VAR_6 + 1) * sizeof(Nsrt));
 VAR_8 = (VAR_6 + 2) * sizeof(OffsetNumber);
 VAR_2->spl_left = (OffsetNumber *) FUNC_4(VAR_8);
 VAR_2->spl_right = (OffsetNumber *) FUNC_4(VAR_8);
 VAR_2->spl_ldatum = FUNC_2(0);
 VAR_2->spl_rdatum = FUNC_2(0);
 VAR_2->spl_nleft = 0;
 VAR_2->spl_nright = 0;



 for (VAR_5 = VAR_0; VAR_5 <= VAR_6; VAR_5 = FUNC_1(VAR_5))
 {
  VAR_7[VAR_5].t = (GBT_NUMKEY *) FUNC_0((VAR_1->vector[VAR_5].key));
  VAR_7[VAR_5].i = VAR_5;
 }
 FUNC_5((void *) &VAR_7[VAR_0], VAR_6 - VAR_0 + 1, sizeof(Nsrt), (qsort_arg_comparator) VAR_3->f_cmp, (void *) VAR_4);



 for (VAR_5 = VAR_0; VAR_5 <= VAR_6; VAR_5 = FUNC_1(VAR_5))
 {
  if (VAR_5 <= (VAR_6 - VAR_0 + 1) / 2)
  {
   FUNC_3(&VAR_2->spl_ldatum, VAR_7[VAR_5].t, VAR_3, VAR_4);
   VAR_2->spl_left[VAR_2->spl_nleft] = VAR_7[VAR_5].i;
   VAR_2->spl_nleft++;
  }
  else
  {
   FUNC_3(&VAR_2->spl_rdatum, VAR_7[VAR_5].t, VAR_3, VAR_4);
   VAR_2->spl_right[VAR_2->spl_nright] = VAR_7[VAR_5].i;
   VAR_2->spl_nright++;
  }
 }

 return VAR_2;
}
