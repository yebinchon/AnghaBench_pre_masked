
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ numKilled; int hashso_buc_populated; int hashso_buc_split; int currPos; } ;
struct TYPE_6__ {int numberOfKeys; int keyData; int indexRelation; int opaque; } ;
typedef int ScanKeyData ;
typedef scalar_t__ ScanKey ;
typedef int Relation ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* HashScanOpaque ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,scalar_t__,int) ;

void
FUNC_5(IndexScanDesc VAR_0, ScanKey VAR_1, int VAR_2,
     ScanKey VAR_3, int VAR_4)
{
 HashScanOpaque VAR_5 = (HashScanOpaque) VAR_0->opaque;
 Relation VAR_6 = VAR_0->indexRelation;

 if (FUNC_1(VAR_5->currPos))
 {

  if (VAR_5->numKilled > 0)
   FUNC_3(VAR_0);
 }

 FUNC_2(VAR_6, VAR_5);


 FUNC_0(VAR_5->currPos);


 if (VAR_1 && VAR_0->numberOfKeys > 0)
 {
  FUNC_4(VAR_0->keyData,
    VAR_1,
    VAR_0->numberOfKeys * sizeof(ScanKeyData));
 }

 VAR_5->hashso_buc_populated = 0;
 VAR_5->hashso_buc_split = 0;
}
