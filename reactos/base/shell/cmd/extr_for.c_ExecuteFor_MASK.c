
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_26__ {int Switches; scalar_t__ Params; TYPE_2__* Context; int Variable; int List; } ;
struct TYPE_28__ {TYPE_1__ For; } ;
struct TYPE_27__ {int varcount; struct TYPE_27__* prev; struct TYPE_27__** values; int firstvar; } ;
typedef TYPE_2__ TCHAR ;
typedef TYPE_3__ PARSED_COMMAND ;
typedef TYPE_2__* LPTSTR ;
typedef TYPE_2__* LPFOR_CONTEXT ;
typedef int INT ;
typedef int FOR_CONTEXT ;
typedef size_t DWORD ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 size_t FUNC_5 (scalar_t__,int ,TYPE_2__*,int *) ;
 int VAR_4 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 TYPE_2__* FUNC_8 (int) ;
 int FUNC_9 (TYPE_2__*) ;
 TYPE_2__* VAR_5 ;

INT
FUNC_10(PARSED_COMMAND *VAR_6)
{
    TCHAR VAR_7[VAR_0];
    LPTSTR VAR_8 = VAR_7;
    LPFOR_CONTEXT VAR_9;
    INT VAR_10;
    LPTSTR VAR_11 = FUNC_0(VAR_6->For.List);

    if (!VAR_11)
        return 1;


    VAR_9 = FUNC_8(sizeof(FOR_CONTEXT));
    if (!VAR_9)
    {
        FUNC_6("Cannot allocate memory for lpNew!\n");
        FUNC_9(VAR_11);
        return 1;
    }
    VAR_9->prev = VAR_5;
    VAR_9->firstvar = VAR_6->For.Variable;
    VAR_9->varcount = 1;
    VAR_9->values = &VAR_8;

    VAR_6->For.Context = VAR_9;
    VAR_5 = VAR_9;

    if (VAR_6->For.Switches & VAR_1)
    {
        VAR_10 = FUNC_2(VAR_6, VAR_11, VAR_7);
    }
    else if (VAR_6->For.Switches & VAR_2)
    {
        VAR_10 = FUNC_3(VAR_6, VAR_11, VAR_7);
    }
    else if (VAR_6->For.Switches & VAR_3)
    {
        DWORD VAR_12 = FUNC_5(VAR_6->For.Params ? VAR_6->For.Params : FUNC_7("."),
                                    VAR_4, VAR_7, ((void*)0));
        VAR_10 = FUNC_4(VAR_6, VAR_11, VAR_7, &VAR_7[VAR_12]);
    }
    else
    {
        VAR_10 = FUNC_1(VAR_6, VAR_11, VAR_7, VAR_7);
    }


    if (VAR_5 == VAR_9)
        VAR_5 = VAR_9->prev;

    FUNC_9(VAR_9);
    FUNC_9(VAR_11);
    return VAR_10;
}
