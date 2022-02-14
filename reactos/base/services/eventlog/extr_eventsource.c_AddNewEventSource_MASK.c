
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int EventSourceListEntry; int szName; int LogFile; } ;
typedef int PWSTR ;
typedef int PLOGFILE ;
typedef TYPE_1__* PEVENTSOURCE ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int * VAR_3 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static BOOL
FUNC_9(PLOGFILE VAR_4,
                  PWSTR VAR_5)
{
    PEVENTSOURCE VAR_6;

    VAR_6 = FUNC_4(FUNC_3(), 0,
                              FUNC_2(VAR_0, VAR_3[FUNC_8(VAR_5) + 1]));
    if (VAR_6 != ((void*)0))
    {
        FUNC_7(VAR_6->szName, VAR_5);
        VAR_6->LogFile = VAR_4;

        FUNC_0("Insert event source: %S\n", VAR_6->szName);

        FUNC_1(&VAR_1);
        FUNC_5(&VAR_2,
                       &VAR_6->EventSourceListEntry);
        FUNC_6(&VAR_1);
    }

    return (VAR_6 != ((void*)0));
}
