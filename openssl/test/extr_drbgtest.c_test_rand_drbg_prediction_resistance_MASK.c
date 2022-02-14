
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int buf2 ;
typedef int buf1 ;
struct TYPE_10__ {int reseed_prop_counter; } ;
typedef TYPE_1__ RAND_DRBG ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int,int,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 TYPE_1__* FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (unsigned char*,int,unsigned char*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(void)
{
    RAND_DRBG *VAR_0 = ((void*)0), *VAR_1 = ((void*)0), *VAR_2 = ((void*)0);
    unsigned char VAR_3[51], VAR_4[sizeof(VAR_3)];
    int VAR_5 = 0, VAR_6, VAR_7, VAR_8;


    if (!FUNC_8(VAR_0 = FUNC_3(0, 0, ((void*)0)))
        || !FUNC_9(FUNC_10(VAR_0))
        || !FUNC_9(FUNC_2(VAR_0, ((void*)0), 0))
        || !FUNC_8(VAR_1 = FUNC_3(0, 0, VAR_0))
        || !FUNC_9(FUNC_2(VAR_1, ((void*)0), 0))
        || !FUNC_8(VAR_2 = FUNC_3(0, 0, VAR_1))
        || !FUNC_9(FUNC_2(VAR_2, ((void*)0), 0)))
        goto err;


    VAR_6 = ++VAR_0->reseed_prop_counter;
    VAR_7 = ++VAR_1->reseed_prop_counter;
    VAR_8 = VAR_2->reseed_prop_counter;
    if (!FUNC_9(FUNC_4(VAR_2, ((void*)0), 0, 0))
        || !FUNC_5(VAR_0->reseed_prop_counter, VAR_6)
        || !FUNC_5(VAR_1->reseed_prop_counter, VAR_7)
        || !FUNC_6(VAR_2->reseed_prop_counter, VAR_8))
        goto err;





    VAR_8 = VAR_2->reseed_prop_counter;
    if (!FUNC_9(FUNC_4(VAR_2, ((void*)0), 0, 1))
        || !FUNC_6(VAR_0->reseed_prop_counter, VAR_6)
        || !FUNC_6(VAR_1->reseed_prop_counter, VAR_7)
        || !FUNC_6(VAR_2->reseed_prop_counter, VAR_8))
        goto err;


    VAR_6 = ++VAR_0->reseed_prop_counter;
    VAR_7 = ++VAR_1->reseed_prop_counter;
    VAR_8 = VAR_2->reseed_prop_counter;
    if (!FUNC_9(FUNC_1(VAR_2, VAR_3, sizeof(VAR_3), 0, ((void*)0), 0))
        || !FUNC_5(VAR_0->reseed_prop_counter, VAR_6)
        || !FUNC_5(VAR_1->reseed_prop_counter, VAR_7)
        || !FUNC_6(VAR_2->reseed_prop_counter, VAR_8))
        goto err;





    VAR_8 = VAR_2->reseed_prop_counter;
    if (!FUNC_9(FUNC_1(VAR_2, VAR_4, sizeof(VAR_4), 1, ((void*)0), 0))
        || !FUNC_6(VAR_0->reseed_prop_counter, VAR_6)
        || !FUNC_6(VAR_1->reseed_prop_counter, VAR_7)
        || !FUNC_6(VAR_2->reseed_prop_counter, VAR_8)
        || !FUNC_7(VAR_3, sizeof(VAR_3), VAR_4, sizeof(VAR_4)))
        goto err;


    VAR_6 = ++VAR_0->reseed_prop_counter;
    VAR_7 = ++VAR_1->reseed_prop_counter;
    VAR_8 = VAR_2->reseed_prop_counter;
    if (!FUNC_9(FUNC_4(VAR_2, ((void*)0), 0, 0))
        || !FUNC_5(VAR_0->reseed_prop_counter, VAR_6)
        || !FUNC_5(VAR_1->reseed_prop_counter, VAR_7)
        || !FUNC_6(VAR_2->reseed_prop_counter, VAR_8))
        goto err;

    VAR_5 = 1;
err:
    FUNC_0(VAR_2);
    FUNC_0(VAR_1);
    FUNC_0(VAR_0);
    return VAR_5;
}
