
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int wMilliseconds; int wSecond; int wMinute; int wHour; int wYear; int wDay; int wMonth; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int PBYTE ;
typedef int * HKEY ;
typedef int GlobalFifoEnable ;
typedef int FILETIME ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,int ,int *,int ,int ,int *,int **,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,char*,int ,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int *,scalar_t__*,int *,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int *) ;
 scalar_t__ FUNC_5 (int *,char*,int *,scalar_t__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (int *,char*,int ,int ,int *,int) ;
 int FUNC_7 (char*,...) ;

void FUNC_8(void)
{
  HKEY VAR_6 = ((void*)0),VAR_7;
  DWORD VAR_8;
  DWORD VAR_9;
  DWORD VAR_10, VAR_11;
  BOOL VAR_12;
  HKEY VAR_13;
  DWORD VAR_14;
  WCHAR VAR_15[260];
  DWORD VAR_16;
  DWORD VAR_17;
  DWORD VAR_18;
  DWORD VAR_19;
  DWORD VAR_20;
  DWORD VAR_21;
  DWORD VAR_22;
  DWORD VAR_23;
  FILETIME VAR_24;
  SYSTEMTIME VAR_25;

  FUNC_7 ("RegOpenKeyExW HKLM\\System\\Setup: ");
  VAR_9 = FUNC_3(VAR_1,
                           L"System\\Setup",
                           0,
                           VAR_2,
                           &VAR_7);
  FUNC_7("\t\tdwError =%x\n",VAR_9);
  if (VAR_9 == VAR_0)
    {
      FUNC_7("RegQueryInfoKeyW: ");
      VAR_16=260;
      VAR_9 = FUNC_4(VAR_7
 , VAR_15, &VAR_16, ((void*)0), &VAR_17
 , &VAR_18, &VAR_19, &VAR_20, &VAR_21
 , &VAR_22, &VAR_23, &VAR_24);
      FUNC_7 ("\t\t\t\tdwError %x\n", VAR_9);
      FUNC_0(&VAR_24,&VAR_25);
      FUNC_7 ("\tnb of subkeys=%d,last write : %d/%d/%d %d:%02.2d'%02.2d''%03.3d\n",VAR_17
  ,VAR_25.wMonth
  ,VAR_25.wDay
  ,VAR_25.wYear
  ,VAR_25.wHour
  ,VAR_25.wMinute
  ,VAR_25.wSecond
  ,VAR_25.wMilliseconds
  );
    }


   FUNC_7 ("RegOpenKeyExW: ");
   VAR_9 = FUNC_3(VAR_1,
                           L"System\\ControlSet001\\Services\\Serial",
                           0,
                           VAR_2,
                           &VAR_6);
   FUNC_7 ("\t\t\t\t\tdwError %x\n", VAR_9);
   VAR_11 = sizeof(VAR_12);
   if (VAR_9 == VAR_0)
   {
     FUNC_7 ("RegQueryValueExW: ");
     VAR_9 = FUNC_5(VAR_6,
                        L"ForceFifoEnable",
                        ((void*)0),
                        &VAR_10,
                        (PBYTE)&VAR_12,
                        &VAR_11);
    FUNC_7("\t\t\t\tdwError =%x\n",VAR_9);
    if (VAR_9 == 0)
    {
        FUNC_7("\tValue:DT=%d, DS=%d, Value=%d\n"
  ,VAR_10
  ,VAR_11
  ,VAR_12);
    }
   }
   FUNC_7 ("RegCreateKeyExW: ");
   VAR_9 = FUNC_2(VAR_6,
                         L"Parameters\\Serial001",
                         0,
                         ((void*)0),
                         0,
                         VAR_2,
                         ((void*)0),
                         &VAR_13,
                         &VAR_14
                        );
   FUNC_7 ("\t\t\t\tdwError %x\n", VAR_9);

   FUNC_7 ("RegCreateKeyExW: ");
   VAR_9 = FUNC_2 (VAR_1,
                              L"Software\\test4reactos\\test",
                              0,
                              ((void*)0),
                              VAR_3,
                              VAR_2,
                              ((void*)0),
                              &VAR_6,
                              &VAR_8);

   FUNC_7 ("\t\t\t\tdwError %x ", VAR_9);
   FUNC_7 ("dwDisposition %x\n", VAR_8);
   if (VAR_9 == VAR_0)
   {
     FUNC_7 ("RegSetValueExW: ");
     VAR_9 = FUNC_6 (VAR_6,
                             L"TestValue",
                             0,
                             VAR_5,
                             (BYTE*)L"TestString",
                             20);

     FUNC_7 ("\t\t\t\tdwError %x\n", VAR_9);
     FUNC_7 ("RegCloseKey: ");
     VAR_9 = FUNC_1 (VAR_6);
     FUNC_7 ("\t\t\t\t\tdwError %x\n", VAR_9);
   }
   FUNC_7 ("\n\n");

   VAR_6 = ((void*)0);

   FUNC_7 ("RegCreateKeyExW: ");
   VAR_9 = FUNC_2 (VAR_1,
                              L"software\\Test",
                              0,
                              ((void*)0),
                              VAR_4,
                              VAR_2,
                              ((void*)0),
                              &VAR_6,
                              &VAR_8);

   FUNC_7 ("\t\t\t\tdwError %x ", VAR_9);
   FUNC_7 ("dwDisposition %x\n", VAR_8);


   if (VAR_9 == VAR_0)
   {
     FUNC_7("RegQueryInfoKeyW: ");
     VAR_16=260;
     VAR_9 = FUNC_4(VAR_6
 , VAR_15, &VAR_16, ((void*)0), &VAR_17
 , &VAR_18, &VAR_19, &VAR_20, &VAR_21
 , &VAR_22, &VAR_23, &VAR_24);
     FUNC_7 ("\t\t\t\tdwError %x\n", VAR_9);
     FUNC_0(&VAR_24,&VAR_25);
     FUNC_7 ("\tnb of subkeys=%d,last write : %d/%d/%d %d:%02.2d'%02.2d''%03.3d\n",VAR_17
  ,VAR_25.wMonth
  ,VAR_25.wDay
  ,VAR_25.wYear
  ,VAR_25.wHour
  ,VAR_25.wMinute
  ,VAR_25.wSecond
  ,VAR_25.wMilliseconds
  );
     FUNC_7 ("RegCloseKey: ");
     VAR_9 = FUNC_1 (VAR_6);
     FUNC_7 ("\t\t\t\t\tdwError %x\n", VAR_9);
   }
   FUNC_7 ("\nTests done...\n");
}
