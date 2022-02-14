
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef char CHAR ;


 int FUNC_0 (unsigned int,char*,int) ;
 int FUNC_1 (int,int*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (void*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
    WCHAR VAR_0[1024], VAR_1[1024];
    char VAR_2[1024];
    void *VAR_3;
    UINT VAR_4, VAR_5;
    int VAR_6;

    VAR_5 = FUNC_1(0, ((void*)0), 1024);
    FUNC_3(VAR_5, "GetStateText failed\n");

    VAR_3 = ((void*)0);
    VAR_4 = FUNC_1(0, (WCHAR*)&VAR_3, 0);
    FUNC_3(VAR_4 == VAR_5, "got %d, expected %d\n", VAR_4, VAR_5);
    FUNC_3(VAR_3 != ((void*)0), "ptr was not changed\n");

    VAR_4 = FUNC_1(0, VAR_0, 1024);
    FUNC_3(VAR_4 == VAR_5, "got %d, expected %d\n", VAR_4, VAR_5);
    FUNC_3(!FUNC_2(VAR_0, VAR_3, VAR_4*sizeof(WCHAR)), "got %s, expected %s\n",
            FUNC_4(VAR_0, VAR_4), FUNC_4(VAR_3, VAR_4));

    VAR_4 = FUNC_1(0, VAR_0, 1);
    FUNC_3(!VAR_4, "got %d, expected 0\n", VAR_4);
    FUNC_3(!VAR_0[0], "buf[0] = '%c'\n", VAR_0[0]);

    for(VAR_6=0; VAR_6<31; VAR_6++) {
        VAR_4 = FUNC_1(1<<VAR_6, VAR_0, 1024);
        FUNC_3(VAR_4, "%d) GetStateText failed\n", VAR_6);
    }
    VAR_4 = FUNC_1(1u<<31, VAR_0, 1024);
    FUNC_3(!VAR_4, "31) GetStateText succeeded: %d\n", VAR_4);

    VAR_4 = FUNC_1(2, VAR_0, 1024);
    FUNC_3(VAR_4, "GetStateText failed\n");
    VAR_5 = FUNC_1(3, VAR_1, 1024);
    FUNC_3(VAR_5, "GetStateText failed\n");
    FUNC_3(VAR_4 == VAR_5, "got %d, expected %d\n", VAR_5, VAR_4);
    FUNC_3(!FUNC_2(VAR_0, VAR_1, VAR_4*sizeof(WCHAR)),
            "GetStateText(2,...) returned different data than GetStateText(3,...)\n");

    VAR_5 = FUNC_0(0, ((void*)0), 1024);
    FUNC_3(VAR_5, "GetStateText failed\n");

    VAR_3 = ((void*)0);
    VAR_4 = FUNC_0(0, (CHAR*)&VAR_3, 0);
    FUNC_3(!VAR_4, "got %d\n", VAR_4);
    FUNC_3(VAR_3 == ((void*)0), "ptr was changed\n");

    VAR_4 = FUNC_0(0, ((void*)0), 0);
    FUNC_3(VAR_4 == VAR_5, "got %d, expected %d\n", VAR_4, VAR_5);

    VAR_4 = FUNC_0(0, VAR_2, 1024);
    FUNC_3(VAR_4 == VAR_5, "got %d, expected %d\n", VAR_4, VAR_5);

    VAR_4 = FUNC_0(0, VAR_2, 1);
    FUNC_3(!VAR_4, "got %d, expected 0\n", VAR_4);
    FUNC_3(!VAR_2[0], "bufa[0] = '%c'\n", VAR_2[0]);

    for(VAR_6=0; VAR_6<31; VAR_6++) {
        VAR_4 = FUNC_0(1<<VAR_6, VAR_2, 1024);
        FUNC_3(VAR_4, "%d) GetStateText failed\n", VAR_6);
    }
    VAR_4 = FUNC_0(1u<<31, VAR_2, 1024);
    FUNC_3(!VAR_4, "31) GetStateText succeeded: %d\n", VAR_4);
}
