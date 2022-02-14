
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int secure; scalar_t__ strength; int reseed_time_interval; int reseed_interval; void* cleanup_entropy; void* get_entropy; int cleanup_nonce; int get_nonce; struct TYPE_11__* parent; int fork_id; int * libctx; } ;
typedef TYPE_1__ RAND_DRBG ;
typedef int OPENSSL_CTX ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 () ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static RAND_DRBG *FUNC_9(OPENSSL_CTX *VAR_13,
                                int VAR_14,
                                int VAR_15,
                                unsigned int VAR_16,
                                RAND_DRBG *VAR_17)
{
    RAND_DRBG *VAR_18 = VAR_14 ? FUNC_1(sizeof(*VAR_18))
                             : FUNC_2(sizeof(*VAR_18));

    if (VAR_18 == ((void*)0)) {
        FUNC_5(VAR_1, VAR_0);
        return ((void*)0);
    }

    VAR_18->libctx = VAR_13;
    VAR_18->secure = VAR_14 && FUNC_0(VAR_18);
    VAR_18->fork_id = FUNC_6();
    VAR_18->parent = VAR_17;

    if (VAR_17 == ((void*)0)) {




        VAR_18->get_entropy = VAR_9;
        VAR_18->cleanup_entropy = VAR_7;


        VAR_18->get_nonce = VAR_10;
        VAR_18->cleanup_nonce = VAR_8;


        VAR_18->reseed_interval = VAR_3;
        VAR_18->reseed_time_interval = VAR_4;
    } else {
        VAR_18->get_entropy = VAR_9;
        VAR_18->cleanup_entropy = VAR_7;





        VAR_18->reseed_interval = VAR_11;
        VAR_18->reseed_time_interval = VAR_12;
    }

    if (FUNC_4(VAR_18, VAR_15, VAR_16) == 0)
        goto err;

    if (VAR_17 != ((void*)0)) {
        FUNC_7(VAR_17);
        if (VAR_18->strength > VAR_17->strength) {




            FUNC_8(VAR_17);
            FUNC_5(VAR_1, VAR_2);
            goto err;
        }
        FUNC_8(VAR_17);
    }

    return VAR_18;

 err:
    FUNC_3(VAR_18);

    return ((void*)0);
}
