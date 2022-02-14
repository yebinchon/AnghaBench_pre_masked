
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * supportCollation; int * compareFn; } ;
typedef int OffsetNumber ;
typedef TYPE_1__ GinState ;
typedef scalar_t__ GinNullCategory ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 scalar_t__ VAR_0 ;

int
FUNC_2(GinState *VAR_1, OffsetNumber VAR_2,
      Datum VAR_3, GinNullCategory VAR_4,
      Datum VAR_5, GinNullCategory VAR_6)
{

 if (VAR_4 != VAR_6)
  return (VAR_4 < VAR_6) ? -1 : 1;


 if (VAR_4 != VAR_0)
  return 0;


 return FUNC_0(FUNC_1(&VAR_1->compareFn[VAR_2 - 1],
             VAR_1->supportCollation[VAR_2 - 1],
             VAR_3, VAR_5));
}
