
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dwFileAttributes; int nFileSizeLow; int nFileSizeHigh; } ;
typedef TYPE_2__ WIN32_FIND_DATA ;
struct TYPE_5__ {int LowPart; int HighPart; } ;
struct TYPE_7__ {int QuadPart; TYPE_1__ u; } ;
typedef int LPTSTR ;
typedef int LONGLONG ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,...) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__,int*,int,int*,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int VAR_11 ;

__attribute__((used)) static BOOL
FUNC_9 (LPTSTR VAR_12, DWORD VAR_13, WIN32_FIND_DATA* VAR_14)
{



    if (FUNC_0(VAR_0))
        return 1;





    if ((VAR_13 & VAR_2) || (VAR_13 & VAR_3))
    {
        if (VAR_14->dwFileAttributes & VAR_6)
        {




            FUNC_5(VAR_12,VAR_5);
        }
    }

    if (VAR_13 & VAR_4)
    {
        HANDLE VAR_15;
        DWORD VAR_16;

        BYTE VAR_17[65536];
        LONGLONG VAR_18;
        LARGE_INTEGER VAR_19;

        VAR_19.u.HighPart = VAR_14->nFileSizeHigh;
        VAR_19.u.LowPart = VAR_14->nFileSizeLow;

        for(VAR_18 = 0; VAR_18 < 65536; VAR_18++)
        {
            VAR_17[VAR_18]=FUNC_8() % 256;
        }
        VAR_15 = FUNC_3 (VAR_12, VAR_8, 0, ((void*)0), VAR_10, VAR_7, ((void*)0));
        if (VAR_15 != VAR_9)
        {
            for(VAR_18 = 0; VAR_18 < (VAR_19.QuadPart - 65536); VAR_18 += 65536)
            {
                FUNC_6 (VAR_15, VAR_17, 65536, &VAR_16, ((void*)0));
                FUNC_2 (FUNC_7("%I64d%% %s\r"),(VAR_18 * (LONGLONG)100)/VAR_19.QuadPart,VAR_11);
            }
            FUNC_6 (VAR_15, VAR_17, (DWORD)(VAR_19.QuadPart - VAR_18), &VAR_16, ((void*)0));
            FUNC_2 (FUNC_7("100%% %s\n"),VAR_11);
            FUNC_1 (VAR_15);
        }
    }

    return FUNC_4 (VAR_12);
}
