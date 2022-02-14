
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BufferDesc ;
typedef scalar_t__ Buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,char*,int) ;

void
FUNC_8(Buffer VAR_6, int VAR_7)
{
 BufferDesc *VAR_8;

 FUNC_0(FUNC_3(VAR_6));
 if (FUNC_2(VAR_6))
  return;

 VAR_8 = FUNC_4(VAR_6 - 1);

 if (VAR_7 == VAR_2)
  FUNC_6(FUNC_1(VAR_8));
 else if (VAR_7 == VAR_1)
  FUNC_5(FUNC_1(VAR_8), VAR_5);
 else if (VAR_7 == VAR_0)
  FUNC_5(FUNC_1(VAR_8), VAR_4);
 else
  FUNC_7(VAR_3, "unrecognized buffer lock mode: %d", VAR_7);
}
