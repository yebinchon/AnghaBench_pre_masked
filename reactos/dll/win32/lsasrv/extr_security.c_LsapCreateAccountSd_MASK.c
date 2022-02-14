
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
typedef int ACCESS_ALLOWED_ACE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,int *,int*) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int,int ,int ,int ,int ,int ,int ,int ,int ,int **) ;
 int * FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (int *,int,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_11 (int *,int *,int ) ;
 scalar_t__ FUNC_12 (int *,int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

NTSTATUS
FUNC_13(PSECURITY_DESCRIPTOR *VAR_16,
                    PULONG VAR_17)
{
    SECURITY_DESCRIPTOR VAR_18;
    PSECURITY_DESCRIPTOR VAR_19 = ((void*)0);
    ULONG VAR_20 = 0;
    PSID VAR_21 = ((void*)0);
    PSID VAR_22 = ((void*)0);
    PSID VAR_23 = ((void*)0);
    PACL VAR_24 = ((void*)0);
    ULONG VAR_25;
    NTSTATUS VAR_26;

    if (VAR_16 == ((void*)0) || VAR_17 == ((void*)0))
        return VAR_13;

    *VAR_16 = ((void*)0);
    *VAR_17 = 0;


    VAR_26 = FUNC_6(&VAR_18,
                                         VAR_8);
    if (!FUNC_0(VAR_26))
        return VAR_26;

    VAR_26 = FUNC_3(&VAR_6,
                                         2,
                                         VAR_7,
                                         VAR_3,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         &VAR_21);
    if (!FUNC_0(VAR_26))
        goto done;

    VAR_26 = FUNC_3(&VAR_15,
                                         1,
                                         VAR_10,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         &VAR_22);
    if (!FUNC_0(VAR_26))
        goto done;

    VAR_26 = FUNC_3(&VAR_6,
                                         1,
                                         VAR_9,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         &VAR_23);
    if (!FUNC_0(VAR_26))
        goto done;


    VAR_25 = sizeof(ACL) +
               sizeof(ACCESS_ALLOWED_ACE) - sizeof(ULONG) + FUNC_9(VAR_21) +
               sizeof(ACCESS_ALLOWED_ACE) - sizeof(ULONG) + FUNC_9(VAR_22);

    VAR_24 = FUNC_4(FUNC_8(),
                           VAR_5,
                           VAR_25);
    if (VAR_24 == ((void*)0))
    {
        VAR_26 = VAR_12;
        goto done;
    }

    VAR_26 = FUNC_5(VAR_24,
                          VAR_25,
                          VAR_2);
    if (!FUNC_0(VAR_26))
        goto done;

    VAR_26 = FUNC_2(VAR_24,
                                    VAR_2,
                                    VAR_0,
                                    VAR_21);
    if (!FUNC_0(VAR_26))
        goto done;

    VAR_26 = FUNC_2(VAR_24,
                                    VAR_2,
                                    VAR_1,
                                    VAR_22);
    if (!FUNC_0(VAR_26))
        goto done;

    VAR_26 = FUNC_10(&VAR_18,
                                          VAR_14,
                                          VAR_24,
                                          VAR_4);
    if (!FUNC_0(VAR_26))
        goto done;

    VAR_26 = FUNC_11(&VAR_18,
                                           VAR_23,
                                           VAR_4);
    if (!FUNC_0(VAR_26))
        goto done;

    VAR_26 = FUNC_12(&VAR_18,
                                           VAR_21,
                                           VAR_4);
    if (!FUNC_0(VAR_26))
        goto done;

    VAR_26 = FUNC_1(&VAR_18,
                                         VAR_19,
                                         &VAR_20);
    if (VAR_26 != VAR_11)
        goto done;

    VAR_19 = FUNC_4(FUNC_8(),
                                 VAR_5,
                                 VAR_20);
    if (VAR_19 == ((void*)0))
    {
        VAR_26 = VAR_12;
        goto done;
    }

    VAR_26 = FUNC_1(&VAR_18,
                                         VAR_19,
                                         &VAR_20);
    if (!FUNC_0(VAR_26))
        goto done;

    *VAR_16 = VAR_19;
    *VAR_17 = VAR_20;

done:
    if (VAR_24 != ((void*)0))
        FUNC_7(FUNC_8(), 0, VAR_24);

    if (VAR_21 != ((void*)0))
        FUNC_7(FUNC_8(), 0, VAR_21);

    if (VAR_22 != ((void*)0))
        FUNC_7(FUNC_8(), 0, VAR_22);

    if (VAR_23 != ((void*)0))
        FUNC_7(FUNC_8(), 0, VAR_23);

    if (!FUNC_0(VAR_26))
    {
        if (VAR_19 != ((void*)0))
            FUNC_7(FUNC_8(), 0, VAR_19);
    }

    return VAR_26;
}
