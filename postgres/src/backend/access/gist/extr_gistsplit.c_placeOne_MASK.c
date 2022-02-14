
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* nonLeafTupdesc; } ;
struct TYPE_10__ {int spl_nright; void** spl_right; int spl_nleft; void** spl_left; } ;
struct TYPE_11__ {TYPE_2__ splitVector; int * spl_risnull; int * spl_rattr; int * spl_lisnull; int * spl_lattr; } ;
struct TYPE_9__ {int natts; } ;
typedef int Relation ;
typedef void* OffsetNumber ;
typedef int IndexTuple ;
typedef TYPE_3__ GistSplitVector ;
typedef TYPE_4__ GISTSTATE ;
typedef int GISTENTRY ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,int ,int *,void*,int *,int*) ;
 int FUNC_1 (int ,int ,int ,int *,int ,int) ;
 float FUNC_2 (TYPE_4__*,int,int *,int ,int *,int) ;

__attribute__((used)) static void
FUNC_3(Relation VAR_1, GISTSTATE *VAR_2, GistSplitVector *VAR_3,
   IndexTuple VAR_4, OffsetNumber VAR_5, int VAR_6)
{
 GISTENTRY VAR_7[VAR_0];
 bool VAR_8[VAR_0];
 bool VAR_9 = 1;

 FUNC_0(VAR_2, VAR_1, VAR_4, ((void*)0), (OffsetNumber) 0,
       VAR_7, VAR_8);

 for (; VAR_6 < VAR_2->nonLeafTupdesc->natts; VAR_6++)
 {
  float VAR_10,
     VAR_11;
  GISTENTRY VAR_12;

  FUNC_1(VAR_12, VAR_3->spl_lattr[VAR_6], VAR_1, ((void*)0), 0, 0);
  VAR_10 = FUNC_2(VAR_2, VAR_6, &VAR_12, VAR_3->spl_lisnull[VAR_6],
          VAR_7 + VAR_6, VAR_8[VAR_6]);
  FUNC_1(VAR_12, VAR_3->spl_rattr[VAR_6], VAR_1, ((void*)0), 0, 0);
  VAR_11 = FUNC_2(VAR_2, VAR_6, &VAR_12, VAR_3->spl_risnull[VAR_6],
          VAR_7 + VAR_6, VAR_8[VAR_6]);

  if (VAR_10 != VAR_11)
  {
   if (VAR_10 > VAR_11)
    VAR_9 = 0;
   break;
  }
 }

 if (VAR_9)
  VAR_3->splitVector.spl_left[VAR_3->splitVector.spl_nleft++] = VAR_5;
 else
  VAR_3->splitVector.spl_right[VAR_3->splitVector.spl_nright++] = VAR_5;
}
