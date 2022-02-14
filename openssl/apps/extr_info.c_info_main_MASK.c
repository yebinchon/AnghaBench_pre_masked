
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPTION_CHOICE ;


 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_1 (int) ;





 int VAR_8 ;




 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int,char**,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;

int FUNC_6(int VAR_12, char **VAR_13)
{
    int VAR_14 = 1, VAR_15 = 0, VAR_16 = 0;
    char *VAR_17;
    OPTION_CHOICE VAR_18;

    VAR_17 = FUNC_3(VAR_12, VAR_13, VAR_11);
    while ((VAR_18 = FUNC_4()) != VAR_8) {
        switch (VAR_18) {
        default:
opthelp:
            FUNC_0(VAR_9, "%s: Use -help for summary.\n", VAR_17);
            goto end;
        case 131:
            FUNC_2(VAR_11);
            VAR_14 = 0;
            goto end;
        case 136:
            VAR_16 = VAR_0;
            VAR_15++;
            break;
        case 132:
            VAR_16 = VAR_4;
            VAR_15++;
            break;
        case 129:
            VAR_16 = VAR_6;
            VAR_15++;
            break;
        case 133:
            VAR_16 = VAR_3;
            VAR_15++;
            break;
        case 134:
            VAR_16 = VAR_2;
            VAR_15++;
            break;
        case 130:
            VAR_16 = VAR_5;
            VAR_15++;
            break;
        case 128:
            VAR_16 = VAR_7;
            VAR_15++;
            break;
        case 135:
            VAR_16 = VAR_1;
            VAR_15++;
            break;
        }
    }
    if (FUNC_5() != 0) {
        FUNC_0(VAR_9, "%s: Extra parameters given.\n", VAR_17);
        goto opthelp;
    }
    if (VAR_15 > 1) {
        FUNC_0(VAR_9, "%s: Only one item allowed\n", VAR_17);
        goto opthelp;
    }
    if (VAR_15 == 0) {
        FUNC_0(VAR_9, "%s: No items chosen\n", VAR_17);
        goto opthelp;
    }

    FUNC_0(VAR_10, "%s\n", FUNC_1(VAR_16));
    VAR_14 = 0;
 end:
    return VAR_14;
}
