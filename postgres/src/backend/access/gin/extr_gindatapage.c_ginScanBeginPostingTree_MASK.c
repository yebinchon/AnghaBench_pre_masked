
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fullScan; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef int GinBtreeStack ;
typedef TYPE_1__* GinBtree ;
typedef int BlockNumber ;


 int * FUNC_0 (TYPE_1__*,int,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

GinBtreeStack *
FUNC_2(GinBtree VAR_0, Relation VAR_1, BlockNumber VAR_2,
      Snapshot VAR_3)
{
 GinBtreeStack *VAR_4;

 FUNC_1(VAR_0, VAR_1, VAR_2);

 VAR_0->fullScan = 1;

 VAR_4 = FUNC_0(VAR_0, 1, 0, VAR_3);

 return VAR_4;
}
