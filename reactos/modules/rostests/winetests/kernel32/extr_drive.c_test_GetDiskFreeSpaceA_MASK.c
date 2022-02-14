
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
typedef scalar_t__ UINT ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int*,int*,int*,int*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_7 (char*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(void)
{
    BOOL VAR_5;
    DWORD VAR_6, VAR_7, VAR_8, VAR_9;
    char VAR_10[] = "?:\\";
    DWORD VAR_11;

    VAR_5 = FUNC_0(((void*)0), &VAR_6, &VAR_7, &VAR_8, &VAR_9);
    FUNC_5(VAR_5, "GetDiskFreeSpaceA error %d\n", FUNC_2());

    VAR_5 = FUNC_0("", &VAR_6, &VAR_7, &VAR_8, &VAR_9);
    FUNC_5(!VAR_5 && (FUNC_2() == VAR_4 || FUNC_2() == VAR_3),
       "GetDiskFreeSpaceA(\"\"): ret=%d GetLastError=%d\n",
       VAR_5, FUNC_2());

    VAR_5 = FUNC_0("\\", &VAR_6, &VAR_7, &VAR_8, &VAR_9);
    FUNC_5(VAR_5, "GetDiskFreeSpaceA error %d\n", FUNC_2());

    VAR_5 = FUNC_0("/", &VAR_6, &VAR_7, &VAR_8, &VAR_9);
    FUNC_5(VAR_5, "GetDiskFreeSpaceA error %d\n", FUNC_2());

    VAR_11 = FUNC_3();
    FUNC_5(VAR_11 != 0, "GetLogicalDrives error %d\n", FUNC_2());

    for (VAR_10[0] = 'A'; VAR_10[0] <= 'Z'; VAR_10[0]++)
    {
        UINT VAR_12 = FUNC_1(VAR_10);



        if (VAR_12 != VAR_1 && VAR_12 != VAR_0)
        {
            VAR_5 = FUNC_0(VAR_10, &VAR_6, &VAR_7, &VAR_8, &VAR_9);
            if (!(VAR_11 & 1))
                FUNC_5(!VAR_5 && (FUNC_2() == VAR_4 || FUNC_2() == VAR_2),
                   "GetDiskFreeSpaceA(%s): ret=%d GetLastError=%d\n",
                   VAR_10, VAR_5, FUNC_2());
            else
            {

                if (!VAR_5)


                    FUNC_7("GetDiskFreeSpaceA(%s) failed with %d\n", VAR_10, FUNC_2());

                if( FUNC_4() & 0x80000000)

                    FUNC_5( VAR_9 <= 65535,
                            "total clusters is %d > 65535\n", VAR_9);
                else if (&FUNC_6) {

                    ULARGE_INTEGER VAR_13, VAR_14, VAR_15;

                    VAR_14.QuadPart = VAR_6;
                    VAR_14.QuadPart = (VAR_14.QuadPart * VAR_7) * VAR_9;
                    VAR_5 = FUNC_6( VAR_10, &VAR_15, &VAR_13, ((void*)0));

                    if (!VAR_5)


                        FUNC_7("GetDiskFreeSpaceExA(%s) failed with %d\n", VAR_10, FUNC_2());

                    FUNC_5( VAR_7 == 0 ||
                        VAR_13.QuadPart <= VAR_14.QuadPart,
                        "GetDiskFreeSpaceA should report at least as much bytes on disk %s as GetDiskFreeSpaceExA\n", VAR_10);
                }
            }
        }
        VAR_11 >>= 1;
    }
}
