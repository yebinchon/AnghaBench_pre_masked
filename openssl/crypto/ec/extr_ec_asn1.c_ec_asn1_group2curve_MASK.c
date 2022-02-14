
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_7__* seed; int b; int a; } ;
typedef TYPE_1__ X9_62_CURVE ;
struct TYPE_12__ {int flags; } ;
struct TYPE_11__ {scalar_t__ seed_len; scalar_t__ seed; } ;
typedef TYPE_2__ EC_GROUP ;
typedef int BIGNUM ;


 int FUNC_0 (TYPE_7__*) ;
 TYPE_7__* FUNC_1 () ;
 int FUNC_2 (TYPE_7__*,scalar_t__,int) ;
 int FUNC_3 (int ,unsigned char*,size_t) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int *,unsigned char*,size_t) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int VAR_1 ;
 int FUNC_7 (TYPE_2__ const*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__ const*) ;
 int FUNC_9 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (unsigned char*) ;
 unsigned char* FUNC_11 (size_t) ;

__attribute__((used)) static int FUNC_12(const EC_GROUP *VAR_6, X9_62_CURVE *VAR_7)
{
    int VAR_8 = 0;
    BIGNUM *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    unsigned char *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    size_t VAR_13;

    if (!VAR_6 || !VAR_7 || !VAR_7->a || !VAR_7->b)
        return 0;

    if ((VAR_9 = FUNC_6()) == ((void*)0) || (VAR_10 = FUNC_6()) == ((void*)0)) {
        FUNC_9(VAR_1, VAR_5);
        goto err;
    }


    if (!FUNC_7(VAR_6, ((void*)0), VAR_9, VAR_10, ((void*)0))) {
        FUNC_9(VAR_1, VAR_4);
        goto err;
    }






    VAR_13 = ((size_t)FUNC_8(VAR_6) + 7) / 8;
    if ((VAR_11 = FUNC_11(VAR_13)) == ((void*)0)
        || (VAR_12 = FUNC_11(VAR_13)) == ((void*)0)) {
        FUNC_9(VAR_1, VAR_5);
        goto err;
    }
    if (FUNC_4(VAR_9, VAR_11, VAR_13) < 0
        || FUNC_4(VAR_10, VAR_12, VAR_13) < 0) {
        FUNC_9(VAR_1, VAR_3);
        goto err;
    }


    if (!FUNC_3(VAR_7->a, VAR_11, VAR_13)
        || !FUNC_3(VAR_7->b, VAR_12, VAR_13)) {
        FUNC_9(VAR_1, VAR_2);
        goto err;
    }


    if (VAR_6->seed) {
        if (!VAR_7->seed)
            if ((VAR_7->seed = FUNC_1()) == ((void*)0)) {
                FUNC_9(VAR_1, VAR_5);
                goto err;
            }
        VAR_7->seed->flags &= ~(VAR_0 | 0x07);
        VAR_7->seed->flags |= VAR_0;
        if (!FUNC_2(VAR_7->seed, VAR_6->seed,
                                 (int)VAR_6->seed_len)) {
            FUNC_9(VAR_1, VAR_2);
            goto err;
        }
    } else {
        FUNC_0(VAR_7->seed);
        VAR_7->seed = ((void*)0);
    }

    VAR_8 = 1;

 err:
    FUNC_10(VAR_11);
    FUNC_10(VAR_12);
    FUNC_5(VAR_9);
    FUNC_5(VAR_10);
    return VAR_8;
}
