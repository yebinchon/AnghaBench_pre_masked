
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_2__ {int itups; int tuplesort; } ;
typedef TYPE_1__ ValidateIndexState ;
typedef int ItemPointer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static bool
FUNC_3(ItemPointer VAR_0, void *VAR_1)
{
 ValidateIndexState *VAR_2 = (ValidateIndexState *) VAR_1;
 int64 VAR_3 = FUNC_1(VAR_0);

 FUNC_2(VAR_2->tuplesort, FUNC_0(VAR_3), 0);
 VAR_2->itups += 1;
 return 0;
}
