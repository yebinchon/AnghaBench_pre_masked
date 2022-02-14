
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int dwMajorVersion; int dwMinorVersion; int wSuiteMask; scalar_t__ wProductType; int szCSDVersion; scalar_t__ dwBuildNumber; } ;
typedef int TCHAR ;
typedef TYPE_1__* LPOSVERSIONINFOEX ;
typedef int DWORD ;


 int FUNC_0 (int *,int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int,int,int,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

VOID
FUNC_5(LPOSVERSIONINFOEX VAR_10, TCHAR * VAR_11, TCHAR * VAR_12, TCHAR * VAR_13, TCHAR * VAR_14, TCHAR * VAR_15)
{

 DWORD VAR_16 = 1024;
 FUNC_0(VAR_11, &VAR_16);



 if(VAR_10->dwMajorVersion == 4)
 {
  FUNC_4(VAR_12, FUNC_1("Microsoft Windows NT 4.0 "));
 }
 else if(VAR_10->dwMajorVersion == 5)
 {
  if(VAR_10->dwMinorVersion == 0)
  {
   FUNC_4(VAR_12, FUNC_1("Microsoft Windows 2000 "));
  }
  else if(VAR_10->dwMinorVersion == 1)
  {
   FUNC_4(VAR_12, FUNC_1("Microsoft Windows XP "));
  }
  else if(VAR_10->dwMinorVersion == 2)
  {
   FUNC_4(VAR_12, FUNC_1("Microsoft Windows Server 2003 "));
  }
 }
 else if(VAR_10->dwMajorVersion == 6)
 {
  FUNC_4(VAR_12, FUNC_1("Microsoft Windows Vista "));
 }
 else
 {
  FUNC_4(VAR_12, FUNC_1("Microsoft Windows "));
 }

 if(VAR_10->wSuiteMask & VAR_3)
  FUNC_3(VAR_12, FUNC_1("Web Edition"));
 if(VAR_10->wSuiteMask & VAR_4)
  FUNC_3(VAR_12, FUNC_1("Datacenter"));
 if(VAR_10->wSuiteMask & VAR_6)
  FUNC_3(VAR_12, FUNC_1("Enterprise"));
 if(VAR_10->wSuiteMask & VAR_5)
  FUNC_3(VAR_12, FUNC_1("Embedded"));
 if(VAR_10->wSuiteMask & VAR_7)
  FUNC_3(VAR_12, FUNC_1("Home Edition"));
 if(VAR_10->wSuiteMask & VAR_9 && VAR_10->wSuiteMask & VAR_8)
  FUNC_3(VAR_12, FUNC_1("Small Bussiness Edition"));


 FUNC_2(VAR_13, FUNC_1("%d.%d Build %d %s"),(int)VAR_10->dwMajorVersion,(int)VAR_10->dwMinorVersion,(int)VAR_10->dwBuildNumber, VAR_10->szCSDVersion);


 if(VAR_10->wProductType == VAR_0)
  FUNC_4(VAR_14, FUNC_1("Domain Controller"));
 else if(VAR_10->wProductType == VAR_1)
  FUNC_4(VAR_14, FUNC_1("Server"));
 else if(VAR_10->wProductType == VAR_2)
  FUNC_4(VAR_14, FUNC_1("Workgroup"));


 FUNC_3(VAR_15, FUNC_1("Not Installed"));

}
