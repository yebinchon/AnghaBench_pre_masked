
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int itemIndex; } ;
struct TYPE_8__ {int* killedItems; int numKilled; TYPE_6__ currPos; } ;
struct TYPE_7__ {int xs_recheck; scalar_t__ kill_prior_tuple; int opaque; } ;
typedef int ScanDirection ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* HashScanOpaque ;


 int FUNC_0 (TYPE_6__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int) ;

bool
FUNC_4(IndexScanDesc VAR_1, ScanDirection VAR_2)
{
 HashScanOpaque VAR_3 = (HashScanOpaque) VAR_1->opaque;
 bool VAR_4;


 VAR_1->xs_recheck = 1;






 if (!FUNC_0(VAR_3->currPos))
  VAR_4 = FUNC_1(VAR_1, VAR_2);
 else
 {



  if (VAR_1->kill_prior_tuple)
  {
   if (VAR_3->killedItems == ((void*)0))
    VAR_3->killedItems = (int *)
     FUNC_3(VAR_0 * sizeof(int));

   if (VAR_3->numKilled < VAR_0)
    VAR_3->killedItems[VAR_3->numKilled++] = VAR_3->currPos.itemIndex;
  }




  VAR_4 = FUNC_2(VAR_1, VAR_2);
 }

 return VAR_4;
}
