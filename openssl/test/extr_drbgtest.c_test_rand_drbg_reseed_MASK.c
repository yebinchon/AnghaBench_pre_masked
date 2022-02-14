
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int rand_add_buf ;
struct TYPE_25__ {int fail; } ;
struct TYPE_24__ {int reseed_prop_counter; int parent; } ;
typedef TYPE_1__ RAND_DRBG ;


 TYPE_1__* FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (unsigned char*,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_9__*) ;
 TYPE_9__ VAR_0 ;
 int FUNC_13 (unsigned char*,char,int) ;
 TYPE_9__ VAR_1 ;
 TYPE_9__ VAR_2 ;
 int FUNC_14 () ;
 int FUNC_15 (int,TYPE_1__*,TYPE_1__*,TYPE_1__*,int,int,int,scalar_t__) ;
 int FUNC_16 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_19(void)
{
    RAND_DRBG *VAR_3, *VAR_4, *VAR_5;
    unsigned char VAR_6[256];
    int VAR_7=0;
    time_t VAR_8;


    if (!FUNC_8(FUNC_6(), FUNC_4()))
        return 0;


    if (!FUNC_7(VAR_3 = FUNC_0())
        || !FUNC_7(VAR_4 = FUNC_2())
        || !FUNC_7(VAR_5 = FUNC_1()))
        return 0;


    if (!FUNC_9(VAR_4, VAR_5)
        || !FUNC_9(VAR_4, VAR_3)
        || !FUNC_9(VAR_5, VAR_3)
        || !FUNC_8(VAR_4->parent, VAR_3)
        || !FUNC_8(VAR_5->parent, VAR_3))
        return 0;


    if (!FUNC_10(FUNC_11(VAR_3)))
        return 0;


    FUNC_3(VAR_5);
    FUNC_3(VAR_4);
    FUNC_3(VAR_3);



    FUNC_12(VAR_3, &VAR_0);
    FUNC_12(VAR_4, &VAR_2);
    FUNC_12(VAR_5, &VAR_1);





    if (!FUNC_10(FUNC_15(1, VAR_3, VAR_4, VAR_5, 1, 1, 1, 0)))
        goto error;
    FUNC_14();





    if (!FUNC_10(FUNC_15(1, VAR_3, VAR_4, VAR_5, 0, 0, 0, 0)))
        goto error;
    FUNC_14();





    VAR_3->reseed_prop_counter++;
    if (!FUNC_10(FUNC_15(1, VAR_3, VAR_4, VAR_5, 0, 1, 1, 0)))
        goto error;
    FUNC_14();





    VAR_3->reseed_prop_counter++;
    VAR_5->reseed_prop_counter++;
    if (!FUNC_10(FUNC_15(1, VAR_3, VAR_4, VAR_5, 0, 1, 0, 0)))
        goto error;
    FUNC_14();





    VAR_3->reseed_prop_counter++;
    VAR_4->reseed_prop_counter++;
    if (!FUNC_10(FUNC_15(1, VAR_3, VAR_4, VAR_5, 0, 0, 1, 0)))
        goto error;
    FUNC_14();







    FUNC_13(VAR_6, 'r', sizeof(VAR_6));
    VAR_8 = FUNC_17(((void*)0));
    FUNC_5(VAR_6, sizeof(VAR_6), sizeof(VAR_6));
    if (!FUNC_10(FUNC_15(1, VAR_3, VAR_4, VAR_5, 1, 1, 1,
                                    VAR_8)))
        goto error;
    FUNC_14();





    VAR_0.fail = 1;
    VAR_3->reseed_prop_counter++;
    FUNC_5(VAR_6, sizeof(VAR_6), sizeof(VAR_6));
    if (!FUNC_10(FUNC_15(0, VAR_3, VAR_4, VAR_5, 0, 0, 0, 0)))
        goto error;
    FUNC_14();
    VAR_7 = 1;

error:

    FUNC_18(VAR_3);
    FUNC_18(VAR_4);
    FUNC_18(VAR_5);

    return VAR_7;
}
