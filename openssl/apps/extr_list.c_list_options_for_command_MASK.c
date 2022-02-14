
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* help; int * name; } ;
struct TYPE_4__ {char* name; char valtype; } ;
typedef TYPE_1__ OPTIONS ;
typedef TYPE_2__ FUNCTION ;


 int FUNC_0 (int ,char*,...) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_1 (int *,char const*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_6)
{
    const FUNCTION *VAR_7;
    const OPTIONS *VAR_8;

    for (VAR_7 = VAR_5; VAR_7->name != ((void*)0); VAR_7++)
        if (FUNC_1(VAR_7->name, VAR_6) == 0)
            break;
    if (VAR_7->name == ((void*)0)) {
        FUNC_0(VAR_3, "Invalid command '%s'; type \"help\" for a list.\n",
                VAR_6);
        return;
    }

    if ((VAR_8 = VAR_7->help) == ((void*)0))
        return;

    for ( ; VAR_8->name != ((void*)0); VAR_8++) {
        char VAR_9 = VAR_8->valtype;

        if (VAR_8->name == VAR_0
                || VAR_8->name == VAR_1
                || VAR_8->name == VAR_2
                || VAR_8->name[0] == '\0')
            continue;
        FUNC_0(VAR_4, "%s %c\n", VAR_8->name, VAR_9 == '\0' ? '-' : VAR_9);
    }

    FUNC_0(VAR_4, "- -\n");
}
