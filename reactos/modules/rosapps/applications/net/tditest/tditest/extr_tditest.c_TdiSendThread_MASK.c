
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef char UCHAR ;
struct TYPE_3__ {long QuadPart; } ;
typedef int PVOID ;
typedef int * PKEVENT ;
typedef char* NTSTATUS ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int KEVENT ;
typedef int Data ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,int ,int ,int ,int ,int ,TYPE_1__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,char*) ;
 int VAR_9 ;
 char* FUNC_7 (int ,int ,int ,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;

VOID FUNC_8(
    PVOID VAR_12)







{
 KEVENT VAR_13;
 PKEVENT VAR_14[2];
 LARGE_INTEGER VAR_15;
 NTSTATUS VAR_16 = VAR_6;
 UCHAR VAR_17[40] = "Testing one, two, three, ...";

 if (!VAR_5)
  {
   VAR_15.QuadPart = 10000000L;
   VAR_15.QuadPart *= 2;
   VAR_15.QuadPart = -(VAR_15.QuadPart);

   FUNC_1(&VAR_13, VAR_8, VAR_1);

   VAR_14[0] = &VAR_7;
   VAR_14[1] = &VAR_13;

   while (FUNC_4(VAR_16))
    {

      FUNC_3( 2, (PVOID)VAR_14, VAR_11, VAR_0, VAR_2, VAR_1, &VAR_15, ((void*)0));

     if (FUNC_2(&VAR_7) != 0)
      {
       FUNC_6(VAR_4, ("Received terminate signal...\n"));
       break;
      }

     FUNC_0("Sending data - '%s'\n", VAR_17);

     VAR_16 = FUNC_7(VAR_10, VAR_9, VAR_3, VAR_17, sizeof(VAR_17));

     if (!FUNC_4(VAR_16))
      FUNC_0("Failed sending data (Status = 0x%X)\n", VAR_16);
    }
  }

 FUNC_6(VAR_4, ("Terminating send thread...\n"));

 FUNC_5(VAR_6);
}
