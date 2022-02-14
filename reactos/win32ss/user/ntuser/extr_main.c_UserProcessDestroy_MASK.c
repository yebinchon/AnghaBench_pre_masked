
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int * hdeskStartup; TYPE_1__* peProcess; } ;
struct TYPE_11__ {scalar_t__ UniqueProcessId; int ImageFileName; } ;
typedef TYPE_2__* PPROCESSINFO ;
typedef int PEPROCESS ;
typedef int NTSTATUS ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,TYPE_2__*,...) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_2__* VAR_8 ;
 TYPE_2__* VAR_9 ;

NTSTATUS
FUNC_10(PEPROCESS VAR_10)
{
    PPROCESSINFO VAR_11 = FUNC_4(VAR_10);
    FUNC_0(VAR_11);

    if (VAR_9 == VAR_11)
        VAR_9 = ((void*)0);


    FUNC_6(VAR_6, VAR_11);

    FUNC_5(VAR_4, "Freeing ppi 0x%p\n", VAR_11);
    FUNC_9(VAR_1);




    if (VAR_7 == VAR_11->peProcess->UniqueProcessId)
        VAR_7 = 0;


    FUNC_7(((void*)0));

    if (VAR_8 == VAR_11) VAR_8 = ((void*)0);

    if (VAR_11->hdeskStartup)
    {
        FUNC_8(VAR_11->hdeskStartup);
        VAR_11->hdeskStartup = ((void*)0);
    }


    FUNC_3(VAR_11);

    return VAR_2;
}
