
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int dwOSVersionInfoSize; char* szCSDVersion; int dwPlatformId; int dwMajorVersion; int dwMinorVersion; int wSuiteMask; int dwBuildNumber; int wProductType; } ;
typedef int OSVERSIONINFOW ;
typedef TYPE_1__ OSVERSIONINFOEXW ;
typedef int OSVERSIONINFO ;
typedef char* LPWSTR ;
typedef int LPBYTE ;
typedef int LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int *) ;
 int FUNC_3 (int ,char*,int *,int *,int ,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static void
FUNC_9(void)
{

  OSVERSIONINFOEXW VAR_11;
  BOOL VAR_12;
  HKEY VAR_13;
  WCHAR VAR_14[160];
  DWORD VAR_15;
  LONG VAR_16;
  unsigned VAR_17;
  LPWSTR VAR_18;




  FUNC_4(&VAR_11, sizeof(OSVERSIONINFOEXW));
  VAR_11.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEXW);

  VAR_12 = FUNC_0((OSVERSIONINFOW *) &VAR_11);
  if (! VAR_12)
    {
      VAR_11.dwOSVersionInfoSize = sizeof (OSVERSIONINFO);
      if (! FUNC_0((OSVERSIONINFOW *) &VAR_11))
        {
          return;
        }
    }

  VAR_18 = VAR_11.szCSDVersion + FUNC_7(VAR_11.szCSDVersion) + 1;
  VAR_17 = sizeof(VAR_11.szCSDVersion) / sizeof(VAR_11.szCSDVersion[0]) -
                  (VAR_18 - VAR_11.szCSDVersion);
  if (7 <= VAR_17 && 0 == FUNC_5(VAR_18, L"ReactOS", 7))
    {
      FUNC_8(L"Running on %s\n", VAR_18);
      return;
    }

  switch (VAR_11.dwPlatformId)
    {

      case 130:


        if (5 == VAR_11.dwMajorVersion && 2 == VAR_11.dwMinorVersion)
          {
            FUNC_8(L"Running on Microsoft Windows Server 2003, ");
          }
        else if (5 == VAR_11.dwMajorVersion && 1 == VAR_11.dwMinorVersion)
          {
            FUNC_8(L"Running on Microsoft Windows XP ");
          }
        else if (5 == VAR_11.dwMajorVersion && 0 == VAR_11.dwMinorVersion)
          {
            FUNC_8(L"Running on Microsoft Windows 2000 ");
          }
        else if (VAR_11.dwMajorVersion <= 4 )
          {
            FUNC_8(L"Running on Microsoft Windows NT ");
          }


        if (VAR_12)
          {

            if (VAR_6 == VAR_11.wProductType)
              {
                if (4 == VAR_11.dwMajorVersion)
                  {
                    FUNC_8(L"Workstation 4.0 ");
                  }
                else if (0 != (VAR_11.wSuiteMask & VAR_10))
                  {
                    FUNC_8(L"Home Edition ");
                  }
                else
                  {
                    FUNC_8(L"Professional ");
                  }
              }


            else if (VAR_5 == VAR_11.wProductType ||
                     VAR_4 == VAR_11.wProductType)
              {
                if (5 == VAR_11.dwMajorVersion && 2 == VAR_11.dwMinorVersion)
                  {
                    if (0 != (VAR_11.wSuiteMask & VAR_8))
                      {
                        FUNC_8(L"Datacenter Edition ");
                      }
                    else if (0 != (VAR_11.wSuiteMask & VAR_9))
                      {
                        FUNC_8(L"Enterprise Edition ");
                      }
                    else if (VAR_7 == VAR_11.wSuiteMask)
                      {
                        FUNC_8(L"Web Edition ");
                      }
                    else
                      {
                        FUNC_8(L"Standard Edition ");
                      }
                  }

                else if (5 == VAR_11.dwMajorVersion && 0 == VAR_11.dwMinorVersion)
                  {
                    if (0 != (VAR_11.wSuiteMask & VAR_8))
                      {
                        FUNC_8(L"Datacenter Server ");
                      }
                    else if (0 != (VAR_11.wSuiteMask & VAR_9))
                      {
                        FUNC_8(L"Advanced Server " );
                      }
                    else
                      {
                        FUNC_8(L"Server " );
                      }
                  }

                else
                  {
                    if (0 != (VAR_11.wSuiteMask & VAR_9))
                      {
                        FUNC_8(L"Server 4.0, Enterprise Edition ");
                      }
                    else
                      {
                        FUNC_8(L"Server 4.0 ");
                      }
                  }
              }
          }
        else
          {
            VAR_15 = 160;

            VAR_16 = FUNC_2(VAR_2,
                                L"SYSTEM\\CurrentControlSet\\Control\\ProductOptions",
                                0, VAR_3, &VAR_13);
            if (VAR_1 != VAR_16)
              {
                return;
              }

            VAR_16 = FUNC_3(VAR_13, L"ProductType", ((void*)0), ((void*)0),
                                   (LPBYTE) VAR_14, &VAR_15);
            if (VAR_1 != VAR_16 || 160 < VAR_15)
              {
                return;
              }

            FUNC_1(VAR_13);

            if (0 == FUNC_6(L"WINNT", VAR_14))
              {
                FUNC_8(L"Workstation ");
              }
            else if (0 == FUNC_6(L"LANMANNT", VAR_14))
              {
                FUNC_8(L"Server ");
              }
            else if (0 == FUNC_6(L"SERVERNT", VAR_14))
              {
                FUNC_8(L"Advanced Server ");
              }

            FUNC_8(L"%d.%d ", VAR_11.dwMajorVersion, VAR_11.dwMinorVersion);
          }



        if (4 == VAR_11.dwMajorVersion &&
            0 == FUNC_6(VAR_11.szCSDVersion, L"Service Pack 6"))
          {

            VAR_16 = FUNC_2(VAR_2,
                                L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Hotfix\\Q246009",
                                0, VAR_3, &VAR_13);
            if (VAR_1 == VAR_16)
              {
                FUNC_8(L"Service Pack 6a (Build %d)\n", VAR_11.dwBuildNumber & 0xFFFF);
              }
            else
              {
                FUNC_8(L"%s (Build %d)\n",
                        VAR_11.szCSDVersion,
                        VAR_11.dwBuildNumber & 0xFFFF);
              }

            FUNC_1(VAR_13);
          }
        else
          {
            FUNC_8(L"%s (Build %d)\n",
                    VAR_11.szCSDVersion,
                    VAR_11.dwBuildNumber & 0xFFFF);
          }


        break;


      case 129:

        if (4 == VAR_11.dwMajorVersion && 0 == VAR_11.dwMinorVersion)
          {
            FUNC_8(L"Running on Microsoft Windows 95 ");
            if (L'C' == VAR_11.szCSDVersion[1] || L'B' == VAR_11.szCSDVersion[1])
              {
                FUNC_8(L"OSR2");
              }
          }

        else if (4 == VAR_11.dwMajorVersion && 10 == VAR_11.dwMinorVersion)
          {
            FUNC_8(L"Running on Microsoft Windows 98 ");
            if (L'A' == VAR_11.szCSDVersion[1])
              {
                FUNC_8(L"SE");
              }
          }

        else if (4 == VAR_11.dwMajorVersion && 90 == VAR_11.dwMinorVersion)
          {
            FUNC_8(L"Running on Microsoft Windows Millennium Edition");
          }
        FUNC_8(L"\n");
        break;

      case 128:

        FUNC_8(L"Running on Microsoft Win32s\n");
        break;
    }
}
