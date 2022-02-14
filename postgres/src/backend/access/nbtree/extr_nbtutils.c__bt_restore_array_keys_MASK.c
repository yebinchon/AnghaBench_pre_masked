
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {size_t scan_key; int mark_elem; int cur_elem; int * elem_values; } ;
struct TYPE_9__ {int numArrayKeys; int qual_ok; TYPE_1__* arrayKeyData; TYPE_4__* arrayKeys; } ;
struct TYPE_8__ {int opaque; } ;
struct TYPE_7__ {int sk_argument; } ;
typedef TYPE_1__* ScanKey ;
typedef TYPE_2__* IndexScanDesc ;
typedef TYPE_3__* BTScanOpaque ;
typedef TYPE_4__ BTArrayKeyInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(IndexScanDesc VAR_0)
{
 BTScanOpaque VAR_1 = (BTScanOpaque) VAR_0->opaque;
 bool VAR_2 = 0;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_1->numArrayKeys; VAR_3++)
 {
  BTArrayKeyInfo *VAR_4 = &VAR_1->arrayKeys[VAR_3];
  ScanKey VAR_5 = &VAR_1->arrayKeyData[VAR_4->scan_key];
  int VAR_6 = VAR_4->mark_elem;

  if (VAR_4->cur_elem != VAR_6)
  {
   VAR_4->cur_elem = VAR_6;
   VAR_5->sk_argument = VAR_4->elem_values[VAR_6];
   VAR_2 = 1;
  }
 }






 if (VAR_2)
 {
  FUNC_1(VAR_0);

  FUNC_0(VAR_1->qual_ok);
 }
}
