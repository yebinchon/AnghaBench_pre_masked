
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ginstate; void* keyCtx; void* tempCtx; scalar_t__ nkeys; int * keys; } ;
struct TYPE_5__ {TYPE_2__* opaque; int indexRelation; } ;
typedef int Relation ;
typedef TYPE_1__* IndexScanDesc ;
typedef int GinScanOpaqueData ;
typedef TYPE_2__* GinScanOpaque ;


 int VAR_0 ;
 void* FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int) ;

IndexScanDesc
FUNC_5(Relation VAR_2, int VAR_3, int VAR_4)
{
 IndexScanDesc VAR_5;
 GinScanOpaque VAR_6;


 FUNC_1(VAR_4 == 0);

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);


 VAR_6 = (GinScanOpaque) FUNC_4(sizeof(GinScanOpaqueData));
 VAR_6->keys = ((void*)0);
 VAR_6->nkeys = 0;
 VAR_6->tempCtx = FUNC_0(VAR_1,
          "Gin scan temporary context",
          VAR_0);
 VAR_6->keyCtx = FUNC_0(VAR_1,
            "Gin scan key context",
            VAR_0);
 FUNC_3(&VAR_6->ginstate, VAR_5->indexRelation);

 VAR_5->opaque = VAR_6;

 return VAR_5;
}
