
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int ginstate; } ;
struct TYPE_11__ {int t_tid; } ;
struct TYPE_10__ {int nvalues; int categories; int keys; } ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef TYPE_1__ KeyArray ;
typedef int ItemPointerData ;
typedef TYPE_2__* IndexTuple ;
typedef int GinNullCategory ;
typedef int Datum ;
typedef TYPE_3__ BuildAccumulator ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (TYPE_3__*,int *,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (int ,TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_12(BuildAccumulator *VAR_1, KeyArray *VAR_2,
       Page VAR_3, OffsetNumber VAR_4)
{
 ItemPointerData VAR_5;
 OffsetNumber VAR_6,
    VAR_7;
 OffsetNumber VAR_8;


 VAR_2->nvalues = 0;

 VAR_7 = FUNC_7(VAR_3);
 FUNC_0(VAR_7 >= VAR_0);
 FUNC_3(&VAR_5);
 VAR_8 = 0;

 for (VAR_6 = VAR_4; VAR_6 <= VAR_7; VAR_6 = FUNC_4(VAR_6))
 {
  IndexTuple VAR_9 = (IndexTuple) FUNC_5(VAR_3, FUNC_6(VAR_3, VAR_6));
  OffsetNumber VAR_10;
  Datum VAR_11;
  GinNullCategory VAR_12;


  VAR_10 = FUNC_10(VAR_1->ginstate, VAR_9);

  if (!FUNC_2(&VAR_5))
  {
   VAR_5 = VAR_9->t_tid;
   VAR_8 = VAR_10;
  }
  else if (!(FUNC_1(&VAR_5, &VAR_9->t_tid) &&
       VAR_10 == VAR_8))
  {





   FUNC_9(VAR_1, &VAR_5, VAR_8,
          VAR_2->keys, VAR_2->categories, VAR_2->nvalues);
   VAR_2->nvalues = 0;
   VAR_5 = VAR_9->t_tid;
   VAR_8 = VAR_10;
  }


  VAR_11 = FUNC_11(VAR_1->ginstate, VAR_9, &VAR_12);
  FUNC_8(VAR_2, VAR_11, VAR_12);
 }


 FUNC_9(VAR_1, &VAR_5, VAR_8,
        VAR_2->keys, VAR_2->categories, VAR_2->nvalues);
}
