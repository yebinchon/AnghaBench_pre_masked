
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* help ) () ;int * name; } ;
typedef int PCONSOLE_STATE ;
typedef int * LPSTR ;
typedef TYPE_1__* LPCOMMAND ;
typedef int INT ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,int *,scalar_t__,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static
INT
FUNC_7(
    PCONSOLE_STATE VAR_1,
    LPSTR VAR_2)
{
    LPCOMMAND VAR_3;

    FUNC_1("param: %p %u '%s'\n", VAR_2, FUNC_5(VAR_2), VAR_2);

    if (!FUNC_3(VAR_2, "/?"))
    {
        FUNC_2();
        return 0;
    }

    if (VAR_2 != ((void*)0) && FUNC_5(VAR_2) > 0)
    {
        for (VAR_3 = VAR_0; VAR_3->name != ((void*)0); VAR_3++)
        {
            if (!FUNC_4(VAR_2, VAR_3->name))
            {
                if (VAR_3->help != ((void*)0))
                {
                    VAR_3->help();
                    return 0;
                }
            }
        }
    }

    FUNC_0("CLS\n");
    FUNC_0("DUMPSECTOR\n");
    FUNC_0("EXIT\n");
    FUNC_0("HELP\n");
    FUNC_0("\n");

    return 0;
}
