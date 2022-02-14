
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_8__ {int itemptr; int isBuild; } ;
struct TYPE_7__ {size_t nitem; size_t curitem; int * items; } ;
typedef int Relation ;
typedef int ItemPointerData ;
typedef int GinStatsData ;
typedef int GinBtreeStack ;
typedef TYPE_1__ GinBtreeDataLeafInsertData ;
typedef TYPE_2__ GinBtreeData ;
typedef int BlockNumber ;


 int * FUNC_0 (TYPE_2__*,int,int,int *) ;
 int FUNC_1 (TYPE_2__*,int *,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

void
FUNC_3(Relation VAR_0, BlockNumber VAR_1,
       ItemPointerData *VAR_2, uint32 VAR_3,
       GinStatsData *VAR_4)
{
 GinBtreeData VAR_5;
 GinBtreeDataLeafInsertData VAR_6;
 GinBtreeStack *VAR_7;

 FUNC_2(&VAR_5, VAR_0, VAR_1);
 VAR_5.isBuild = (VAR_4 != ((void*)0));
 VAR_6.items = VAR_2;
 VAR_6.nitem = VAR_3;
 VAR_6.curitem = 0;

 while (VAR_6.curitem < VAR_6.nitem)
 {

  VAR_5.itemptr = VAR_6.items[VAR_6.curitem];
  VAR_7 = FUNC_0(&VAR_5, 0, 1, ((void*)0));

  FUNC_1(&VAR_5, VAR_7, &VAR_6, VAR_4);
 }
}
