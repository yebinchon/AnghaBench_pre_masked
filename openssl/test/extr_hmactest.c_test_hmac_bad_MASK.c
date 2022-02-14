
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_len; int data; } ;
typedef int HMAC_CTX ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *,int ,int *,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_9(void)
{
    HMAC_CTX *VAR_1 = ((void*)0);
    int VAR_2 = 0;

    VAR_1 = FUNC_3();
    if (!FUNC_7(VAR_1)
        || !FUNC_8(FUNC_2(VAR_1))
        || !FUNC_6(FUNC_4(VAR_1, ((void*)0), 0, ((void*)0), ((void*)0)))
        || !FUNC_6(FUNC_5(VAR_1, VAR_0[4].data, VAR_0[4].data_len))
        || !FUNC_6(FUNC_4(VAR_1, ((void*)0), 0, FUNC_0(), ((void*)0)))
        || !FUNC_6(FUNC_5(VAR_1, VAR_0[4].data, VAR_0[4].data_len)))
        goto err;

    VAR_2 = 1;
err:
    FUNC_1(VAR_1);
    return VAR_2;
}
