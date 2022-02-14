
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct _SETLOCAL {int dummy; } ;
typedef int fpname ;
struct TYPE_10__ {int* shiftlevel; TYPE_1__* current; int * raw_params; int params; scalar_t__ bEcho; scalar_t__ mempos; int * BatchFilePath; struct _SETLOCAL* setlocal; int * RedirList; void* memfree; int memsize; scalar_t__ mem; struct TYPE_10__* prev; } ;
struct TYPE_9__ {scalar_t__ Type; int Redirections; } ;
typedef int TCHAR ;
typedef TYPE_1__ PARSED_COMMAND ;
typedef scalar_t__* LPTSTR ;
typedef int * LPFOR_CONTEXT ;
typedef int INT ;
typedef scalar_t__ HANDLE ;
typedef void* BOOL ;
typedef TYPE_2__ BATCH_CONTEXT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__*,int ,int,int *,int ,int,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 () ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_12 (scalar_t__*,int,int *,int *) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* FUNC_13 (int *) ;
 int FUNC_14 () ;
 int VAR_11 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,...) ;
 void* VAR_12 ;
 scalar_t__ FUNC_17 (char) ;
 scalar_t__ FUNC_18 (int *,int *) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__* VAR_17 ;
 int * FUNC_19 (scalar_t__*) ;
 int FUNC_20 (scalar_t__*) ;
 int FUNC_21 (scalar_t__*) ;
 int FUNC_22 () ;
 int * VAR_18 ;
 int VAR_19 ;

INT FUNC_23(LPTSTR VAR_20, LPTSTR VAR_21, LPTSTR VAR_22, PARSED_COMMAND *VAR_23)
{
    BATCH_CONTEXT VAR_24;
    LPFOR_CONTEXT VAR_25;
    INT VAR_26;
    INT VAR_27 = 0;
    BOOL VAR_28 = VAR_1;

    HANDLE VAR_29 = 0;
    FUNC_15(0);
    if (VAR_17 && VAR_17->mem)
    {
        TCHAR VAR_30[VAR_9];
        FUNC_12(VAR_20, sizeof(VAR_30) / sizeof(TCHAR), VAR_30, ((void*)0));
        if (FUNC_18(VAR_17->BatchFilePath,VAR_30)==0)
            VAR_28=VAR_12;
    }
    FUNC_16 ("Batch: (\'%s\', \'%s\', \'%s\')  same_fn = %d\n",
        FUNC_21(VAR_20), FUNC_21(VAR_21), FUNC_21(VAR_22), VAR_28);

    if (!VAR_28)
    {
        VAR_29 = FUNC_7(VAR_20, VAR_7, VAR_6 | VAR_5 | VAR_4, ((void*)0),
                           VAR_10, VAR_2 |
                           VAR_3, ((void*)0));

        if (VAR_29 == VAR_8)
        {
            FUNC_5(VAR_11);
            return 1;
        }
    }

    if (VAR_17 != ((void*)0) && VAR_23 == VAR_17->current)
    {

        FUNC_3();
        FUNC_0(&VAR_23->Redirections);
    }
    else
    {
        struct _SETLOCAL *VAR_31 = ((void*)0);

        if (VAR_23 == ((void*)0))
        {



            VAR_27 = VAR_19;
        }
        else if (VAR_17)
        {




            VAR_31 = VAR_17->setlocal;
            VAR_17->setlocal = ((void*)0);
            FUNC_10();
        }



        VAR_24.prev = VAR_17;

        if (VAR_28)
        {
            VAR_24.mem = VAR_17->mem;
            VAR_24.memsize = VAR_17->memsize;
            VAR_24.mempos = 0;
            VAR_24.memfree = VAR_1;
        }
        VAR_17 = &VAR_24;
        VAR_17->RedirList = ((void*)0);
        VAR_17->setlocal = VAR_31;
    }

    FUNC_12(VAR_20, sizeof(VAR_17->BatchFilePath) / sizeof(TCHAR), VAR_17->BatchFilePath, ((void*)0));

    if (!VAR_28)
    {
        FUNC_1(VAR_29);
        FUNC_4(VAR_29);
    }

    VAR_17->mempos = 0;
    VAR_17->bEcho = VAR_14;
    for (VAR_26 = 0; VAR_26 < 10; VAR_26++)
        VAR_17->shiftlevel[VAR_26] = VAR_26;

    VAR_17->params = FUNC_2 (VAR_21, VAR_22);



    VAR_17->raw_params = FUNC_19(VAR_22);
    if (VAR_17->raw_params == ((void*)0))
    {
        FUNC_22();
        return 1;
    }


    if (*VAR_21 == FUNC_17(':'))
        FUNC_20(VAR_21);


    VAR_25 = VAR_18;
    VAR_18 = ((void*)0);



    while (VAR_17 == &VAR_24 && !VAR_15)
    {
        VAR_23 = FUNC_13(((void*)0));
        if (!VAR_23)
            continue;



        if (VAR_14 && !VAR_13 && VAR_23->Type != VAR_0)
        {
            if (!VAR_16)
                FUNC_6(FUNC_17('\n'));
            FUNC_14();
            FUNC_8(VAR_23);
            FUNC_6(FUNC_17('\n'));
        }

        VAR_17->current = VAR_23;
        VAR_27 = FUNC_9(VAR_23);
        FUNC_11(VAR_23);
    }


    VAR_27 = VAR_19;

    FUNC_16 ("Batch: returns TRUE\n");

    VAR_18 = VAR_25;
    return VAR_27;
}
