
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hashso_buc_populated; int hashso_buc_split; scalar_t__ numKilled; int * killedItems; void* hashso_split_bucket_buf; void* hashso_bucket_buf; int currPos; } ;
struct TYPE_5__ {TYPE_2__* opaque; } ;
typedef int Relation ;
typedef TYPE_1__* IndexScanDesc ;
typedef int HashScanOpaqueData ;
typedef TYPE_2__* HashScanOpaque ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* VAR_0 ;
 TYPE_1__* FUNC_2 (int ,int,int) ;
 scalar_t__ FUNC_3 (int) ;

IndexScanDesc
FUNC_4(Relation VAR_1, int VAR_2, int VAR_3)
{
 IndexScanDesc VAR_4;
 HashScanOpaque VAR_5;


 FUNC_0(VAR_3 == 0);

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);

 VAR_5 = (HashScanOpaque) FUNC_3(sizeof(HashScanOpaqueData));
 FUNC_1(VAR_5->currPos);
 VAR_5->hashso_bucket_buf = VAR_0;
 VAR_5->hashso_split_bucket_buf = VAR_0;

 VAR_5->hashso_buc_populated = 0;
 VAR_5->hashso_buc_split = 0;

 VAR_5->killedItems = ((void*)0);
 VAR_5->numKilled = 0;

 VAR_4->opaque = VAR_5;

 return VAR_4;
}
