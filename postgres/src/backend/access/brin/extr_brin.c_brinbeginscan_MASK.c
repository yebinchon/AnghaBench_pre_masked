
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bo_bdesc; int bo_pagesPerRange; int bo_rmAccess; } ;
struct TYPE_5__ {TYPE_2__* opaque; int xs_snapshot; } ;
typedef int Relation ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__ BrinOpaque ;


 TYPE_1__* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

IndexScanDesc
FUNC_4(Relation VAR_0, int VAR_1, int VAR_2)
{
 IndexScanDesc VAR_3;
 BrinOpaque *VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_4 = (BrinOpaque *) FUNC_3(sizeof(BrinOpaque));
 VAR_4->bo_rmAccess = FUNC_1(VAR_0, &VAR_4->bo_pagesPerRange,
              VAR_3->xs_snapshot);
 VAR_4->bo_bdesc = FUNC_2(VAR_0);
 VAR_3->opaque = VAR_4;

 return VAR_3;
}
