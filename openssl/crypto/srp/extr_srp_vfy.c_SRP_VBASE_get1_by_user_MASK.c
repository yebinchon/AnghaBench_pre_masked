
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* seed_key; int * default_N; int * default_g; } ;
typedef int SRP_user_pwd ;
typedef TYPE_1__ SRP_VBASE ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (unsigned char*,int,int *) ;
 int FUNC_1 (int *,unsigned char*,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 () ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,char*,int *) ;
 int FUNC_12 (int *,int *,int *) ;
 int * FUNC_13 (TYPE_1__*,char*) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (char*) ;

SRP_user_pwd *FUNC_16(SRP_VBASE *VAR_1, char *VAR_2)
{
    SRP_user_pwd *VAR_3;
    unsigned char VAR_4[VAR_0];
    unsigned char VAR_5[VAR_0];
    EVP_MD_CTX *VAR_6 = ((void*)0);

    if (VAR_1 == ((void*)0))
        return ((void*)0);

    if ((VAR_3 = FUNC_13(VAR_1, VAR_2)) != ((void*)0))
        return FUNC_14(VAR_3);

    if ((VAR_1->seed_key == ((void*)0)) ||
        (VAR_1->default_g == ((void*)0)) || (VAR_1->default_N == ((void*)0)))
        return ((void*)0);



    if ((VAR_3 = FUNC_9()) == ((void*)0))
        return ((void*)0);

    FUNC_12(VAR_3, VAR_1->default_g, VAR_1->default_N);

    if (!FUNC_11(VAR_3, VAR_2, ((void*)0)))
        goto err;

    if (FUNC_7(VAR_4, VAR_0) <= 0)
        goto err;
    VAR_6 = FUNC_5();
    if (VAR_6 == ((void*)0)
        || !FUNC_2(VAR_6, FUNC_6(), ((void*)0))
        || !FUNC_3(VAR_6, VAR_1->seed_key, FUNC_15(VAR_1->seed_key))
        || !FUNC_3(VAR_6, VAR_2, FUNC_15(VAR_2))
        || !FUNC_1(VAR_6, VAR_5, ((void*)0)))
        goto err;
    FUNC_4(VAR_6);
    VAR_6 = ((void*)0);
    if (FUNC_10(VAR_3,
                               FUNC_0(VAR_5, VAR_0, ((void*)0)),
                               FUNC_0(VAR_4, VAR_0, ((void*)0))))
        return VAR_3;

 err:
    FUNC_4(VAR_6);
    FUNC_8(VAR_3);
    return ((void*)0);
}
