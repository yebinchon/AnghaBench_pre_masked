
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WSADATA ;
typedef char WCHAR ;
struct TYPE_3__ {char* lpName; } ;
typedef int PSERVICEINFO ;
typedef int INT ;
typedef int * HANDLE ;
typedef char* DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ,TYPE_1__*,int ,char**) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,int,int ) ;
 int FUNC_4 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 () ;
 char* FUNC_7 (int ,int *) ;
 int FUNC_8 (int,int **,int ,int ) ;
 int FUNC_9 (char*,char*,char*) ;

__attribute__((used)) static BOOL
FUNC_10(PSERVICEINFO VAR_9)
{
    DWORD VAR_10[VAR_4];
    HANDLE VAR_11[VAR_4];
    WSADATA VAR_12;
    WCHAR VAR_13[256];
    INT VAR_14;
    DWORD VAR_15;

    if ((VAR_15 = FUNC_7(FUNC_4(2, 2), &VAR_12)) != 0)
    {
        FUNC_9(VAR_13, L"WSAStartup() failed : %lu\n", VAR_15);
        FUNC_3(VAR_13, 0, 100, VAR_2);
        return VAR_0;
    }

    FUNC_5(VAR_9, 0, 1);

    FUNC_3(L"\nCreating server Threads", 0, 0, VAR_3);


    for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
    {
        FUNC_9(VAR_13, L"Creating thread for %s server", VAR_6[VAR_14].lpName);
        FUNC_3(VAR_13, 0, 0, VAR_3);

        VAR_11[VAR_14] = FUNC_1(((void*)0),
                                  0,
                                  VAR_7,
                                  &VAR_6[VAR_14],
                                  0,
                                  &VAR_10[VAR_14]);

        if (VAR_11[VAR_14] == ((void*)0))
        {
            FUNC_9(VAR_13, L"\nError creating %s server thread\n", VAR_6[VAR_14].lpName);
            FUNC_3(VAR_13, FUNC_2(), 0, VAR_2);
            return VAR_0;
        }

        FUNC_5(VAR_9, 0, 1);
    }

    FUNC_3(L"Setting service status to running", 0, 0, VAR_3);
    FUNC_5(VAR_9, VAR_5, 0);


    FUNC_8(VAR_4, VAR_11, VAR_8, VAR_1);

    for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
    {
        if (VAR_11[VAR_14] != ((void*)0))
            FUNC_0(VAR_11[VAR_14]);
    }

    FUNC_3(L"Detaching Winsock2", 0, 0, VAR_3);
    FUNC_6();

    return VAR_8;
}
