
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int PVOID ;
typedef scalar_t__ NTSTATUS ;
typedef int Data ;


 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ,int ,int*,int *,int*) ;
 int VAR_6 ;

VOID FUNC_6(
    PVOID VAR_7)







{
 ULONG VAR_8;
 UCHAR VAR_9[40];
 ULONG VAR_10;
 NTSTATUS VAR_11 = VAR_4;

 if (!VAR_2)
  {
   while (FUNC_1(VAR_11))
    {
     VAR_10 = sizeof(VAR_9);
     FUNC_3(VAR_9, VAR_10);

     VAR_11 = FUNC_5(VAR_6, VAR_5, &VAR_8, VAR_9, &VAR_10);

     if (FUNC_1(VAR_11))
      {
       FUNC_0("Received data - '%s'\n", VAR_9);
      }
     else
      if (VAR_11 != VAR_3)
       {
        FUNC_4(VAR_1, ("Receive error (Status = 0x%X).\n", VAR_11));
       }
      else
       {
        FUNC_4(VAR_0, ("IRP was cancelled.\n"));
       }
    }
  }

 FUNC_4(VAR_0, ("Terminating receive thread...\n"));

 FUNC_2(VAR_4);
}
