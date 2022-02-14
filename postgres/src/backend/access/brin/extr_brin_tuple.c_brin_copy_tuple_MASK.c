
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Size ;
typedef int BrinTuple ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 int * FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int *,scalar_t__) ;

BrinTuple *
FUNC_3(BrinTuple *VAR_0, Size VAR_1, BrinTuple *VAR_2, Size *VAR_3)
{
 if (!VAR_3 || *VAR_3 == 0)
  VAR_2 = FUNC_1(VAR_1);
 else if (VAR_1 > *VAR_3)
 {
  VAR_2 = FUNC_2(VAR_2, VAR_1);
  *VAR_3 = VAR_1;
 }

 FUNC_0(VAR_2, VAR_0, VAR_1);

 return VAR_2;
}
