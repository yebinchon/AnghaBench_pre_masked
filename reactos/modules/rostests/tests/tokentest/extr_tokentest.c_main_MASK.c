
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NTSTATUS ;
typedef int HANDLE ;
typedef int CHAR ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,...) ;

int
FUNC_9(int VAR_3, char* VAR_4[])
{
 NTSTATUS VAR_5;
 HANDLE VAR_6;
 CHAR VAR_7[512];
 HANDLE VAR_8;

        FUNC_8("Current process Token:\n");

        VAR_5=FUNC_6(FUNC_4(), VAR_1|VAR_2, &VAR_8);
 if ( FUNC_5(VAR_5) )
 {
   FUNC_2(VAR_8);
   FUNC_0(VAR_8);
 }
 else
 {
   FUNC_8("ZwOpenProcessToken() failed: 0x%08x\n", VAR_5);
 }







 VAR_5 = FUNC_1(&VAR_6);
 if ( FUNC_5(VAR_5) )
 {
  FUNC_8("System Token: 0x%08x\n", VAR_6);
  FUNC_2(VAR_6);
  FUNC_0(VAR_6);
 }
 else
 {
  FUNC_8("CreateInitialSystemToken() return: 0x%08x\n", VAR_5);
 }

 FUNC_8("press return");
 FUNC_7(VAR_7);

 return 0;
}
