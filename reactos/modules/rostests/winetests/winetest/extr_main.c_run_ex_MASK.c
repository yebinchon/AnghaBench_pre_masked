
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int hProcess; int hThread; } ;
struct TYPE_6__ {scalar_t__ dwFlags; } ;
typedef TYPE_1__ STARTUPINFO ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int *,int ,int ,int *,char const*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int) ;



 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int VAR_6 ;
 int FUNC_10 (char const*,int,int) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_12 (char *VAR_7, const char *VAR_8, const char *VAR_9, DWORD VAR_10)
{
    STARTUPINFO VAR_11;
    PROCESS_INFORMATION VAR_12;
    int VAR_13, VAR_14 = -1;
    DWORD VAR_15, VAR_16;

    FUNC_4 (&VAR_11);
    VAR_11.dwFlags = 0;

    if (VAR_8) {
        VAR_13 = FUNC_10 (VAR_8, VAR_2 | VAR_1, 0666);
        if (-1 == VAR_13)
            FUNC_11 (VAR_4, "Can't open '%s': %d", VAR_8, VAR_6);
        VAR_14 = FUNC_8 (1);
        if (-1 == VAR_14)
            FUNC_11 (VAR_4, "Can't save stdout: %d", VAR_6);
        if (-1 == FUNC_9 (VAR_13, 1))
            FUNC_11 (VAR_4, "Can't redirect stdout: %d", VAR_6);
        FUNC_7 (VAR_13);
    }

    if (!FUNC_1 (((void*)0), VAR_7, ((void*)0), ((void*)0), VAR_5, VAR_0,
                         ((void*)0), VAR_9, &VAR_11, &VAR_12)) {
        VAR_16 = -2;
    } else {
        FUNC_0 (VAR_12.hThread);
        VAR_15 = FUNC_6 (VAR_12.hProcess, VAR_10);
        if (VAR_15 == 129) {
            FUNC_2 (VAR_12.hProcess, &VAR_16);
        } else {
            switch (VAR_15) {
            case 130:
                FUNC_11 (VAR_3, "Wait for '%s' failed: %d", VAR_7,
                        FUNC_3 ());
                break;
            case 128:
                FUNC_11 (VAR_3, "Process '%s' timed out.", VAR_7);
                break;
            default:
                FUNC_11 (VAR_3, "Wait returned %d", VAR_15);
            }
            VAR_16 = VAR_15;
            if (!FUNC_5 (VAR_12.hProcess, 257))
                FUNC_11 (VAR_3, "TerminateProcess failed: %d",
                        FUNC_3 ());
            VAR_15 = FUNC_6 (VAR_12.hProcess, 5000);
            switch (VAR_15) {
            case 130:
                FUNC_11 (VAR_3,
                        "Wait for termination of '%s' failed: %d",
                        VAR_7, FUNC_3 ());
                break;
            case 129:
                break;
            case 128:
                FUNC_11 (VAR_3, "Can't kill process '%s'", VAR_7);
                break;
            default:
                FUNC_11 (VAR_3, "Waiting for termination: %d",
                        VAR_15);
            }
        }
        FUNC_0 (VAR_12.hProcess);
    }

    if (VAR_8) {
        FUNC_7 (1);
        if (-1 == FUNC_9 (VAR_14, 1))
            FUNC_11 (VAR_4, "Can't recover stdout: %d", VAR_6);
        FUNC_7 (VAR_14);
    }
    return VAR_16;
}
