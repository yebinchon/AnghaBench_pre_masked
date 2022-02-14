
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BufferDesc ;
typedef scalar_t__ Buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;

bool
FUNC_6(Buffer VAR_1)
{
 BufferDesc *VAR_2;

 FUNC_0(FUNC_3(VAR_1));
 if (FUNC_2(VAR_1))
  return 1;

 VAR_2 = FUNC_4(VAR_1 - 1);

 return FUNC_5(FUNC_1(VAR_2),
         VAR_0);
}
