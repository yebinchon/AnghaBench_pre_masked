
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef scalar_t__ ULONG ;
struct TYPE_7__ {scalar_t__ DataSize; scalar_t__ MessageSize; } ;
struct TYPE_6__ {TYPE_4__ Header; scalar_t__ Data; } ;
typedef TYPE_1__ SECURITY_QUALITY_OF_SERVICE ;
typedef int NTSTATUS ;
typedef int LPC_MESSAGE ;
typedef TYPE_1__ LPC_MAX_MESSAGE ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 char* VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int *,TYPE_1__*,int ,int ,int ,int *,scalar_t__*) ;
 int FUNC_4 (int,TYPE_4__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (char*,char*,...) ;
 int FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

int FUNC_11(int VAR_5, char* VAR_6[])
{
   UNICODE_STRING VAR_7 = FUNC_5(VAR_4);
   NTSTATUS VAR_8;
   HANDLE VAR_9;
   LPC_MAX_MESSAGE VAR_10;
   ULONG VAR_11;
   ULONG VAR_12 = 0;
   SECURITY_QUALITY_OF_SERVICE VAR_13;

   FUNC_8("%s: Lpc test client\n", VAR_2);

   FUNC_8("%s: Connecting to port \"%s\"...\n", VAR_2, VAR_3);
   VAR_12 = 0;
   FUNC_7 (& VAR_13, sizeof VAR_13);
   VAR_8 = FUNC_3(&VAR_9,
     &VAR_7,
     & VAR_13,
     0,
     0,
     0,
     ((void*)0),
     &VAR_12);
   if (!FUNC_1(VAR_8))
     {
 FUNC_8("%s: NtConnectPort() failed with status = 0x%08X.\n", VAR_2, VAR_8);
 return VAR_0;
     }

   FUNC_8("%s: Connected to \"%s\" with anonymous port 0x%x.\n", VAR_2, VAR_3, VAR_9);

   FUNC_7(& VAR_10, sizeof VAR_10);
   FUNC_9(VAR_10.Data, FUNC_0());
   VAR_10.Header.DataSize = FUNC_10(VAR_10.Data);
   VAR_10.Header.MessageSize = sizeof(LPC_MESSAGE) +
     VAR_10.Header.DataSize;

   FUNC_8("%s: Sending to port 0x%x message \"%s\"...\n",
          VAR_2,
          VAR_9,
   (char *) VAR_10.Data);
   VAR_8 = FUNC_4(VAR_9,
     &VAR_10.Header);
   if (!FUNC_1(VAR_8))
     {
 FUNC_8("%s: NtRequestPort(0x%x) failed with status = 0x%8X.\n",
               VAR_2,
               VAR_9,
        VAR_8);
 return VAR_0;
     }

   FUNC_8("%s: Sending datagram to port 0x%x succeeded.\n", VAR_2, VAR_9);

   FUNC_6(2000);

   FUNC_8("%s: Disconnecting...", VAR_2);
   FUNC_2 (VAR_9);

   return VAR_1;
}
