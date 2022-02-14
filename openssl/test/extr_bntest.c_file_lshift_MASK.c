
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STANZA ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int *,int *) ;
 int * FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int*,char*) ;

__attribute__((used)) static int FUNC_9(STANZA *VAR_0)
{
    BIGNUM *VAR_1 = ((void*)0), *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
    int VAR_4 = 0, VAR_5 = 0;

    if (!FUNC_4(VAR_1 = FUNC_7(VAR_0, "A"))
            || !FUNC_4(VAR_2 = FUNC_7(VAR_0, "LShift"))
            || !FUNC_4(VAR_3 = FUNC_2())
            || !FUNC_8(VAR_0, &VAR_4, "N"))
        goto err;

    if (!FUNC_5(FUNC_1(VAR_3, VAR_1, VAR_4))
            || !FUNC_6("A << N", VAR_2, VAR_3)
            || !FUNC_5(FUNC_3(VAR_3, VAR_2, VAR_4))
            || !FUNC_6("A >> N", VAR_1, VAR_3))
        goto err;

    VAR_5 = 1;
 err:
    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
    return VAR_5;
}
