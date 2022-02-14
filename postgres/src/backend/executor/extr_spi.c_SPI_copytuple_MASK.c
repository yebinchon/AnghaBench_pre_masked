
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int savedcxt; } ;
typedef int MemoryContext ;
typedef int * HeapTuple ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int * FUNC_1 (int *) ;

HeapTuple
FUNC_2(HeapTuple VAR_4)
{
 MemoryContext VAR_5;
 HeapTuple VAR_6;

 if (VAR_4 == ((void*)0))
 {
  VAR_2 = VAR_0;
  return ((void*)0);
 }

 if (VAR_3 == ((void*)0))
 {
  VAR_2 = VAR_1;
  return ((void*)0);
 }

 VAR_5 = FUNC_0(VAR_3->savedcxt);

 VAR_6 = FUNC_1(VAR_4);

 FUNC_0(VAR_5);

 return VAR_6;
}
