
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_11__ {char* VendorId; } ;
struct TYPE_10__ {int Offset; } ;
typedef TYPE_1__* PBYTE ;
typedef TYPE_1__ OVERLAPPED ;
typedef TYPE_3__ INQUIRYDATA ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef char CHAR ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,TYPE_3__*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__,TYPE_1__*,int,int*,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int *,int,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,char*,int ) ;

int FUNC_10(void)
{
    HANDLE VAR_7;
    OVERLAPPED VAR_8;

    PBYTE VAR_9 = ((void*)0) ;
    DWORD VAR_10;
    DWORD VAR_11;
    DWORD VAR_12;
    DWORD VAR_13;
    BOOL VAR_14;
    ULONG VAR_15;
    CHAR VAR_16[20];

    INQUIRYDATA VAR_17;


    VAR_15 = 0;
    while (1)
      {
        FUNC_9(VAR_16, "\\\\.\\PHYSICALDRIVE%ld", VAR_15);
 VAR_7 = FUNC_1(VAR_16,
                      VAR_1,
        VAR_0,
        ((void*)0),
        VAR_5,
        0,
        ((void*)0));
 if (VAR_7 == VAR_2)
   {
     if (VAR_15 > 0)
       {
         FUNC_6(VAR_9, 512 * 1024, VAR_4);
       }
     else
       {
         FUNC_8("Cannot open '%s'\n", VAR_16);
       }
     break;
   }
        if (VAR_15 == 0)
   {
            FUNC_8("Transfer Size (kB)           1     2     4     8    16    32    64   128   256\n");
            FUNC_8("Transfer Rate (MB/s)\n");
            FUNC_8("-------------------------------------------------------------------------------\n");

     VAR_9 = FUNC_5(((void*)0), 512 * 1024, VAR_3, VAR_6);
   }
        VAR_14 = FUNC_2(VAR_7, &VAR_17);
        if (VAR_14)
   {
            FUNC_8("%.24s ", VAR_17.VendorId);
   }
 else
   {
     FUNC_8("Disk %ld                   ", VAR_15 + 1);
   }
        VAR_13 = 1024;
        FUNC_7(&VAR_8, 0, sizeof(OVERLAPPED));
 while (VAR_13 <= 256 * 1024)
   {
     FUNC_7(VAR_9, 0, VAR_13);
     VAR_12 = 0;

            VAR_10 = FUNC_3() + 2000;
     while (VAR_10 > FUNC_3())
       {
         VAR_14 = FUNC_4(VAR_7, VAR_9, VAR_13, &VAR_11, &VAR_8);
  if (VAR_14)
    {
      VAR_12 += VAR_11;
      VAR_8.Offset += VAR_11;
    }
       }
     VAR_12 /= 2048;
            FUNC_8("%3ld.%ld ", VAR_12 / 1024, (VAR_12 % 1024) * 10 / 1024);
     VAR_13 *= 2;
   }
        FUNC_8("\n");
 FUNC_0(VAR_7);
 VAR_15++;
      }
    FUNC_8("\n");


    return 0;
}
