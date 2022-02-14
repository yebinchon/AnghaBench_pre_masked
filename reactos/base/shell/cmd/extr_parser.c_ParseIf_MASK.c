
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t Operator; void* RightArg; void* LeftArg; int Flags; } ;
struct TYPE_10__ {TYPE_2__* Subcommands; TYPE_1__ If; int Type; } ;
struct TYPE_9__ {int * Next; } ;
typedef TYPE_3__ PARSED_COMMAND ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int * VAR_8 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (scalar_t__*,int ) ;
 scalar_t__ FUNC_7 (scalar_t__*,int ,int) ;
 TYPE_3__* FUNC_8 (int) ;
 void* FUNC_9 (scalar_t__*) ;
 int FUNC_10 (TYPE_3__*,int ,int) ;

__attribute__((used)) static PARSED_COMMAND *FUNC_11(void)
{
    int VAR_11;
    PARSED_COMMAND *VAR_12;

    VAR_12 = FUNC_8(sizeof(PARSED_COMMAND));
    if (!VAR_12)
    {
        FUNC_4("Cannot allocate memory for Cmd!\n");
        FUNC_2();
        return ((void*)0);
    }
    FUNC_10(VAR_12, 0, sizeof(PARSED_COMMAND));
    VAR_12->Type = VAR_0;

    VAR_11 = VAR_3;
    if (FUNC_6(VAR_2, FUNC_5("/I")) == 0)
    {
        VAR_12->If.Flags |= VAR_4;
        VAR_11 = FUNC_3(0, VAR_9);
    }
    if (FUNC_6(VAR_2, FUNC_5("not")) == 0)
    {
        VAR_12->If.Flags |= VAR_5;
        VAR_11 = FUNC_3(0, VAR_9);
    }

    if (VAR_11 != VAR_10)
    {
        FUNC_0(VAR_12);
        FUNC_2();
        return ((void*)0);
    }


    for (; VAR_12->If.Operator <= VAR_7; VAR_12->If.Operator++)
    {
        if (FUNC_6(VAR_2, VAR_8[VAR_12->If.Operator]) == 0)
        {
            if (FUNC_3(0, VAR_9) != VAR_10)
            {
                FUNC_0(VAR_12);
                FUNC_2();
                return ((void*)0);
            }
            VAR_12->If.RightArg = FUNC_9(VAR_2);
            goto condition_done;
        }
    }



    VAR_12->If.LeftArg = FUNC_9(VAR_2);
    FUNC_3(0, FUNC_5(",;"));


    if (FUNC_7(VAR_2, FUNC_5("=="), 2) == 0 && VAR_2[2])
    {
        VAR_12->If.RightArg = FUNC_9(&VAR_2[2]);
        goto condition_done;
    }

    for (; VAR_12->If.Operator <= VAR_6; VAR_12->If.Operator++)
    {
        if (FUNC_6(VAR_2, VAR_8[VAR_12->If.Operator]) == 0)
        {
            if (FUNC_3(0, VAR_9) != VAR_10)
                break;
            VAR_12->If.RightArg = FUNC_9(VAR_2);
            goto condition_done;
        }
    }
    FUNC_0(VAR_12);
    FUNC_2();
    return ((void*)0);

condition_done:
    VAR_12->Subcommands = FUNC_1(VAR_1);
    if (VAR_12->Subcommands == ((void*)0))
    {
        FUNC_0(VAR_12);
        return ((void*)0);
    }
    if (FUNC_6(VAR_2, FUNC_5("else")) == 0)
    {
        VAR_12->Subcommands->Next = FUNC_1(VAR_1);
        if (VAR_12->Subcommands->Next == ((void*)0))
        {
            FUNC_0(VAR_12);
            return ((void*)0);
        }
    }

    return VAR_12;
}
