
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ossl_uintmax_t ;
typedef int ossl_intmax_t ;
struct TYPE_5__ {int retval; } ;
struct TYPE_4__ {char* name; char valtype; int retval; } ;
typedef TYPE_1__ OPTIONS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char** VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_0 (char*,int ,int*) ;
 int FUNC_1 (char*,int *) ;
 size_t VAR_8 ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,long*) ;
 int FUNC_5 (char*,int ,char*,...) ;
 int FUNC_6 (char*,unsigned long*) ;
 int FUNC_7 (char*,int *) ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 TYPE_2__* VAR_11 ;

int FUNC_10(void)
{
    char *VAR_12;
    const OPTIONS *VAR_13;
    int VAR_14;
    long VAR_15;
    unsigned long VAR_16;
    ossl_intmax_t VAR_17;
    ossl_uintmax_t VAR_18;


    VAR_4 = ((void*)0);
    VAR_12 = VAR_5[VAR_8];
    if (VAR_12 == ((void*)0))
        return 0;


    if (*VAR_12 != '-')
        return 0;


    VAR_8++;
    if (FUNC_9(VAR_12, "--") == 0)
        return 0;


    if (*++VAR_12 == '-')
        VAR_12++;
    VAR_7 = VAR_12 - 1;


    if ((VAR_4 = FUNC_8(VAR_12, '=')) != ((void*)0))
        *VAR_4++ = '\0';
    for (VAR_13 = VAR_9; VAR_13->name; ++VAR_13) {

        if (FUNC_9(VAR_12, VAR_13->name) != 0)
            continue;


        if (VAR_13->valtype == 0 || VAR_13->valtype == '-') {
            if (VAR_4) {
                FUNC_5("%s: Option -%s does not take a value\n",
                                  VAR_10, VAR_12);
                return -1;
            }
            return VAR_13->retval;
        }


        if (VAR_4 == ((void*)0)) {
            if (VAR_5[VAR_8] == ((void*)0)) {
                FUNC_5("%s: Option -%s needs a value\n",
                                  VAR_10, VAR_13->name);
                return -1;
            }
            VAR_4 = VAR_5[VAR_8++];
        }


        switch (VAR_13->valtype) {
        default:
        case 's':
        case ':':

            break;
        case '/':
            if (FUNC_3(VAR_4) > 0)
                break;
            FUNC_5("%s: Not a directory: %s\n", VAR_10, VAR_4);
            return -1;
        case '<':

            break;
        case '>':

            break;
        case 'p':
        case 'n':
            if (!FUNC_2(VAR_4, &VAR_14)
                    || (VAR_13->valtype == 'p' && VAR_14 <= 0)) {
                FUNC_5("%s: Non-positive number \"%s\" for -%s\n",
                                  VAR_10, VAR_4, VAR_13->name);
                return -1;
            }
            break;
        case 'M':
            if (!FUNC_1(VAR_4, &VAR_17)) {
                FUNC_5("%s: Invalid number \"%s\" for -%s\n",
                                  VAR_10, VAR_4, VAR_13->name);
                return -1;
            }
            break;
        case 'U':
            if (!FUNC_7(VAR_4, &VAR_18)) {
                FUNC_5("%s: Invalid number \"%s\" for -%s\n",
                                  VAR_10, VAR_4, VAR_13->name);
                return -1;
            }
            break;
        case 'l':
            if (!FUNC_4(VAR_4, &VAR_15)) {
                FUNC_5("%s: Invalid number \"%s\" for -%s\n",
                                  VAR_10, VAR_4, VAR_13->name);
                return -1;
            }
            break;
        case 'u':
            if (!FUNC_6(VAR_4, &VAR_16)) {
                FUNC_5("%s: Invalid number \"%s\" for -%s\n",
                                  VAR_10, VAR_4, VAR_13->name);
                return -1;
            }
            break;
        case 'c':
        case 'E':
        case 'F':
        case 'f':
            if (FUNC_0(VAR_4,
                           VAR_13->valtype == 'c' ? VAR_2 :
                           VAR_13->valtype == 'E' ? VAR_1 :
                           VAR_13->valtype == 'F' ? VAR_3
                           : VAR_0, &VAR_14))
                break;
            FUNC_5("%s: Invalid format \"%s\" for -%s\n",
                              VAR_10, VAR_4, VAR_13->name);
            return -1;
        }


        return VAR_13->retval;
    }
    if (VAR_11 != ((void*)0)) {
        VAR_6 = VAR_12;
        return VAR_11->retval;
    }
    FUNC_5("%s: Option unknown option -%s\n", VAR_10, VAR_12);
    return -1;
}
