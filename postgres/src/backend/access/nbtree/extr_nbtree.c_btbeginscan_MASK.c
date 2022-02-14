
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * markTuples; int currTuples; scalar_t__ numKilled; int * killedItems; int * arrayContext; int * arrayKeys; scalar_t__ numArrayKeys; int * arrayKeyData; int * keyData; int markPos; int currPos; } ;
struct TYPE_5__ {int numberOfKeys; TYPE_2__* opaque; int xs_itupdesc; } ;
typedef int ScanKeyData ;
typedef int * ScanKey ;
typedef int Relation ;
typedef TYPE_1__* IndexScanDesc ;
typedef int BTScanOpaqueData ;
typedef TYPE_2__* BTScanOpaque ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,int,int) ;
 scalar_t__ FUNC_4 (int) ;

IndexScanDesc
FUNC_5(Relation VAR_0, int VAR_1, int VAR_2)
{
 IndexScanDesc VAR_3;
 BTScanOpaque VAR_4;


 FUNC_0(VAR_2 == 0);


 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);


 VAR_4 = (BTScanOpaque) FUNC_4(sizeof(BTScanOpaqueData));
 FUNC_1(VAR_4->currPos);
 FUNC_1(VAR_4->markPos);
 if (VAR_3->numberOfKeys > 0)
  VAR_4->keyData = (ScanKey) FUNC_4(VAR_3->numberOfKeys * sizeof(ScanKeyData));
 else
  VAR_4->keyData = ((void*)0);

 VAR_4->arrayKeyData = ((void*)0);
 VAR_4->numArrayKeys = 0;
 VAR_4->arrayKeys = ((void*)0);
 VAR_4->arrayContext = ((void*)0);

 VAR_4->killedItems = ((void*)0);
 VAR_4->numKilled = 0;






 VAR_4->currTuples = *(VAR_4->markTuples = ((void*)0));

 VAR_3->xs_itupdesc = FUNC_2(VAR_0);

 VAR_3->opaque = VAR_4;

 return VAR_3;
}
