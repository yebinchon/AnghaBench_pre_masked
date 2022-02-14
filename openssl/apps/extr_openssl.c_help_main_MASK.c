
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int columns; int width; } ;
struct TYPE_6__ {scalar_t__ type; int * name; } ;
typedef int HELP_CHOICE ;
typedef scalar_t__ FUNC_TYPE ;
typedef TYPE_1__ FUNCTION ;
typedef TYPE_2__ DISPLAY_COLUMNS ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int ,int,char**) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int,char**,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 char** FUNC_7 () ;
 int FUNC_8 () ;

int FUNC_9(int VAR_6, char **VAR_7)
{
    FUNCTION *VAR_8;
    int VAR_9, VAR_10;
    FUNC_TYPE VAR_11;
    char *VAR_12;
    HELP_CHOICE VAR_13;
    DISPLAY_COLUMNS VAR_14;

    VAR_12 = FUNC_4(VAR_6, VAR_7, VAR_5);
    while ((VAR_13 = FUNC_5()) != 130) {
        switch (VAR_13) {
        case 129:
        case 130:
            FUNC_0(VAR_3, "%s: Use -help for summary.\n", VAR_12);
            return 1;
        case 128:
            FUNC_3(VAR_5);
            return 0;
        }
    }

    if (FUNC_6() == 1) {
        char *VAR_15[3];

        VAR_15[0] = FUNC_7()[0];
        VAR_15[1] = "--help";
        VAR_15[2] = ((void*)0);
        return FUNC_2(FUNC_8(), 2, VAR_15);
    }
    if (FUNC_6() != 0) {
        FUNC_0(VAR_3, "Usage: %s\n", VAR_12);
        return 1;
    }

    FUNC_1(VAR_4, &VAR_14);
    FUNC_0(VAR_3, "Standard commands");
    VAR_9 = 0;
    VAR_11 = VAR_2;
    for (VAR_8 = VAR_4; VAR_8->name != ((void*)0); VAR_8++) {
        VAR_10 = 0;
        if (VAR_9++ % VAR_14.columns == 0) {
            FUNC_0(VAR_3, "\n");
            VAR_10 = 1;
        }
        if (VAR_8->type != VAR_11) {
            VAR_11 = VAR_8->type;
            if (!VAR_10)
                FUNC_0(VAR_3, "\n");
            if (VAR_11 == VAR_1) {
                VAR_9 = 1;
                FUNC_0(VAR_3,
                           "\nMessage Digest commands (see the `dgst' command for more details)\n");
            } else if (VAR_11 == VAR_0) {
                VAR_9 = 1;
                FUNC_0(VAR_3,
                           "\nCipher commands (see the `enc' command for more details)\n");
            }
        }
        FUNC_0(VAR_3, "%-*s", VAR_14.width, VAR_8->name);
    }
    FUNC_0(VAR_3, "\n\n");
    return 0;
}
