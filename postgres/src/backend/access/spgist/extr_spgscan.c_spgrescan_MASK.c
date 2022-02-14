
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int numberOfKeys; int numberOfOrderBys; TYPE_3__* orderByData; TYPE_3__* keyData; int opaque; } ;
struct TYPE_12__ {int fn_oid; } ;
struct TYPE_14__ {TYPE_1__ sk_func; } ;
struct TYPE_13__ {int * orderByTypes; } ;
typedef TYPE_2__* SpGistScanOpaque ;
typedef int ScanKeyData ;
typedef TYPE_3__* ScanKey ;
typedef TYPE_4__* IndexScanDesc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*) ;

void
FUNC_4(IndexScanDesc VAR_0, ScanKey VAR_1, int VAR_2,
    ScanKey VAR_3, int VAR_4)
{
 SpGistScanOpaque VAR_5 = (SpGistScanOpaque) VAR_0->opaque;


 if (VAR_1 && VAR_0->numberOfKeys > 0)
  FUNC_1(VAR_0->keyData, VAR_1,
    VAR_0->numberOfKeys * sizeof(ScanKeyData));


 if (VAR_3 && VAR_0->numberOfOrderBys > 0)
 {
  int VAR_6;

  FUNC_1(VAR_0->orderByData, VAR_3,
    VAR_0->numberOfOrderBys * sizeof(ScanKeyData));

  for (VAR_6 = 0; VAR_6 < VAR_0->numberOfOrderBys; VAR_6++)
  {
   ScanKey VAR_7 = &VAR_0->orderByData[VAR_6];
   VAR_5->orderByTypes[VAR_6] = FUNC_0(VAR_7->sk_func.fn_oid);
  }
 }


 FUNC_3(VAR_0);


 FUNC_2(VAR_5);
}
