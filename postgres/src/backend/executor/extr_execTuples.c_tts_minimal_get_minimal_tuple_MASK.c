
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_2__ {int mintuple; } ;
typedef TYPE_1__ MinimalTupleTableSlot ;
typedef int MinimalTuple ;


 int FUNC_0 (int *) ;

__attribute__((used)) static MinimalTuple
FUNC_1(TupleTableSlot *VAR_0)
{
 MinimalTupleTableSlot *VAR_1 = (MinimalTupleTableSlot *) VAR_0;

 if (!VAR_1->mintuple)
  FUNC_0(VAR_0);

 return VAR_1->mintuple;
}
