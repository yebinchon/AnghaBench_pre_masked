
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rel; int targetblock; } ;
typedef int * ItemPointer ;
typedef int IndexTuple ;
typedef TYPE_1__ BtreeCheckState ;
typedef int BlockNumber ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static inline ItemPointer
FUNC_5(BtreeCheckState *VAR_2, IndexTuple VAR_3,
       bool VAR_4)
{
 ItemPointer VAR_5 = FUNC_0(VAR_3);
 BlockNumber VAR_6 = VAR_2->targetblock;

 if (VAR_5 == ((void*)0) && VAR_4)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("block %u or its right sibling block or child block in index \"%s\" contains non-pivot tuple that lacks a heap TID",
      VAR_6, FUNC_1(VAR_2->rel))));

 return VAR_5;
}
