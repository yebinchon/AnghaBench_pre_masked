
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int SECURITY_DESCRIPTOR ;
typedef int* PULONG ;
typedef int * PSID ;
typedef int * PSECURITY_DESCRIPTOR ;
typedef int * PACL ;
typedef scalar_t__ NTSTATUS ;
typedef int ACL ;
typedef int ACCESS_DENIED_ACE ;
typedef int ACCESS_ALLOWED_ACE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int *,int *,int*) ;
 scalar_t__ FUNC_2 (int *,int ,int,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int,int *) ;
 scalar_t__ FUNC_4 (int *,int,int ,int ,int ,int ,int ,int ,int ,int ,int **) ;
 int * FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int *,int,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_12 (int *,int *,int ) ;
 scalar_t__ FUNC_13 (int *,int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

NTSTATUS
FUNC_14(PSECURITY_DESCRIPTOR *VAR_22,
                   PULONG VAR_23)
{
    SECURITY_DESCRIPTOR VAR_24;
    PSECURITY_DESCRIPTOR VAR_25 = ((void*)0);
    ULONG VAR_26 = 0;
    PSID VAR_27 = ((void*)0);
    PSID VAR_28 = ((void*)0);
    PSID VAR_29 = ((void*)0);
    PSID VAR_30 = ((void*)0);
    PSID VAR_31 = ((void*)0);
    PSID VAR_32 = ((void*)0);
    PACL VAR_33 = ((void*)0);
    ULONG VAR_34;
    NTSTATUS VAR_35;

    if (VAR_22 == ((void*)0) || VAR_23 == ((void*)0))
        return VAR_19;

    *VAR_22 = ((void*)0);
    *VAR_23 = 0;


    VAR_35 = FUNC_7(&VAR_24,
                                         VAR_12);
    if (!FUNC_0(VAR_35))
        return VAR_35;

    VAR_35 = FUNC_4(&VAR_4,
                                         1,
                                         VAR_10,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         &VAR_27);
    if (!FUNC_0(VAR_35))
        goto done;

    VAR_35 = FUNC_4(&VAR_4,
                                         2,
                                         VAR_11,
                                         VAR_1,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         &VAR_28);
    if (!FUNC_0(VAR_35))
        goto done;

    VAR_35 = FUNC_4(&VAR_21,
                                         1,
                                         VAR_16,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         &VAR_29);
    if (!FUNC_0(VAR_35))
        goto done;

    VAR_35 = FUNC_4(&VAR_4,
                                         1,
                                         VAR_13,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         &VAR_30);
    if (!FUNC_0(VAR_35))
        goto done;

    VAR_35 = FUNC_4(&VAR_4,
                                         1,
                                         VAR_15,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         &VAR_31);
    if (!FUNC_0(VAR_35))
        goto done;

    VAR_35 = FUNC_4(&VAR_4,
                                         1,
                                         VAR_14,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         &VAR_32);
    if (!FUNC_0(VAR_35))
        goto done;


    VAR_34 = sizeof(ACL) +
               sizeof(ACCESS_DENIED_ACE) - sizeof(ULONG) + FUNC_10(VAR_27) +
               sizeof(ACCESS_ALLOWED_ACE) - sizeof(ULONG) + FUNC_10(VAR_28) +
               sizeof(ACCESS_ALLOWED_ACE) - sizeof(ULONG) + FUNC_10(VAR_29) +
               sizeof(ACCESS_ALLOWED_ACE) - sizeof(ULONG) + FUNC_10(VAR_27) +
               sizeof(ACCESS_ALLOWED_ACE) - sizeof(ULONG) + FUNC_10(VAR_30) +
               sizeof(ACCESS_ALLOWED_ACE) - sizeof(ULONG) + FUNC_10(VAR_31);

    VAR_33 = FUNC_5(FUNC_9(),
                           VAR_3,
                           VAR_34);
    if (VAR_33 == ((void*)0))
    {
        VAR_35 = VAR_18;
        goto done;
    }

    VAR_35 = FUNC_6(VAR_33,
                          VAR_34,
                          VAR_0);
    if (!FUNC_0(VAR_35))
        goto done;

    VAR_35 = FUNC_3(VAR_33,
                                   VAR_0,
                                   VAR_7,
                                   VAR_27);
    if (!FUNC_0(VAR_35))
        goto done;

    VAR_35 = FUNC_2(VAR_33,
                                    VAR_0,
                                    VAR_5 | VAR_8,
                                    VAR_28);
    if (!FUNC_0(VAR_35))
        goto done;

    VAR_35 = FUNC_2(VAR_33,
                                    VAR_0,
                                    VAR_6,
                                    VAR_29);
    if (!FUNC_0(VAR_35))
        goto done;

    VAR_35 = FUNC_2(VAR_33,
                                    VAR_0,
                                    VAR_7 | VAR_9,
                                    VAR_27);
    if (!FUNC_0(VAR_35))
        goto done;

    VAR_35 = FUNC_2(VAR_33,
                                    VAR_0,
                                    VAR_8,
                                    VAR_30);
    if (!FUNC_0(VAR_35))
        goto done;

    VAR_35 = FUNC_2(VAR_33,
                                    VAR_0,
                                    VAR_8,
                                    VAR_31);
    if (!FUNC_0(VAR_35))
        goto done;

    VAR_35 = FUNC_11(&VAR_24,
                                          VAR_20,
                                          VAR_33,
                                          VAR_2);
    if (!FUNC_0(VAR_35))
        goto done;

    VAR_35 = FUNC_12(&VAR_24,
                                           VAR_32,
                                           VAR_2);
    if (!FUNC_0(VAR_35))
        goto done;

    VAR_35 = FUNC_13(&VAR_24,
                                           VAR_28,
                                           VAR_2);
    if (!FUNC_0(VAR_35))
        goto done;

    VAR_35 = FUNC_1(&VAR_24,
                                         VAR_25,
                                         &VAR_26);
    if (VAR_35 != VAR_17)
        goto done;

    VAR_25 = FUNC_5(FUNC_9(),
                                 VAR_3,
                                 VAR_26);
    if (VAR_25 == ((void*)0))
    {
        VAR_35 = VAR_18;
        goto done;
    }

    VAR_35 = FUNC_1(&VAR_24,
                                         VAR_25,
                                         &VAR_26);
    if (!FUNC_0(VAR_35))
        goto done;

    *VAR_22 = VAR_25;
    *VAR_23 = VAR_26;

done:
    if (VAR_33 != ((void*)0))
        FUNC_8(FUNC_9(), 0, VAR_33);

    if (VAR_27 != ((void*)0))
        FUNC_8(FUNC_9(), 0, VAR_27);

    if (VAR_28 != ((void*)0))
        FUNC_8(FUNC_9(), 0, VAR_28);

    if (VAR_29 != ((void*)0))
        FUNC_8(FUNC_9(), 0, VAR_29);

    if (VAR_30 != ((void*)0))
        FUNC_8(FUNC_9(), 0, VAR_30);

    if (VAR_31 != ((void*)0))
        FUNC_8(FUNC_9(), 0, VAR_31);

    if (VAR_32 != ((void*)0))
        FUNC_8(FUNC_9(), 0, VAR_32);

    if (!FUNC_0(VAR_35))
    {
        if (VAR_25 != ((void*)0))
            FUNC_8(FUNC_9(), 0, VAR_25);
    }

    return VAR_35;
}
