
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int flags; int (* func ) (int ,char*) ;int * name; } ;
typedef int PCONSOLE_STATE ;
typedef char* LPSTR ;
typedef TYPE_1__* LPCOMMAND ;
typedef char CHAR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static
VOID
FUNC_11(
    PCONSOLE_STATE VAR_5,
    LPSTR VAR_6)
{
    CHAR VAR_7[VAR_2];
    LPSTR VAR_8 = VAR_7;

    LPSTR VAR_9 = VAR_6;

    LPCOMMAND VAR_10;

    FUNC_1("DoCommand: (\'%s\')\n", VAR_6);


    while (FUNC_3(*VAR_9))
        VAR_9++;




    if (*VAR_9)
    {

        while (!FUNC_2(*VAR_9))
            *VAR_8++ = FUNC_10(*VAR_9++);


        *VAR_8 = '\0';


        while (FUNC_3 (*VAR_9))
            VAR_9++;


        for (VAR_10 = VAR_1; ; VAR_10++)
        {

            if (VAR_10->name == ((void*)0))
            {
                FUNC_0("Unknown command. Enter HELP to get a list of commands.");
                break;
            }

            if (FUNC_5(VAR_7, VAR_10->name) == 0)
            {
                VAR_10->func(VAR_5, VAR_9);
                break;
            }
        }
    }
}
