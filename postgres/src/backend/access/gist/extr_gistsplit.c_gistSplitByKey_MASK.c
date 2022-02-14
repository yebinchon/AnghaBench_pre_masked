
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {TYPE_1__* nonLeafTupdesc; int leafTupdesc; } ;
struct TYPE_19__ {int* spl_right; int spl_nright; int* spl_left; int spl_nleft; } ;
struct TYPE_18__ {int n; int * vector; } ;
struct TYPE_17__ {int* spl_risnull; int* spl_lisnull; scalar_t__* spl_dontcare; TYPE_4__ splitVector; } ;
struct TYPE_16__ {int natts; } ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int IndexTuple ;
typedef TYPE_2__ GistSplitVector ;
typedef TYPE_3__ GistEntryVector ;
typedef TYPE_4__ GIST_SPLITVEC ;
typedef TYPE_5__ GISTSTATE ;
typedef int GISTENTRY ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*,int,TYPE_2__*,int *,int,TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int,int *,int ,int ,int ,int,int,int) ;
 int FUNC_4 (TYPE_5__*,int *,TYPE_2__*) ;
 int FUNC_5 (int ,int,int ,int*) ;
 int FUNC_6 (int*,int*,int) ;
 TYPE_3__* FUNC_7 (int) ;

void
FUNC_8(Relation VAR_1, Page VAR_2, IndexTuple *VAR_3, int VAR_4,
      GISTSTATE *VAR_5, GistSplitVector *VAR_6, int VAR_7)
{
 GistEntryVector *VAR_8;
 OffsetNumber *VAR_9;
 int VAR_10 = 0;
 int VAR_11;



 VAR_8 = FUNC_7(VAR_0 + (VAR_4 + 1) * sizeof(GISTENTRY));
 VAR_8->n = VAR_4 + 1;
 VAR_9 = (OffsetNumber *) FUNC_7(VAR_4 * sizeof(OffsetNumber));

 for (VAR_11 = 1; VAR_11 <= VAR_4; VAR_11++)
 {
  Datum VAR_12;
  bool VAR_13;

  VAR_12 = FUNC_5(VAR_3[VAR_11 - 1], VAR_7 + 1, VAR_5->leafTupdesc,
         &VAR_13);
  FUNC_3(VAR_5, VAR_7, &(VAR_8->vector[VAR_11]),
        VAR_12, VAR_1, VAR_2, VAR_11,
        0, VAR_13);
  if (VAR_13)
   VAR_9[VAR_10++] = VAR_11;
 }

 if (VAR_10 == VAR_4)
 {





  VAR_6->spl_risnull[VAR_7] = VAR_6->spl_lisnull[VAR_7] = 1;

  if (VAR_7 + 1 < VAR_5->nonLeafTupdesc->natts)
   FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7 + 1);
  else
   FUNC_1(&VAR_6->splitVector, VAR_4);
 }
 else if (VAR_10 > 0)
 {
  int VAR_14 = 0;





  VAR_6->splitVector.spl_right = VAR_9;
  VAR_6->splitVector.spl_nright = VAR_10;
  VAR_6->spl_risnull[VAR_7] = 1;

  VAR_6->splitVector.spl_left = (OffsetNumber *) FUNC_7(VAR_4 * sizeof(OffsetNumber));
  VAR_6->splitVector.spl_nleft = 0;
  for (VAR_11 = 1; VAR_11 <= VAR_4; VAR_11++)
   if (VAR_14 < VAR_6->splitVector.spl_nright && VAR_9[VAR_14] == VAR_11)
    VAR_14++;
   else
    VAR_6->splitVector.spl_left[VAR_6->splitVector.spl_nleft++] = VAR_11;


  if (VAR_7 == 0 && VAR_5->nonLeafTupdesc->natts == 1)
  {
   VAR_6->spl_dontcare = ((void*)0);
   FUNC_4(VAR_5, VAR_3, VAR_6);
  }
 }
 else
 {



  if (FUNC_2(VAR_1, VAR_8, VAR_7, VAR_6, VAR_3, VAR_4, VAR_5))
  {




   FUNC_0(VAR_7 + 1 < VAR_5->nonLeafTupdesc->natts);

   if (VAR_6->spl_dontcare == ((void*)0))
   {




    FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7 + 1);
   }
   else
   {




    IndexTuple *VAR_15 = (IndexTuple *) FUNC_7(VAR_4 * sizeof(IndexTuple));
    OffsetNumber *VAR_16 = (OffsetNumber *) FUNC_7(VAR_4 * sizeof(OffsetNumber));
    int VAR_17 = 0;
    GIST_SPLITVEC VAR_18;

    for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
    {
     if (VAR_6->spl_dontcare[VAR_11 + 1])
     {
      VAR_15[VAR_17] = VAR_3[VAR_11];
      VAR_16[VAR_17] = VAR_11 + 1;
      VAR_17++;
     }
    }

    FUNC_0(VAR_17 > 0);





    VAR_18 = VAR_6->splitVector;
    VAR_18.spl_left = (OffsetNumber *) FUNC_7(sizeof(OffsetNumber) * VAR_4);
    FUNC_6(VAR_18.spl_left, VAR_6->splitVector.spl_left, sizeof(OffsetNumber) * VAR_6->splitVector.spl_nleft);
    VAR_18.spl_right = (OffsetNumber *) FUNC_7(sizeof(OffsetNumber) * VAR_4);
    FUNC_6(VAR_18.spl_right, VAR_6->splitVector.spl_right, sizeof(OffsetNumber) * VAR_6->splitVector.spl_nright);


    FUNC_8(VAR_1, VAR_2, VAR_15, VAR_17, VAR_5, VAR_6, VAR_7 + 1);


    for (VAR_11 = 0; VAR_11 < VAR_6->splitVector.spl_nleft; VAR_11++)
     VAR_18.spl_left[VAR_18.spl_nleft++] = VAR_16[VAR_6->splitVector.spl_left[VAR_11] - 1];
    for (VAR_11 = 0; VAR_11 < VAR_6->splitVector.spl_nright; VAR_11++)
     VAR_18.spl_right[VAR_18.spl_nright++] = VAR_16[VAR_6->splitVector.spl_right[VAR_11] - 1];

    VAR_6->splitVector = VAR_18;
   }
  }
 }
 if (VAR_7 == 0 && VAR_5->nonLeafTupdesc->natts > 1)
 {
  VAR_6->spl_dontcare = ((void*)0);
  FUNC_4(VAR_5, VAR_3, VAR_6);
 }
}
