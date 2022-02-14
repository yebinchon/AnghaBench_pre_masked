
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int* spl_left; int* spl_right; size_t spl_nleft; size_t spl_nright; void* spl_rdatum; void* spl_ldatum; } ;
struct TYPE_7__ {int n; TYPE_1__* vector; } ;
struct TYPE_6__ {int key; } ;
typedef int OffsetNumber ;
typedef TYPE_2__ GistEntryVector ;
typedef TYPE_3__ GIST_SPLITVEC ;
typedef int BOX ;


 void* FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(GistEntryVector *VAR_1, GIST_SPLITVEC *VAR_2)
{
 OffsetNumber VAR_3,
    VAR_4;
 BOX *VAR_5 = ((void*)0),
      *VAR_6 = ((void*)0);
 int VAR_7;

 VAR_4 = VAR_1->n - 1;

 VAR_7 = (VAR_4 + 2) * sizeof(OffsetNumber);
 VAR_2->spl_left = (OffsetNumber *) FUNC_4(VAR_7);
 VAR_2->spl_right = (OffsetNumber *) FUNC_4(VAR_7);
 VAR_2->spl_nleft = VAR_2->spl_nright = 0;

 for (VAR_3 = VAR_0; VAR_3 <= VAR_4; VAR_3 = FUNC_2(VAR_3))
 {
  BOX *VAR_8 = FUNC_1(VAR_1->vector[VAR_3].key);

  if (VAR_3 <= (VAR_4 - VAR_0 + 1) / 2)
  {
   VAR_2->spl_left[VAR_2->spl_nleft] = VAR_3;
   if (VAR_5 == ((void*)0))
   {
    VAR_5 = (BOX *) FUNC_4(sizeof(BOX));
    *VAR_5 = *VAR_8;
   }
   else
    FUNC_3(VAR_5, VAR_8);

   VAR_2->spl_nleft++;
  }
  else
  {
   VAR_2->spl_right[VAR_2->spl_nright] = VAR_3;
   if (VAR_6 == ((void*)0))
   {
    VAR_6 = (BOX *) FUNC_4(sizeof(BOX));
    *VAR_6 = *VAR_8;
   }
   else
    FUNC_3(VAR_6, VAR_8);

   VAR_2->spl_nright++;
  }
 }

 VAR_2->spl_ldatum = FUNC_0(VAR_5);
 VAR_2->spl_rdatum = FUNC_0(VAR_6);
}
