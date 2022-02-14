
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int BufferDesc ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;

bool
FUNC_10(Buffer VAR_2)
{
 BufferDesc *VAR_3;
 uint32 VAR_4;

 FUNC_0(FUNC_4(VAR_2));

 if (FUNC_3(VAR_2))
 {

  if (VAR_1[-VAR_2 - 1] != 1)
   return 0;

  return 1;
 }


 if (FUNC_6(VAR_2) != 1)
  return 0;

 VAR_3 = FUNC_5(VAR_2 - 1);


 FUNC_0(FUNC_7(FUNC_2(VAR_3),
        VAR_0));

 VAR_4 = FUNC_8(VAR_3);

 FUNC_0(FUNC_1(VAR_4) > 0);
 if (FUNC_1(VAR_4) == 1)
 {

  FUNC_9(VAR_3, VAR_4);
  return 1;
 }

 FUNC_9(VAR_3, VAR_4);
 return 0;
}
