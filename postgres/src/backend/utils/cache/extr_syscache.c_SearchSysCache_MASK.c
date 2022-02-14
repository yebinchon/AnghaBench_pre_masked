
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HeapTuple ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int * VAR_0 ;
 int VAR_1 ;

HeapTuple
FUNC_3(int VAR_2,
      Datum VAR_3,
      Datum VAR_4,
      Datum VAR_5,
      Datum VAR_6)
{
 FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_1 &&
     FUNC_1(VAR_0[VAR_2]));

 return FUNC_2(VAR_0[VAR_2], VAR_3, VAR_4, VAR_5, VAR_6);
}
