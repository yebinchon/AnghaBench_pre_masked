
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HeapTuple ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ,int ,int ) ;

bool
FUNC_3(int VAR_0,
      Datum VAR_1,
      Datum VAR_2,
      Datum VAR_3,
      Datum VAR_4)
{
 HeapTuple VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (!FUNC_0(VAR_5))
  return 0;
 FUNC_1(VAR_5);
 return 1;
}
