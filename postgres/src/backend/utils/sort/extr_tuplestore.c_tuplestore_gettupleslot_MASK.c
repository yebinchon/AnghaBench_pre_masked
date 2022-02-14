
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Tuplestorestate ;
typedef int TupleTableSlot ;
typedef scalar_t__ MinimalTuple ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int,int*) ;

bool
FUNC_4(Tuplestorestate *VAR_0, bool VAR_1,
      bool VAR_2, TupleTableSlot *VAR_3)
{
 MinimalTuple VAR_4;
 bool VAR_5;

 VAR_4 = (MinimalTuple) FUNC_3(VAR_0, VAR_1, &VAR_5);

 if (VAR_4)
 {
  if (VAR_2 && !VAR_5)
  {
   VAR_4 = FUNC_2(VAR_4);
   VAR_5 = 1;
  }
  FUNC_1(VAR_4, VAR_3, VAR_5);
  return 1;
 }
 else
 {
  FUNC_0(VAR_3);
  return 0;
 }
}
