
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {size_t scan_key; int cur_elem; int num_elems; int * elem_values; } ;
struct TYPE_9__ {int numArrayKeys; TYPE_1__* arrayKeyData; TYPE_4__* arrayKeys; } ;
struct TYPE_8__ {int * parallel_scan; int opaque; } ;
struct TYPE_7__ {int sk_argument; } ;
typedef TYPE_1__* ScanKey ;
typedef int ScanDirection ;
typedef TYPE_2__* IndexScanDesc ;
typedef TYPE_3__* BTScanOpaque ;
typedef TYPE_4__ BTArrayKeyInfo ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

bool
FUNC_2(IndexScanDesc VAR_0, ScanDirection VAR_1)
{
 BTScanOpaque VAR_2 = (BTScanOpaque) VAR_0->opaque;
 bool VAR_3 = 0;
 int VAR_4;







 for (VAR_4 = VAR_2->numArrayKeys - 1; VAR_4 >= 0; VAR_4--)
 {
  BTArrayKeyInfo *VAR_5 = &VAR_2->arrayKeys[VAR_4];
  ScanKey VAR_6 = &VAR_2->arrayKeyData[VAR_5->scan_key];
  int VAR_7 = VAR_5->cur_elem;
  int VAR_8 = VAR_5->num_elems;

  if (FUNC_0(VAR_1))
  {
   if (--VAR_7 < 0)
   {
    VAR_7 = VAR_8 - 1;
    VAR_3 = 0;
   }
   else
    VAR_3 = 1;
  }
  else
  {
   if (++VAR_7 >= VAR_8)
   {
    VAR_7 = 0;
    VAR_3 = 0;
   }
   else
    VAR_3 = 1;
  }

  VAR_5->cur_elem = VAR_7;
  VAR_6->sk_argument = VAR_5->elem_values[VAR_7];
  if (VAR_3)
   break;
 }


 if (VAR_0->parallel_scan != ((void*)0))
  FUNC_1(VAR_0);

 return VAR_3;
}
