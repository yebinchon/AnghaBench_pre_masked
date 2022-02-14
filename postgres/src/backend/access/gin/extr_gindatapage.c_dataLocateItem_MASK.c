
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int maxoff; } ;
struct TYPE_12__ {int itemptr; int (* getLeftMostChild ) (TYPE_3__*,int ) ;scalar_t__ fullScan; } ;
struct TYPE_11__ {int off; int predictNumber; int buffer; } ;
struct TYPE_10__ {int key; } ;
typedef TYPE_1__ PostingItem ;
typedef int Page ;
typedef int OffsetNumber ;
typedef TYPE_2__ GinBtreeStack ;
typedef TYPE_3__* GinBtree ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int ,int) ;
 TYPE_8__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_3__*,int ) ;

__attribute__((used)) static BlockNumber
FUNC_9(GinBtree VAR_1, GinBtreeStack *VAR_2)
{
 OffsetNumber VAR_3,
    VAR_4,
    VAR_5;
 PostingItem *VAR_6 = ((void*)0);
 int VAR_7;
 Page VAR_8 = FUNC_1(VAR_2->buffer);

 FUNC_0(!FUNC_5(VAR_8));
 FUNC_0(FUNC_4(VAR_8));

 if (VAR_1->fullScan)
 {
  VAR_2->off = VAR_0;
  VAR_2->predictNumber *= FUNC_3(VAR_8)->maxoff;
  return VAR_1->getLeftMostChild(VAR_1, VAR_8);
 }

 VAR_3 = VAR_0;
 VAR_5 = VAR_4 = FUNC_3(VAR_8)->maxoff;
 FUNC_0(VAR_4 >= VAR_3);

 VAR_4++;

 while (VAR_4 > VAR_3)
 {
  OffsetNumber VAR_9 = VAR_3 + ((VAR_4 - VAR_3) / 2);

  VAR_6 = FUNC_2(VAR_8, VAR_9);

  if (VAR_9 == VAR_5)
  {




   VAR_7 = -1;
  }
  else
  {
   VAR_6 = FUNC_2(VAR_8, VAR_9);
   VAR_7 = FUNC_7(&VAR_1->itemptr, &(VAR_6->key));
  }

  if (VAR_7 == 0)
  {
   VAR_2->off = VAR_9;
   return FUNC_6(VAR_6);
  }
  else if (VAR_7 > 0)
   VAR_3 = VAR_9 + 1;
  else
   VAR_4 = VAR_9;
 }

 FUNC_0(VAR_4 >= VAR_0 && VAR_4 <= VAR_5);

 VAR_2->off = VAR_4;
 VAR_6 = FUNC_2(VAR_8, VAR_4);
 return FUNC_6(VAR_6);
}
