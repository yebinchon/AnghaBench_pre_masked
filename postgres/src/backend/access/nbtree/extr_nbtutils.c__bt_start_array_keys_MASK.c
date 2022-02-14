
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {size_t scan_key; scalar_t__ num_elems; size_t cur_elem; int * elem_values; } ;
struct TYPE_8__ {int numArrayKeys; TYPE_1__* arrayKeyData; TYPE_4__* arrayKeys; } ;
struct TYPE_7__ {int opaque; } ;
struct TYPE_6__ {int sk_argument; } ;
typedef TYPE_1__* ScanKey ;
typedef int ScanDirection ;
typedef TYPE_2__* IndexScanDesc ;
typedef TYPE_3__* BTScanOpaque ;
typedef TYPE_4__ BTArrayKeyInfo ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(IndexScanDesc VAR_0, ScanDirection VAR_1)
{
 BTScanOpaque VAR_2 = (BTScanOpaque) VAR_0->opaque;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->numArrayKeys; VAR_3++)
 {
  BTArrayKeyInfo *VAR_4 = &VAR_2->arrayKeys[VAR_3];
  ScanKey VAR_5 = &VAR_2->arrayKeyData[VAR_4->scan_key];

  FUNC_0(VAR_4->num_elems > 0);
  if (FUNC_1(VAR_1))
   VAR_4->cur_elem = VAR_4->num_elems - 1;
  else
   VAR_4->cur_elem = 0;
  VAR_5->sk_argument = VAR_4->elem_values[VAR_4->cur_elem];
 }
}
