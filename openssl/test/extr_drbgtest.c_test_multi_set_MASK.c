
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RAND_DRBG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(void)
{
    int VAR_4 = 0;
    RAND_DRBG *VAR_5 = ((void*)0);


    if (!FUNC_5(VAR_5 = FUNC_2(0, 0, ((void*)0)))
        || !FUNC_6(FUNC_7(VAR_5)))
        goto err;

    if (!FUNC_6(FUNC_3(VAR_5, VAR_1, VAR_3)))
        goto err;

    if (!FUNC_6(FUNC_3(VAR_5, VAR_1, VAR_3)))
        goto err;

    if (!FUNC_6(FUNC_3(VAR_5, VAR_2, 0)))
        goto err;

    if (!FUNC_6(FUNC_3(VAR_5, VAR_2, 0)))
        goto err;

    if (!FUNC_6(FUNC_3(VAR_5, VAR_0, 0)))
        goto err;

    if (!FUNC_6(FUNC_3(VAR_5, VAR_0, 0)))
        goto err;
    if (!FUNC_4(FUNC_1(VAR_5, ((void*)0), 0), 0))
        goto err;

    VAR_4 = 1;
err:
    FUNC_8(VAR_5);
    FUNC_0(VAR_5);
    return VAR_4;
}
