
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPTION_CHOICE ;


 char* FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 () ;
 char* FUNC_3 () ;
 char* FUNC_4 () ;
 char* FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 char* FUNC_8 () ;
 int VAR_10 ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (int,char**,int ) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (char*,...) ;
 int VAR_11 ;

int FUNC_14(int VAR_12, char **VAR_13)
{
    int VAR_14 = 1, VAR_15 = 0, VAR_16 = 0;
    int VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
    int VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;
    char *VAR_26;
    OPTION_CHOICE VAR_27;

    VAR_26 = FUNC_10(VAR_12, VAR_13, VAR_11);
    while ((VAR_27 = FUNC_11()) != 136) {
        switch (VAR_27) {
        case 136:
        case 135:
opthelp:
            FUNC_1(VAR_10, "%s: Use -help for summary.\n", VAR_26);
            goto end;
        case 133:
            FUNC_9(VAR_11);
            VAR_14 = 0;
            goto end;
        case 140:
            VAR_15 = VAR_19 = 1;
            break;
        case 138:
            VAR_15 = VAR_22 = 1;
            break;
        case 137:
            VAR_15 = VAR_23 = 1;
            break;
        case 132:
            VAR_15 = VAR_24 = 1;
            break;
        case 134:
            VAR_15 = VAR_17 = 1;
            break;
        case 131:
            VAR_15 = VAR_20 = 1;
            break;
        case 130:
            VAR_15 = VAR_21 = 1;
            break;
        case 129:
            VAR_15 = VAR_16 = 1;
            break;
        case 128:
            VAR_15 = VAR_18 = 1;
            break;
        case 139:
            VAR_15 = VAR_25 = 1;
            break;
        case 141:
            VAR_16 = VAR_20 = VAR_17 = VAR_18 = VAR_19 = VAR_21
                = VAR_22 = VAR_23 = VAR_24 = VAR_25
                = 1;
            break;
        }
    }
    if (FUNC_12() != 0) {
        FUNC_1(VAR_10, "Extra parameters given.\n");
        goto opthelp;
    }
    if (!VAR_15)
        VAR_18 = 1;

    if (VAR_18)
        FUNC_13("%s (Library: %s)\n",
               VAR_9, FUNC_7(VAR_8));
    if (VAR_19)
        FUNC_13("%s\n", FUNC_7(VAR_0));
    if (VAR_21)
        FUNC_13("%s\n", FUNC_7(VAR_7));
    if (VAR_20) {
        FUNC_13("options: ");
        FUNC_13(" %s", FUNC_2());

        FUNC_13(" %s", FUNC_5());


        FUNC_13(" %s", FUNC_8());


        FUNC_13(" %s", FUNC_3());


        FUNC_13(" %s", FUNC_4());


        FUNC_13(" %s", FUNC_0());

        FUNC_13("\n");
    }
    if (VAR_17)
        FUNC_13("%s\n", FUNC_7(VAR_1));
    if (VAR_22)
        FUNC_13("%s\n", FUNC_7(VAR_3));
    if (VAR_23)
        FUNC_13("%s\n", FUNC_7(VAR_4));
    if (VAR_24)
        FUNC_13("%s\n", FUNC_7(VAR_6));
    if (VAR_16) {
        const char *VAR_28 = FUNC_6(VAR_5);
        FUNC_13("Seeding source: %s\n", VAR_28 ? VAR_28 : "N/A");
    }
    if (VAR_25)
        FUNC_13("%s\n", FUNC_7(VAR_2));
    VAR_14 = 0;
 end:
    return VAR_14;
}
