
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPBYTE ;
typedef int LONG ;
typedef int HKEY ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char const*,int ,int *,int ,int,int *,int *,int *) ;
 int FUNC_2 (int ,char*,int ,int,int *) ;
 int FUNC_3 (int ,int *,int ,int ,int ,scalar_t__) ;
 char* VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*,char const*,...) ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (int ,char*,char const*) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (char const*) ;

__attribute__((used)) static void FUNC_11(const char* VAR_9, const char* VAR_10,
                                 int VAR_11, const char* VAR_12, const char *VAR_13,
                                 const char *VAR_14, const char *VAR_15,
                                 const char *VAR_16)
{
    HKEY VAR_17, VAR_18, VAR_19;
    char VAR_20[VAR_4];
    char* VAR_21;
    LONG VAR_22;

    FUNC_9(VAR_7, " Assoc ");
    FUNC_8(VAR_7, "class", VAR_9);
    FUNC_8(VAR_7, "verb", VAR_10);
    FUNC_7(VAR_20, "%d", VAR_11);
    FUNC_8(VAR_7, "rawcmd", VAR_20);
    FUNC_8(VAR_7, "cmdtail", VAR_12);
    FUNC_8(VAR_7, "ddeexec", VAR_13);
    FUNC_8(VAR_7, "app", VAR_14);
    FUNC_8(VAR_7, "topic", VAR_15);
    FUNC_8(VAR_7, "ifexec", VAR_16);

    FUNC_7(VAR_20, "%s\\shell", VAR_9);
    VAR_22=FUNC_2(VAR_1, VAR_20, 0,
                     VAR_2, &VAR_17);
    FUNC_6(VAR_22 == VAR_0, "%s key creation failed with %d\n", VAR_20, VAR_22);

    VAR_22=FUNC_1(VAR_17, VAR_10, 0, ((void*)0), 0, VAR_2,
                       ((void*)0), &VAR_18, ((void*)0));
    FUNC_6(VAR_22 == VAR_0, "%s verb key creation failed with %d\n", VAR_10, VAR_22);

    VAR_22=FUNC_1(VAR_18, "command", 0, ((void*)0), 0, VAR_3,
                       ((void*)0), &VAR_19, ((void*)0));
    FUNC_6(VAR_22 == VAR_0, "\'command\' key creation failed with %d\n", VAR_22);

    if (VAR_11)
    {
        VAR_22=FUNC_3(VAR_19, ((void*)0), 0, VAR_5, (LPBYTE)VAR_12, FUNC_10(VAR_12)+1);
    }
    else
    {
        VAR_21 = FUNC_4(FUNC_10(VAR_6) + 10 + FUNC_10(VAR_8) + 2 + FUNC_10(VAR_12) + 1);
        FUNC_7(VAR_21,"%s shlexec \"%s\" %s", VAR_6, VAR_8, VAR_12);
        VAR_22=FUNC_3(VAR_19, ((void*)0), 0, VAR_5, (LPBYTE)VAR_21, FUNC_10(VAR_21)+1);
        FUNC_6(VAR_22 == VAR_0, "setting command failed with %d\n", VAR_22);
        FUNC_5(VAR_21);
    }

    if (VAR_13)
    {
        HKEY VAR_23, VAR_24, VAR_25, VAR_26;

        VAR_22=FUNC_1(VAR_18, "ddeexec", 0, ((void*)0), 0, VAR_3 |
                           VAR_2, ((void*)0), &VAR_23, ((void*)0));
        FUNC_6(VAR_22 == VAR_0, "\'ddeexec\' key creation failed with %d\n", VAR_22);
        VAR_22=FUNC_3(VAR_23, ((void*)0), 0, VAR_5, (LPBYTE)VAR_13,
                          FUNC_10(VAR_13)+1);
        FUNC_6(VAR_22 == VAR_0, "set value failed with %d\n", VAR_22);

        if (VAR_14)
        {
            VAR_22=FUNC_1(VAR_23, "application", 0, ((void*)0), 0, VAR_3,
                               ((void*)0), &VAR_24, ((void*)0));
            FUNC_6(VAR_22 == VAR_0, "\'application\' key creation failed with %d\n", VAR_22);

            VAR_22=FUNC_3(VAR_24, ((void*)0), 0, VAR_5, (LPBYTE)VAR_14,
                              FUNC_10(VAR_14)+1);
            FUNC_6(VAR_22 == VAR_0, "set value failed with %d\n", VAR_22);
            FUNC_0(VAR_24);
        }
        if (VAR_15)
        {
            VAR_22=FUNC_1(VAR_23, "topic", 0, ((void*)0), 0, VAR_3,
                               ((void*)0), &VAR_25, ((void*)0));
            FUNC_6(VAR_22 == VAR_0, "\'topic\' key creation failed with %d\n", VAR_22);
            VAR_22=FUNC_3(VAR_25, ((void*)0), 0, VAR_5, (LPBYTE)VAR_15,
                              FUNC_10(VAR_15)+1);
            FUNC_6(VAR_22 == VAR_0, "set value failed with %d\n", VAR_22);
            FUNC_0(VAR_25);
        }
        if (VAR_16)
        {
            VAR_22=FUNC_1(VAR_23, "ifexec", 0, ((void*)0), 0, VAR_3,
                               ((void*)0), &VAR_26, ((void*)0));
            FUNC_6(VAR_22 == VAR_0, "\'ifexec\' key creation failed with %d\n", VAR_22);
            VAR_22=FUNC_3(VAR_26, ((void*)0), 0, VAR_5, (LPBYTE)VAR_16,
                              FUNC_10(VAR_16)+1);
            FUNC_6(VAR_22 == VAR_0, "set value failed with %d\n", VAR_22);
            FUNC_0(VAR_26);
        }
        FUNC_0(VAR_23);
    }

    FUNC_0(VAR_17);
    FUNC_0(VAR_18);
    FUNC_0(VAR_19);
}
