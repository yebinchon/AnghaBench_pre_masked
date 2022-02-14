
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HELPLIST_CHOICE ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_4 ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 char* FUNC_15 (int,char**,int ) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 () ;
 int VAR_5 ;

int FUNC_18(int VAR_6, char **VAR_7)
{
    char *VAR_8;
    HELPLIST_CHOICE VAR_9;
    int VAR_10 = 0, VAR_11 = 0;
    struct {
        unsigned int commands:1;
        unsigned int digest_commands:1;
        unsigned int digest_algorithms:1;
        unsigned int kdf_algorithms:1;
        unsigned int mac_algorithms:1;
        unsigned int cipher_commands:1;
        unsigned int cipher_algorithms:1;
        unsigned int pk_algorithms:1;
        unsigned int pk_method:1;
        unsigned int engines:1;
        unsigned int disabled:1;
        unsigned int missing_help:1;
        unsigned int objects:1;
        unsigned int options:1;
    } VAR_12 = { 0, };

    VAR_5 = 0;

    VAR_8 = FUNC_15(VAR_6, VAR_7, VAR_4);
    while ((VAR_9 = FUNC_16()) != 139) {
        switch (VAR_9) {
        case 139:
        case 138:
opthelp:
            FUNC_0(VAR_3, "%s: Use -help for summary.\n", VAR_8);
            return 1;
        case 137:
            FUNC_14(VAR_4);
            break;
        case 132:
            VAR_10 = 1;
            break;
        case 144:
            VAR_12.commands = 1;
            break;
        case 142:
            VAR_12.digest_commands = 1;
            break;
        case 143:
            VAR_12.digest_algorithms = 1;
            break;
        case 136:
            VAR_12.kdf_algorithms = 1;
            break;
        case 135:
            VAR_12.mac_algorithms = 1;
            break;
        case 145:
            VAR_12.cipher_commands = 1;
            break;
        case 146:
            VAR_12.cipher_algorithms = 1;
            break;
        case 130:
            VAR_12.pk_algorithms = 1;
            break;
        case 129:
            VAR_12.pk_method = 1;
            break;
        case 140:
            VAR_12.engines = 1;
            break;
        case 141:
            VAR_12.disabled = 1;
            break;
        case 134:
            VAR_12.missing_help = 1;
            break;
        case 133:
            VAR_12.objects = 1;
            break;
        case 131:
            FUNC_9(FUNC_13());
            break;
        case 128:
            VAR_5 = 1;
            break;
        }
        VAR_11 = 1;
    }
    if (FUNC_17() != 0) {
        FUNC_0(VAR_3, "Extra arguments given.\n");
        goto opthelp;
    }

    if (VAR_12.commands)
        FUNC_12(VAR_1, VAR_10);
    if (VAR_12.digest_commands)
        FUNC_12(VAR_2, VAR_10);
    if (VAR_12.digest_algorithms)
        FUNC_2();
    if (VAR_12.kdf_algorithms)
        FUNC_5();
    if (VAR_12.mac_algorithms)
        FUNC_6();
    if (VAR_12.cipher_commands)
        FUNC_12(VAR_0, VAR_10);
    if (VAR_12.cipher_algorithms)
        FUNC_1();
    if (VAR_12.pk_algorithms)
        FUNC_10();
    if (VAR_12.pk_method)
        FUNC_11();
    if (VAR_12.engines)
        FUNC_4();
    if (VAR_12.disabled)
        FUNC_3();
    if (VAR_12.missing_help)
        FUNC_7();
    if (VAR_12.objects)
        FUNC_8();

    if (!VAR_11)
        goto opthelp;

    return 0;
}
