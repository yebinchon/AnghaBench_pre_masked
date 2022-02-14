
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DefaultContainerData ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;



 int VAR_0 ;



 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (char const*,int *,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_2 ;

 int FUNC_4 (int *,char*,int,int ) ;
 int VAR_3 ;

 int VAR_4 ;
 int FUNC_5 (int ,int ,char*,int,int *,int ,int *,scalar_t__*) ;
 int VAR_5 ;
 int FUNC_6 (char const*,char*,int,char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    static const WCHAR VAR_6[] = {'C','o','n','t','e','n','t','.','I','E','5',0};
    static const WCHAR VAR_7[] = {'H','i','s','t','o','r','y','.','I','E','5',0};
    static const WCHAR VAR_8[] = {0};

    static const WCHAR VAR_9[] = {'U','S','E','R','P','R','O','F','I','L','E',0};
    static const struct
    {
        int nFolder;
        const WCHAR *shpath_suffix;
        const char *cache_prefix;
        DWORD default_entry_type;
    } VAR_10[] =
    {
        { 130, VAR_6, "", 129 },
        { 131, VAR_7, "Visited:", 128 },
        { 132, VAR_8, "Cookie:", 133 },
    };
    DWORD VAR_11;


    if (FUNC_1(VAR_9, ((void*)0), 0) == 0 && FUNC_2() == VAR_1)
    {
        FUNC_0("Environment variable 'USERPROFILE' does not exist!\n");
        return;
    }

    for (VAR_11 = 0; VAR_11 < sizeof(VAR_10) / sizeof(VAR_10[0]); VAR_11++)
    {
        WCHAR VAR_12[VAR_2];
        WCHAR VAR_13[VAR_2];
        int VAR_14, VAR_15;
        BOOL VAR_16;

        if (!FUNC_4(((void*)0), VAR_12, VAR_10[VAR_11].nFolder, VAR_3))
        {
            FUNC_0("Couldn't get path for default container %u\n", VAR_11);
            continue;
        }
        VAR_14 = FUNC_9(VAR_12);
        VAR_15 = FUNC_9(VAR_10[VAR_11].shpath_suffix);

        if (VAR_14 + VAR_15 + 2 > VAR_2)
        {
            FUNC_0("Path too long\n");
            continue;
        }

        VAR_12[VAR_14] = '\\';
        VAR_12[VAR_14+1] = 0;

        FUNC_8(VAR_13, VAR_12);

        if (VAR_15)
        {
            FUNC_7(VAR_12 + VAR_14 + 1, VAR_10[VAR_11].shpath_suffix, (VAR_15 + 1) * sizeof(WCHAR));
            VAR_12[VAR_14 + VAR_15 + 1] = '\\';
            VAR_12[VAR_14 + VAR_15 + 2] = '\0';
        }

        if (!FUNC_5(VAR_0, VAR_4, VAR_12, VAR_14,
                    ((void*)0), 0, ((void*)0), &VAR_16) || VAR_16)
        {
            WCHAR VAR_17[VAR_2];


            if (!(VAR_14 = FUNC_3(VAR_12, VAR_17, VAR_2)) ||
                !FUNC_5(VAR_0, VAR_4, VAR_17, VAR_14,
                    ((void*)0), 0, ((void*)0), &VAR_16) || VAR_16)
                FUNC_0("Can't create container path accessible by ANSI functions\n");
            else
                FUNC_7(VAR_12, VAR_17, (VAR_14+1)*sizeof(WCHAR));
        }

        FUNC_6(VAR_10[VAR_11].cache_prefix, VAR_12,
                VAR_10[VAR_11].default_entry_type, VAR_13);
    }




}
