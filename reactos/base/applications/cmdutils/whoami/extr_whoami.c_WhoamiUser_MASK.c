
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WhoamiTable ;
struct TYPE_10__ {int Sid; } ;
struct TYPE_11__ {TYPE_1__ User; } ;
typedef TYPE_2__* PTOKEN_USER ;
typedef TYPE_2__* LPWSTR ;


 int FUNC_0 (int ,TYPE_2__**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_2__*,int,int) ;

int FUNC_10(void)
{
    PTOKEN_USER VAR_5 = (PTOKEN_USER) FUNC_4(VAR_4);
    LPWSTR VAR_6 = ((void*)0);
    LPWSTR VAR_7 = ((void*)0);
    WhoamiTable *VAR_8 = ((void*)0);

    if (VAR_5 == ((void*)0))
    {
        return 1;
    }

    VAR_6 = FUNC_5(VAR_3);
    if (VAR_6 == ((void*)0))
    {
        FUNC_3(VAR_5);
        return 1;
    }

    VAR_8 = FUNC_2(2, 2);

    FUNC_7(VAR_2);


    FUNC_9(VAR_8, FUNC_6(VAR_1), 0, 0);
    FUNC_9(VAR_8, FUNC_6(VAR_0), 0, 1);

    FUNC_0(VAR_5->User.Sid, &VAR_7);


    FUNC_9(VAR_8, VAR_6, 1, 0);
    FUNC_9(VAR_8, VAR_7, 1, 1);

    FUNC_8(VAR_8);


    FUNC_1(VAR_7);
    FUNC_3(VAR_5);
    FUNC_3(VAR_6);

    return 0;
}
