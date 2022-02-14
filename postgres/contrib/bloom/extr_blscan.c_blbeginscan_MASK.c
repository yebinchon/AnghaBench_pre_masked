
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * sign; int state; } ;
struct TYPE_5__ {TYPE_2__* opaque; int indexRelation; } ;
typedef int Relation ;
typedef TYPE_1__* IndexScanDesc ;
typedef int BloomScanOpaqueData ;
typedef TYPE_2__* BloomScanOpaque ;


 TYPE_1__* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int) ;

IndexScanDesc
FUNC_3(Relation VAR_0, int VAR_1, int VAR_2)
{
 IndexScanDesc VAR_3;
 BloomScanOpaque VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_4 = (BloomScanOpaque) FUNC_2(sizeof(BloomScanOpaqueData));
 FUNC_1(&VAR_4->state, VAR_3->indexRelation);
 VAR_4->sign = ((void*)0);

 VAR_3->opaque = VAR_4;

 return VAR_3;
}
