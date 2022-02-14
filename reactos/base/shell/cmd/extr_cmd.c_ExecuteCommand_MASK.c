
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int Rest; int First; } ;
struct TYPE_9__ {int Type; int Redirections; struct TYPE_9__* Next; struct TYPE_9__* Subcommands; TYPE_1__ Command; } ;
typedef TYPE_2__ PARSED_COMMAND ;
typedef int LPTSTR ;
typedef int INT ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;

INT
FUNC_8(PARSED_COMMAND *VAR_1)
{
    PARSED_COMMAND *VAR_2;
    LPTSTR VAR_3, VAR_4;
    INT VAR_5 = 0;

    if (!FUNC_5(VAR_1->Redirections))
        return 1;

    switch (VAR_1->Type)
    {
    case 135:
        VAR_5 = 1;
        VAR_3 = FUNC_1(VAR_1->Command.First);
        if (VAR_3)
        {
            VAR_4 = FUNC_1(VAR_1->Command.Rest);
            if (VAR_4)
            {
                VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1);
                FUNC_7(VAR_4);
            }
            FUNC_7(VAR_3);
        }
        break;
    case 128:
    case 136:
    case 130:
        for (VAR_2 = VAR_1->Subcommands; VAR_2; VAR_2 = VAR_2->Next)
            VAR_5 = FUNC_8(VAR_2);
        break;
    case 132:
        VAR_2 = VAR_1->Subcommands;
        VAR_5 = FUNC_8(VAR_2);
        if (VAR_5 != 0)
        {
            VAR_0 = VAR_5;
            VAR_5 = FUNC_8(VAR_2->Next);
        }
        break;
    case 131:
        VAR_2 = VAR_1->Subcommands;
        VAR_5 = FUNC_8(VAR_2);
        if (VAR_5 == 0)
            VAR_5 = FUNC_8(VAR_2->Next);
        break;
    case 129:
        VAR_5 = FUNC_4(VAR_1);
        break;
    case 133:
        VAR_5 = FUNC_3(VAR_1);
        break;
    case 134:
        VAR_5 = FUNC_2(VAR_1);
        break;
    }

    FUNC_6(VAR_1->Redirections, ((void*)0));
    return VAR_5;
}
