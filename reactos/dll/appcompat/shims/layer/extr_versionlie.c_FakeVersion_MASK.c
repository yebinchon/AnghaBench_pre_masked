
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dwPlatformId; int wServicePackMinor; int wServicePackMajor; int szCSDVersionW; int szCSDVersionA; int dwBuildNumber; int dwMinorVersion; int dwMajorVersion; } ;
typedef TYPE_1__ VersionLieInfo ;
struct TYPE_8__ {int dwOSVersionInfoSize; scalar_t__ dwPlatformId; int wServicePackMinor; int wServicePackMajor; int szCSDVersion; int dwBuildNumber; int dwMinorVersion; int dwMajorVersion; } ;
struct TYPE_7__ {int dwOSVersionInfoSize; int wServicePackMinor; int wServicePackMajor; int szCSDVersion; } ;
typedef int OSVERSIONINFOW ;
typedef int OSVERSIONINFOEXW ;
typedef int OSVERSIONINFOEXA ;
typedef int OSVERSIONINFOA ;
typedef TYPE_2__* LPOSVERSIONINFOEXW ;
typedef TYPE_3__* LPOSVERSIONINFOEXA ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

BOOL FUNC_3(LPOSVERSIONINFOEXA VAR_3, VersionLieInfo* VAR_4)
{
    if (VAR_3->dwOSVersionInfoSize == sizeof(OSVERSIONINFOEXA) || VAR_3->dwOSVersionInfoSize == sizeof(OSVERSIONINFOA) ||
        VAR_3->dwOSVersionInfoSize == sizeof(OSVERSIONINFOEXW) || VAR_3->dwOSVersionInfoSize == sizeof(OSVERSIONINFOW))
    {
        VAR_3->dwMajorVersion = VAR_4->dwMajorVersion;
        VAR_3->dwMinorVersion = VAR_4->dwMinorVersion;
        VAR_3->dwBuildNumber = VAR_4->dwBuildNumber;
        VAR_3->dwPlatformId = VAR_4->dwPlatformId;
        if (VAR_3->dwOSVersionInfoSize == sizeof(OSVERSIONINFOEXA) || VAR_3->dwOSVersionInfoSize == sizeof(OSVERSIONINFOA))
        {
            if (FUNC_0(FUNC_1(VAR_3->szCSDVersion, sizeof(VAR_3->szCSDVersion), VAR_4->szCSDVersionA)))
                return VAR_0;
            if (VAR_3->dwOSVersionInfoSize == sizeof(OSVERSIONINFOEXA) && VAR_4->dwPlatformId != VAR_2)
            {
                VAR_3->wServicePackMajor = VAR_4->wServicePackMajor;
                VAR_3->wServicePackMinor = VAR_4->wServicePackMinor;
            }
        }
        else
        {
            LPOSVERSIONINFOEXW VAR_5 = (LPOSVERSIONINFOEXW)VAR_3;
            if (FUNC_0(FUNC_2(VAR_5->szCSDVersion, sizeof(VAR_5->szCSDVersion), VAR_4->szCSDVersionW)))
                return VAR_0;
            if (VAR_5->dwOSVersionInfoSize == sizeof(OSVERSIONINFOEXW) && VAR_4->dwPlatformId != VAR_2)
            {
                VAR_5->wServicePackMajor = VAR_4->wServicePackMajor;
                VAR_5->wServicePackMinor = VAR_4->wServicePackMinor;
            }
        }
        return VAR_1;
    }
    return VAR_0;
}
