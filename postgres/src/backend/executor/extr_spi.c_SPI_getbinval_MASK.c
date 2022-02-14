
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_4__ {int natts; } ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,TYPE_1__*,int*) ;

Datum
FUNC_1(HeapTuple VAR_3, TupleDesc VAR_4, int VAR_5, bool *VAR_6)
{
 VAR_2 = 0;

 if (VAR_5 > VAR_4->natts || VAR_5 == 0 ||
  VAR_5 <= VAR_0)
 {
  VAR_2 = VAR_1;
  *VAR_6 = 1;
  return (Datum) ((void*)0);
 }

 return FUNC_0(VAR_3, VAR_5, VAR_4, VAR_6);
}
