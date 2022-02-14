
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Flink; } ;
typedef int * PSIDTOUSERNAME ;
typedef TYPE_1__* PLIST_ENTRY ;


 int * FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;

void FUNC_5(void)
{
    PLIST_ENTRY VAR_7;
    PSIDTOUSERNAME VAR_8;

    if (VAR_6 != ((void*)0))
        FUNC_4(FUNC_3(), 0, VAR_6);

    FUNC_1(&VAR_1);

    if (VAR_5 != ((void*)0))
    {
        FUNC_2(VAR_5);
        VAR_5 = ((void*)0);
    }


    VAR_7 = VAR_3.Flink;
    while (VAR_7 != &VAR_3)
    {
        VAR_8 = FUNC_0(VAR_7, VAR_2, VAR_0);
        VAR_7 = VAR_7->Flink;
        FUNC_4(FUNC_3(), 0, VAR_8);
    }

    if (VAR_4) {
        FUNC_4(FUNC_3(), 0, VAR_4);
    }
}
