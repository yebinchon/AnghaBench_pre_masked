
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_8__ {size_t itemIndex; TYPE_3__* items; } ;
struct TYPE_11__ {TYPE_1__ currPos; } ;
struct TYPE_10__ {int heapTid; } ;
struct TYPE_9__ {int opaque; } ;
typedef int TIDBitmap ;
typedef TYPE_2__* IndexScanDesc ;
typedef TYPE_3__ HashScanPosItem ;
typedef TYPE_4__* HashScanOpaque ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,int *,int,int) ;

int64
FUNC_3(IndexScanDesc VAR_1, TIDBitmap *VAR_2)
{
 HashScanOpaque VAR_3 = (HashScanOpaque) VAR_1->opaque;
 bool VAR_4;
 int64 VAR_5 = 0;
 HashScanPosItem *VAR_6;

 VAR_4 = FUNC_0(VAR_1, VAR_0);

 while (VAR_4)
 {
  VAR_6 = &VAR_3->currPos.items[VAR_3->currPos.itemIndex];






  FUNC_2(VAR_2, &(VAR_6->heapTid), 1, 1);
  VAR_5++;

  VAR_4 = FUNC_1(VAR_1, VAR_0);
 }

 return VAR_5;
}
