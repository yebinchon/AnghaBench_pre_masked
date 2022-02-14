
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_8__ {scalar_t__ recheckCurItem; int curItem; int curItemMatches; scalar_t__ isFinished; } ;
struct TYPE_7__ {scalar_t__ nkeys; scalar_t__ keys; int tempCtx; int ginstate; } ;
struct TYPE_6__ {int xs_snapshot; int opaque; } ;
typedef int ItemPointerData ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* GinScanOpaque ;
typedef TYPE_3__* GinScanKey ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ,TYPE_3__*,int ,int ) ;

__attribute__((used)) static bool
FUNC_10(IndexScanDesc VAR_1, ItemPointerData VAR_2,
   ItemPointerData *VAR_3, bool *VAR_4)
{
 GinScanOpaque VAR_5 = (GinScanOpaque) VAR_1->opaque;
 uint32 VAR_6;
 bool VAR_7;
 do
 {
  FUNC_6(VAR_3);
  VAR_7 = 1;
  for (VAR_6 = 0; VAR_6 < VAR_5->nkeys && VAR_7; VAR_6++)
  {
   GinScanKey VAR_8 = VAR_5->keys + VAR_6;


   FUNC_9(&VAR_5->ginstate, VAR_5->tempCtx, VAR_8, VAR_2,
        VAR_1->xs_snapshot);

   if (VAR_8->isFinished)
    return 0;





   if (!VAR_8->curItemMatches)
   {
    VAR_2 = VAR_8->curItem;
    VAR_7 = 0;
    break;
   }
   if (FUNC_3(&VAR_8->curItem))
   {
    if (FUNC_1(&VAR_2) <
     FUNC_1(&VAR_8->curItem))
    {
     FUNC_5(&VAR_2,
           FUNC_1(&VAR_8->curItem),
           VAR_0);
    }
   }
   else
   {
    FUNC_0(FUNC_2(&VAR_8->curItem) > 0);
    FUNC_5(&VAR_2,
          FUNC_1(&VAR_8->curItem),
          FUNC_7(FUNC_2(&VAR_8->curItem)));
   }
   if (VAR_6 == 0)
   {
    *VAR_3 = VAR_8->curItem;
   }
   else
   {
    if (FUNC_3(&VAR_8->curItem) ||
     FUNC_3(VAR_3))
    {
     FUNC_0(FUNC_1(&VAR_8->curItem) >= FUNC_1(VAR_3));
     VAR_7 = (FUNC_1(&VAR_8->curItem) ==
        FUNC_1(VAR_3));
    }
    else
    {
     FUNC_0(FUNC_8(&VAR_8->curItem, VAR_3) >= 0);
     VAR_7 = (FUNC_8(&VAR_8->curItem, VAR_3) == 0);
    }
   }
  }
 } while (!VAR_7);

 FUNC_0(!FUNC_4(VAR_3));
 *VAR_4 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_5->nkeys; VAR_6++)
 {
  GinScanKey VAR_9 = VAR_5->keys + VAR_6;

  if (VAR_9->recheckCurItem)
  {
   *VAR_4 = 1;
   break;
  }
 }

 return 1;
}
