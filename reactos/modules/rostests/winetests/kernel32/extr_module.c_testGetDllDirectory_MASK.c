
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dll_directories ;
typedef char WCHAR ;
typedef int DWORD ;
typedef char CHAR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,int,int) ;
 int FUNC_2 (int,char*,int,...) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    CHAR VAR_1[VAR_0];
    WCHAR VAR_2[VAR_0];
    DWORD VAR_3, VAR_4;
    int VAR_5;
    static const char *VAR_6[] =
    {
        "",
        "C:\\Some\\Path",
        "C:\\Some\\Path\\",
        "Q:\\A\\Long\\Path with spaces that\\probably\\doesn't exist!",
    };
    const int VAR_7 = sizeof(VAR_6) / sizeof(VAR_6[0]);

    if (!&FUNC_3 || !&FUNC_4)
    {
        FUNC_9("GetDllDirectory not available\n");
        return;
    }
    if (!&FUNC_5)
    {
        FUNC_9("SetDllDirectoryA not available\n");
        return;
    }

    for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
    {
        VAR_3 = FUNC_8(VAR_6[VAR_5]);
        if (!FUNC_5(VAR_6[VAR_5]))
        {
            FUNC_6("i=%d, SetDllDirectoryA failed\n", VAR_5);
            continue;
        }


        VAR_4 = FUNC_3(0, ((void*)0));
        FUNC_2(VAR_4 == VAR_3 + 1, "Expected %u, got %u\n", VAR_3 + 1, VAR_4);

        VAR_4 = FUNC_4(0, ((void*)0));
        FUNC_2(VAR_4 == VAR_3 + 1, "Expected %u, got %u\n", VAR_3 + 1, VAR_4);


        VAR_1[VAR_3] = 'A';
        VAR_1[VAR_3 + 1] = 'A';
        VAR_4 = FUNC_3(VAR_3 + 1, VAR_1);
        FUNC_2(VAR_4 == VAR_3 || FUNC_0(VAR_4 + 1 == VAR_3) ,
           "i=%d, Expected %u(+1), got %u\n", VAR_5, VAR_3, VAR_4);
        FUNC_2(VAR_1[VAR_3 + 1] == 'A', "i=%d, Buffer overflow\n", VAR_5);
        FUNC_2(FUNC_7(VAR_1, VAR_6[VAR_5]) == 0, "i=%d, Wrong path returned: '%s'\n", VAR_5, VAR_1);

        VAR_2[VAR_3] = 'A';
        VAR_2[VAR_3 + 1] = 'A';
        VAR_4 = FUNC_4(VAR_3 + 1, VAR_2);
        FUNC_2(VAR_4 == VAR_3, "i=%d, Expected %u, got %u\n", VAR_5, VAR_3, VAR_4);
        FUNC_2(VAR_2[VAR_3 + 1] == 'A', "i=%d, Buffer overflow\n", VAR_5);
        FUNC_2(FUNC_1(VAR_6[VAR_5], VAR_2, VAR_3, VAR_3),
           "i=%d, Wrong path returned: %s\n", VAR_5, FUNC_10(VAR_2));



        VAR_1[0] = 'A';
        VAR_4 = FUNC_3(0, VAR_1);
        FUNC_2(VAR_4 == VAR_3 + 1, "i=%d, Expected %u, got %u\n", VAR_5, VAR_3 + 1, VAR_4);

        VAR_2[0] = 'A';
        VAR_4 = FUNC_4(0, VAR_2);
        FUNC_2(VAR_4 == VAR_3 + 1, "i=%d, Expected %u, got %u\n", VAR_5, VAR_3 + 1, VAR_4);
        FUNC_2(VAR_2[0] == 0 ||
           FUNC_0(VAR_2[0] == 'A'), "i=%d, Buffer overflow\n", VAR_5);


        VAR_1[0] = 'A';
        VAR_4 = FUNC_3(VAR_3, VAR_1);
        FUNC_2(VAR_4 == VAR_3 + 1, "i=%d, Expected %u, got %u\n", VAR_5, VAR_3 + 1, VAR_4);
        if (VAR_3 != 0)
            FUNC_2(VAR_1[0] == 0, "i=%d, Buffer not null terminated\n", VAR_5);

        VAR_2[0] = 'A';
        VAR_4 = FUNC_4(VAR_3, VAR_2);
        FUNC_2(VAR_4 == VAR_3 + 1, "i=%d, Expected %u, got %u\n", VAR_5, VAR_3 + 1, VAR_4);
        FUNC_2(VAR_2[0] == 0 ||
           FUNC_0(VAR_2[0] == 'A'), "i=%d, Buffer overflow\n", VAR_5);

        if (0)
        {


            VAR_4 = FUNC_3(VAR_3, ((void*)0));
            FUNC_2(VAR_4 == VAR_3 + 1, "i=%d, Expected %u, got %u\n", VAR_5, VAR_3 + 1, VAR_4);

            VAR_4 = FUNC_4(VAR_3, ((void*)0));
            FUNC_2(VAR_4 == VAR_3 + 1, "i=%d, Expected %u, got %u\n", VAR_5, VAR_3 + 1, VAR_4);
        }
    }


    FUNC_5(((void*)0));
}
