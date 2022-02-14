
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xs_heapfetch; int xs_snapshot; int heapRelation; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef TYPE_1__* IndexScanDesc ;


 TYPE_1__* FUNC_0 (int ,int,int,int ,int *,int) ;
 int FUNC_1 (int ) ;

IndexScanDesc
FUNC_2(Relation VAR_0,
    Relation VAR_1,
    Snapshot VAR_2,
    int VAR_3, int VAR_4)
{
 IndexScanDesc VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_4, VAR_2, ((void*)0), 0);





 VAR_5->heapRelation = VAR_0;
 VAR_5->xs_snapshot = VAR_2;


 VAR_5->xs_heapfetch = FUNC_1(VAR_0);

 return VAR_5;
}
