
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xs_snapshot; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef TYPE_1__* IndexScanDesc ;


 TYPE_1__* FUNC_0 (int ,int,int ,int ,int *,int) ;

IndexScanDesc
FUNC_1(Relation VAR_0,
        Snapshot VAR_1,
        int VAR_2)
{
 IndexScanDesc VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2, 0, VAR_1, ((void*)0), 0);





 VAR_3->xs_snapshot = VAR_1;

 return VAR_3;
}
