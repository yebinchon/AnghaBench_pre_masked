
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_11__ {scalar_t__ itemIndex; scalar_t__ lastItem; TYPE_1__* items; } ;
struct TYPE_13__ {scalar_t__ numArrayKeys; TYPE_2__ currPos; } ;
struct TYPE_12__ {int xs_heaptid; int opaque; } ;
struct TYPE_10__ {int heapTid; } ;
typedef int TIDBitmap ;
typedef int * ItemPointer ;
typedef TYPE_3__* IndexScanDesc ;
typedef TYPE_4__* BTScanOpaque ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int *,int *,int,int) ;

int64
FUNC_5(IndexScanDesc VAR_1, TIDBitmap *VAR_2)
{
 BTScanOpaque VAR_3 = (BTScanOpaque) VAR_1->opaque;
 int64 VAR_4 = 0;
 ItemPointer VAR_5;




 if (VAR_3->numArrayKeys)
 {

  if (VAR_3->numArrayKeys < 0)
   return VAR_4;

  FUNC_3(VAR_1, VAR_0);
 }


 do
 {

  if (FUNC_1(VAR_1, VAR_0))
  {

   VAR_5 = &VAR_1->xs_heaptid;
   FUNC_4(VAR_2, VAR_5, 1, 0);
   VAR_4++;

   for (;;)
   {




    if (++VAR_3->currPos.itemIndex > VAR_3->currPos.lastItem)
    {

     if (!FUNC_2(VAR_1, VAR_0))
      break;
    }


    VAR_5 = &VAR_3->currPos.items[VAR_3->currPos.itemIndex].heapTid;
    FUNC_4(VAR_2, VAR_5, 1, 0);
    VAR_4++;
   }
  }

 } while (VAR_3->numArrayKeys && FUNC_0(VAR_1, VAR_0));

 return VAR_4;
}
