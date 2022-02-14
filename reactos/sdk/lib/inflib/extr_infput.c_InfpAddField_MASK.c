
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PINFCONTEXT ;
typedef int PINFCACHELINE ;
typedef int PCWSTR ;
typedef int INFSTATUS ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

INFSTATUS
FUNC_4(PINFCONTEXT VAR_3, PCWSTR VAR_4)
{
  PINFCACHELINE VAR_5;

  if (((void*)0) == VAR_3)
    {
      FUNC_1("Invalid parameter\n");
      return VAR_0;
    }

  VAR_5 = FUNC_3(VAR_3);
  if (((void*)0) == FUNC_2(VAR_5, VAR_4))
    {
      FUNC_0("Failed to add field\n");
      return VAR_1;
    }

  return VAR_2;
}
