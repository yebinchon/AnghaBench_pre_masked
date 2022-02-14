
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int itemIndex; } ;
struct TYPE_10__ {scalar_t__ numArrayKeys; int* killedItems; int numKilled; TYPE_8__ currPos; } ;
struct TYPE_9__ {int xs_recheck; scalar_t__ kill_prior_tuple; int opaque; } ;
typedef int ScanDirection ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* BTScanOpaque ;


 int FUNC_0 (TYPE_8__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int) ;

bool
FUNC_6(IndexScanDesc VAR_1, ScanDirection VAR_2)
{
 BTScanOpaque VAR_3 = (BTScanOpaque) VAR_1->opaque;
 bool VAR_4;


 VAR_1->xs_recheck = 0;






 if (VAR_3->numArrayKeys && !FUNC_0(VAR_3->currPos))
 {

  if (VAR_3->numArrayKeys < 0)
   return 0;

  FUNC_4(VAR_1, VAR_2);
 }


 do
 {





  if (!FUNC_0(VAR_3->currPos))
   VAR_4 = FUNC_2(VAR_1, VAR_2);
  else
  {



   if (VAR_1->kill_prior_tuple)
   {
    if (VAR_3->killedItems == ((void*)0))
     VAR_3->killedItems = (int *)
      FUNC_5(VAR_0 * sizeof(int));
    if (VAR_3->numKilled < VAR_0)
     VAR_3->killedItems[VAR_3->numKilled++] = VAR_3->currPos.itemIndex;
   }




   VAR_4 = FUNC_3(VAR_1, VAR_2);
  }


  if (VAR_4)
   break;

 } while (VAR_3->numArrayKeys && FUNC_1(VAR_1, VAR_2));

 return VAR_4;
}
