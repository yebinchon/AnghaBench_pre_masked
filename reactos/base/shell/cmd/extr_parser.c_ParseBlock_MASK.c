
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * Redirections; struct TYPE_6__* Next; struct TYPE_6__* Subcommands; int Type; } ;
typedef int REDIRECTION ;
typedef TYPE_1__ PARSED_COMMAND ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int **) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_7 ;
 TYPE_1__* FUNC_8 (int) ;

__attribute__((used)) static PARSED_COMMAND *FUNC_9(REDIRECTION *VAR_8)
{
    PARSED_COMMAND *VAR_9, *VAR_10, **VAR_11;

    VAR_9 = FUNC_8(sizeof(PARSED_COMMAND));
    if (!VAR_9)
    {
        FUNC_7("Cannot allocate memory for Cmd!\n");
        FUNC_4();
        FUNC_1(VAR_8);
        return ((void*)0);
    }
    VAR_9->Type = VAR_0;
    VAR_9->Next = ((void*)0);
    VAR_9->Subcommands = ((void*)0);
    VAR_9->Redirections = VAR_8;


    VAR_11 = &VAR_9->Subcommands;
    VAR_3++;
    while (1)
    {
        VAR_10 = FUNC_3(VAR_1);
        if (VAR_10)
        {
            *VAR_11 = VAR_10;
            VAR_11 = &VAR_10->Next;
        }
        else if (VAR_7)
        {
            VAR_3--;
            FUNC_0(VAR_9);
            return ((void*)0);
        }

        if (VAR_2 == VAR_5)
            break;


        FUNC_2();
    }
    VAR_3--;


    while (FUNC_6(0, VAR_4) == VAR_6)
    {
        if (!FUNC_5(&VAR_9->Redirections))
        {
            FUNC_0(VAR_9);
            return ((void*)0);
        }
    }
    return VAR_9;
}
