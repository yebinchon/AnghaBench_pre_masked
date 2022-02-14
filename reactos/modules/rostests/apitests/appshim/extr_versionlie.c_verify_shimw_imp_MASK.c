
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int v2 ;
typedef int v1 ;
typedef int WCHAR ;
struct TYPE_9__ {scalar_t__ dwMajorVersion; scalar_t__ dwMinorVersion; scalar_t__ dwBuildNumber; scalar_t__ dwPlatformId; scalar_t__ wServicePackMajor; int wFlags; scalar_t__ wServicePackMinor; } ;
typedef TYPE_1__ VersionLieInfo ;
struct TYPE_11__ {int member_0; int dwOSVersionInfoSize; scalar_t__ dwMajorVersion; scalar_t__ dwMinorVersion; scalar_t__ dwBuildNumber; scalar_t__ dwPlatformId; scalar_t__ wServicePackMajor; scalar_t__ wServicePackMinor; scalar_t__ wSuiteMask; scalar_t__ wProductType; scalar_t__ wReserved; int * szCSDVersion; int member_1; } ;
struct TYPE_10__ {scalar_t__ (* OriginalFunction ) (int ) ;scalar_t__ ReplacementFunction; } ;
typedef TYPE_2__* PHOOKAPI ;
typedef int PCSTR ;
typedef int OSVERSIONINFOW ;
typedef TYPE_3__ OSVERSIONINFOEXW ;
typedef int LPOSVERSIONINFOW ;
typedef scalar_t__ (* GETVERSIONEXWPROC ) (TYPE_3__*) ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,int,...) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int,char*,scalar_t__,scalar_t__,int ,...) ;

__attribute__((used)) static void FUNC_9(PHOOKAPI VAR_3, const VersionLieInfo* VAR_4, PCSTR VAR_5, int VAR_6, int VAR_7)
{
    OSVERSIONINFOEXW VAR_8 = { sizeof(VAR_8), 0 }, VAR_9 = { sizeof(VAR_9), 0 };
    BOOL VAR_10, VAR_11, VAR_12 = VAR_2;

    if (!VAR_6)
    {
        FUNC_5("Skipping implementation tests for %s\n", VAR_5);
        return;
    }

    while (VAR_8)
    {
        VAR_10 = FUNC_0((LPOSVERSIONINFOW)&VAR_8);
        VAR_3->OriginalFunction = FUNC_0;

        VAR_11 = ((GETVERSIONEXWPROC)VAR_3->ReplacementFunction)(&VAR_9);

        if (VAR_7 && VAR_12 && VAR_10 == VAR_2 && VAR_11 == VAR_0)
        {
            FUNC_5("Skipping first check because 0x%x is (falsely) not accepted by the shim %s\n", sizeof(VAR_8), VAR_5);
        }
        else
        {
            FUNC_8(VAR_10 == VAR_11, "Expected ok1 to equal ok2, was: %i, %i for %s(first:%d)\n", VAR_10, VAR_11, VAR_5, VAR_12);
        }
        if (VAR_10 && VAR_11)
        {
            WCHAR VAR_13[128] = { 0 };
            FUNC_8(VAR_8 == VAR_9, "Expected dwOSVersionInfoSize to be equal, was: %u, %u for %s\n", VAR_8, VAR_9, VAR_5);
            FUNC_8(VAR_4->dwMajorVersion == VAR_9, "Expected dwMajorVersion to be equal, was: %u, %u for %s\n", VAR_4->dwMajorVersion, VAR_9, VAR_5);
            FUNC_8(VAR_4->dwMinorVersion == VAR_9, "Expected dwMinorVersion to be equal, was: %u, %u for %s\n", VAR_4->dwMinorVersion, VAR_9, VAR_5);
            FUNC_8(VAR_4->dwBuildNumber == VAR_9, "Expected dwBuildNumber to be equal, was: %u, %u for %s\n", VAR_4->dwBuildNumber, VAR_9, VAR_5);
            FUNC_8(VAR_4->dwPlatformId == VAR_9, "Expected dwPlatformId to be equal, was: %u, %u for %s\n", VAR_4->dwPlatformId, VAR_9, VAR_5);

            if (VAR_4->wServicePackMajor)
                FUNC_1(VAR_13, FUNC_3(VAR_13), L"Service Pack %u", VAR_4->wServicePackMajor);
            FUNC_8(FUNC_4(VAR_13, VAR_9) == 0, "Expected szCSDVersion to be equal, was: %s, %s for %s\n", FUNC_7(VAR_13), FUNC_7(VAR_9), VAR_5);

            if (VAR_8 == sizeof(OSVERSIONINFOEXW))
            {
                if (!(VAR_4->wFlags & VAR_1))
                {
                    FUNC_8(VAR_4->wServicePackMajor == VAR_9, "Expected wServicePackMajor to be equal, was: %i, %i for %s\n", VAR_4->wServicePackMajor, VAR_9, VAR_5);
                    FUNC_8(VAR_4->wServicePackMinor == VAR_9, "Expected wServicePackMinor to be equal, was: %i, %i for %s\n", VAR_4->wServicePackMinor, VAR_9, VAR_5);
                }
                else
                {
                    FUNC_8(VAR_8 == VAR_9, "Expected wServicePackMajor to be equal, was: %i, %i for %s\n", VAR_8, VAR_9, VAR_5);
                    FUNC_8(VAR_8 == VAR_9, "Expected wServicePackMinor to be equal, was: %i, %i for %s\n", VAR_8, VAR_9, VAR_5);
                }
                FUNC_8(VAR_8 == VAR_9, "Expected wSuiteMask to be equal, was: %i, %i for %s\n", VAR_8, VAR_9, VAR_5);
                FUNC_8(VAR_8 == VAR_9, "Expected wProductType to be equal, was: %i, %i for %s\n", VAR_8, VAR_9, VAR_5);
                FUNC_8(VAR_8 == VAR_9, "Expected wReserved to be equal, was: %i, %i for %s\n", VAR_8, VAR_9, VAR_5);
            }
            else
            {
                FUNC_8(VAR_8 == 0 && VAR_9 == 0, "Expected wServicePackMajor to be 0, was: %i, %i for %s\n", VAR_8, VAR_9, VAR_5);
                FUNC_8(VAR_8 == 0 && VAR_9 == 0, "Expected wServicePackMinor to be 0, was: %i, %i for %s\n", VAR_8, VAR_9, VAR_5);
                FUNC_8(VAR_8 == 0 && VAR_9 == 0, "Expected wSuiteMask to be 0, was: %i, %i for %s\n", VAR_8, VAR_9, VAR_5);
                FUNC_8(VAR_8 == 0 && VAR_9 == 0, "Expected wProductType to be 0, was: %i, %i for %s\n", VAR_8, VAR_9, VAR_5);
                FUNC_8(VAR_8 == 0 && VAR_9 == 0, "Expected wReserved to be 0, was: %i, %i for %s\n", VAR_8, VAR_9, VAR_5);
            }
        }

        FUNC_2(&VAR_8, sizeof(VAR_8));
        FUNC_2(&VAR_9, sizeof(VAR_9));
        if (VAR_8 == sizeof(OSVERSIONINFOEXW))
            VAR_8 = VAR_9 = sizeof(OSVERSIONINFOW);
        VAR_12 = VAR_0;
    }
}
