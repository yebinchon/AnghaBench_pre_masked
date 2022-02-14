
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total; int skipped; int translated; int undo; int redo; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char*,char*,...) ;
 int FUNC_2 (char*,char,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,char*,...) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_7 (char*,unsigned int,char*) ;

__attribute__((used)) static void
FUNC_8(FILE *VAR_7, char *VAR_8, char *VAR_9, char *VAR_10)
{
    unsigned int VAR_11;
    int VAR_12, VAR_13;
    char *VAR_14, *VAR_15, *VAR_16, *VAR_17;
    unsigned char VAR_18;

    if (!*VAR_8)
        return;

    VAR_13 = 1;
    VAR_16 = "";
    VAR_17 = FUNC_3(VAR_8);
    if (VAR_5)
    {

        char VAR_19[VAR_1];
        if (FUNC_4(VAR_17, "| %s", VAR_19) == 1)
            if (VAR_19[0] == '0' || FUNC_6(VAR_19, "----") == 0 || FUNC_6(VAR_19, "L2L-") == 0 || FUNC_6(VAR_19, "S---") == 0 || FUNC_6(VAR_19, "R---") == 0 || FUNC_0(VAR_19))
                VAR_13 = 0;
    }

    VAR_14 = FUNC_5(VAR_17, ':');
    if (VAR_14)
    {
        *VAR_14 = ' ';
        VAR_12 = FUNC_4(VAR_17, "<%s %x%c", VAR_9, &VAR_11, &VAR_18);
        if (VAR_5)
        {
            if (VAR_12 == 3 && VAR_18 == ' ')
            {
                VAR_15 = FUNC_5(VAR_17, '>');
                VAR_15 = VAR_15 ? VAR_15 - 1 : VAR_15;
                if (VAR_15 && VAR_15[0] == ')' && VAR_15[1] == '>')
                {
                    VAR_13 = 0;
                    VAR_15 += 2;
                    VAR_16 = VAR_3 ? "* " : "";
                    if (VAR_4 && !(VAR_13 = FUNC_7(VAR_9, VAR_11, VAR_10)))
                    {
                        FUNC_1(VAR_7, "%s<%s:%x (%s)>%s", VAR_16, VAR_9, VAR_11, VAR_10, VAR_15);
                        VAR_6.redo++;
                    }
                    else
                    {
                        FUNC_1(VAR_7, "%s<%s:%x>%s", VAR_16, VAR_9, VAR_11, VAR_15);
                        VAR_6.undo++;
                    }
                }
                else
                {
                    VAR_16 = VAR_2 ? "? " : "";
                    VAR_6.skipped++;
                }
                VAR_6.total++;
            }
        }

        if (!VAR_5 || VAR_4)
        {
            if (VAR_12 == 3 && VAR_18 == '>')
            {
                VAR_15 = FUNC_5(VAR_17, '>') + 1;
                if (!(VAR_13 = FUNC_7(VAR_9, VAR_11, VAR_10)))
                {
                    VAR_16 = VAR_3 ? "* " : "";
                    FUNC_1(VAR_7, "%s<%s:%x (%s)>%s", VAR_16, VAR_9, VAR_11, VAR_10, VAR_15);
                    VAR_6.translated++;
                }
                else
                {
                    VAR_16 = VAR_2 ? "? " : "";
                    VAR_6.skipped++;
                }
                VAR_6.total++;
            }
        }
    }
    if (VAR_13)
    {
        if (VAR_14)
            *VAR_14 = ':';
        FUNC_1(VAR_7, "%s%s", VAR_16, VAR_17);
    }
    FUNC_2(VAR_8, '\0', VAR_0);
}
