
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef scalar_t__ HANDLE ;
typedef int FILETIME ;
typedef char CHAR ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (char*,int,int ,int *,int ,int ,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,int *,int *,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int VAR_7 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int *,int) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static
void
FUNC_13(void)
{
    UCHAR VAR_8 = 0;
    HANDLE VAR_9;
    CHAR VAR_10[] = "XTestDirTunnelCache";
    CHAR VAR_11[VAR_6];
    FILETIME VAR_12, VAR_13;


    if (FUNC_4(VAR_6, VAR_11) == 0)
    {
        FUNC_12("No test directory available\n");
        return;
    }


    for (; VAR_8 < 10; ++VAR_8)
    {
        VAR_10[0] = '0' + VAR_8;
        if (FUNC_1(VAR_10, ((void*)0)))
        {
            if (FUNC_9(VAR_10) == 0)
            {
                FUNC_7(VAR_10);
                FUNC_12("No test directory available\n");
                return;
            }

            break;
        }
    }

    if (VAR_8 == 10)
    {
        FUNC_12("No test directory available\n");
        return;
    }

    VAR_9 = FUNC_2("file1",
                       VAR_3 | VAR_4,
                       0, ((void*)0),
                       VAR_0,
                       VAR_2,
                       ((void*)0));
    FUNC_11(VAR_9 != VAR_5, "CreateFile() failed\n");
    FUNC_11(FUNC_5(VAR_9, &VAR_12, ((void*)0), ((void*)0)) != VAR_1, "GetFileTime() failed\n");
    FUNC_0(VAR_9);



    FUNC_10(1000);

    VAR_9 = FUNC_2("file2",
                       VAR_3 | VAR_4,
                       0, ((void*)0),
                       VAR_0,
                       VAR_2,
                       ((void*)0));
    FUNC_11(VAR_9 != VAR_5, "CreateFile() failed\n");
    FUNC_0(VAR_9);

    FUNC_11(FUNC_6("file1", "file") != VAR_1, "MoveFile() failed\n");
    FUNC_11(FUNC_6("file2", "file1") != VAR_1, "MoveFile() failed\n");

    VAR_9 = FUNC_2("file1",
                       VAR_3,
                       0, ((void*)0),
                       VAR_7,
                       VAR_2,
                       ((void*)0));
    FUNC_11(VAR_9 != VAR_5, "CreateFile() failed\n");
    FUNC_11(FUNC_5(VAR_9, &VAR_13, ((void*)0), ((void*)0)) != VAR_1, "GetFileTime() failed\n");
    FUNC_0(VAR_9);

    FUNC_11(FUNC_8(&VAR_12, &VAR_13, sizeof(FILETIME)) == sizeof(FILETIME), "Tunnel cache failed\n");

    FUNC_3("file2");
    FUNC_3("file1");
    FUNC_3("file");

    FUNC_9(VAR_11);
    FUNC_7(VAR_10);
}
