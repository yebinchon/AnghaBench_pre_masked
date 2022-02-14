
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cc_nkeys; } ;
typedef int HeapTuple ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;

HeapTuple
FUNC_3(int VAR_2,
    Datum VAR_3)
{
 FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_1 &&
     FUNC_1(VAR_0[VAR_2]));
 FUNC_0(VAR_0[VAR_2]->cc_nkeys == 1);

 return FUNC_2(VAR_0[VAR_2], VAR_3);
}
