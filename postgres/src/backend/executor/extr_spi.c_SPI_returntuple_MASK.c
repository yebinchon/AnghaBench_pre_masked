
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {int savedcxt; } ;
struct TYPE_6__ {scalar_t__ tdtypeid; scalar_t__ tdtypmod; } ;
typedef int MemoryContext ;
typedef int * HeapTupleHeader ;
typedef int * HeapTuple ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

HeapTupleHeader
FUNC_4(HeapTuple VAR_5, TupleDesc VAR_6)
{
 MemoryContext VAR_7;
 HeapTupleHeader VAR_8;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  VAR_3 = VAR_1;
  return ((void*)0);
 }

 if (VAR_4 == ((void*)0))
 {
  VAR_3 = VAR_2;
  return ((void*)0);
 }


 if (VAR_6->tdtypeid == VAR_0 &&
  VAR_6->tdtypmod < 0)
  FUNC_2(VAR_6);

 VAR_7 = FUNC_1(VAR_4->savedcxt);

 VAR_8 = FUNC_0(FUNC_3(VAR_5, VAR_6));

 FUNC_1(VAR_7);

 return VAR_8;
}
