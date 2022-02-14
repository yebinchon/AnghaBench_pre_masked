
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ PVOID ;
typedef int PKEVENT ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

VOID FUNC_6(
    PVOID VAR_10)





{
 NTSTATUS VAR_11;

 FUNC_3(VAR_2, ("Called.\n"));

 VAR_4 = VAR_6;

 VAR_11 = FUNC_4(VAR_9, VAR_5, &VAR_7, &VAR_8);

 if (FUNC_2(VAR_11))
  {
   VAR_11 = FUNC_5(VAR_8, &VAR_1);

   if (FUNC_2(VAR_11))
    {
     VAR_4 = VAR_0;
     FUNC_0("Using local IP address 0x%X\n", VAR_1);
    }
   else
    {
     FUNC_3(VAR_3, ("Unable to determine local IP address.\n"));
    }
   }
 else
  FUNC_3(VAR_3, ("Cannot open transport (Status = 0x%X).\n", VAR_11));

 FUNC_3(VAR_2, ("Setting close event.\n"));

 FUNC_1((PKEVENT)VAR_10, 0, VAR_0);

 FUNC_3(VAR_3, ("Leaving.\n"));
}
