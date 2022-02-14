
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sign_id; int hash_id; int pkey_id; } ;
typedef TYPE_1__ nid_triple ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;

int FUNC_6(int VAR_6, int VAR_7, int VAR_8)
{
    nid_triple *VAR_9;
    if (VAR_2 == ((void*)0))
        VAR_2 = FUNC_3(VAR_3);
    if (VAR_2 == ((void*)0))
        return 0;
    if (VAR_4 == ((void*)0))
        VAR_4 = FUNC_3(VAR_5);
    if (VAR_4 == ((void*)0))
        return 0;
    if ((VAR_9 = FUNC_2(sizeof(*VAR_9))) == ((void*)0)) {
        FUNC_0(VAR_1, VAR_0);
        return 0;
    }
    VAR_9->sign_id = VAR_6;
    VAR_9->hash_id = VAR_7;
    VAR_9->pkey_id = VAR_8;

    if (!FUNC_4(VAR_2, VAR_9)) {
        FUNC_1(VAR_9);
        return 0;
    }

    if (!FUNC_4(VAR_4, VAR_9))
        return 0;

    FUNC_5(VAR_2);
    FUNC_5(VAR_4);

    return 1;
}
