
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef int drbg ;
struct TYPE_18__ {scalar_t__ strength; TYPE_1__* seed_pool; TYPE_12__* parent; int reseed_next_counter; int secure; } ;
struct TYPE_17__ {int entropy_requested; } ;
struct TYPE_16__ {scalar_t__ strength; int reseed_prop_counter; } ;
typedef TYPE_1__ RAND_POOL ;
typedef TYPE_2__ RAND_DRBG ;


 scalar_t__ FUNC_0 (TYPE_12__*,unsigned char*,size_t,int,unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_12__*) ;
 int FUNC_3 (TYPE_12__*) ;
 size_t FUNC_4 (TYPE_1__*) ;
 unsigned char* FUNC_5 (TYPE_1__*,size_t) ;
 int FUNC_6 (TYPE_1__*,size_t,int) ;
 size_t FUNC_7 (TYPE_1__*,int) ;
 unsigned char* FUNC_8 (TYPE_1__*) ;
 size_t FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 size_t FUNC_11 (TYPE_1__*) ;
 TYPE_1__* FUNC_12 (int,int ,size_t,size_t) ;
 int FUNC_13 (int *) ;

size_t FUNC_14(RAND_DRBG *VAR_2,
                             unsigned char **VAR_3,
                             int VAR_4, size_t VAR_5, size_t VAR_6,
                             int VAR_7)
{
    size_t VAR_8 = 0;
    size_t VAR_9 = 0;
    RAND_POOL *VAR_10;

    if (VAR_2->parent != ((void*)0) && VAR_2->strength > VAR_2->parent->strength) {




        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_2->seed_pool != ((void*)0)) {
        VAR_10 = VAR_2->seed_pool;
        VAR_10->entropy_requested = VAR_4;
    } else {
        VAR_10 = FUNC_12(VAR_4, VAR_2->secure, VAR_5, VAR_6);
        if (VAR_10 == ((void*)0))
            return 0;
    }

    if (VAR_2->parent != ((void*)0)) {
        size_t VAR_11 = FUNC_7(VAR_10, 1 );
        unsigned char *VAR_12 = FUNC_5(VAR_10, VAR_11);

        if (VAR_12 != ((void*)0)) {
            size_t VAR_13 = 0;
            FUNC_2(VAR_2->parent);
            if (FUNC_0(VAR_2->parent,
                                   VAR_12, VAR_11,
                                   VAR_7,
                                   (unsigned char *)&VAR_2, sizeof(VAR_2)) != 0)
                VAR_13 = VAR_11;
            VAR_2->reseed_next_counter
                = FUNC_13(&VAR_2->parent->reseed_prop_counter);
            FUNC_3(VAR_2->parent);

            FUNC_6(VAR_10, VAR_13, 8 * VAR_13);
            VAR_9 = FUNC_9(VAR_10);
        }

    } else {

        VAR_9 = FUNC_4(VAR_10);
    }

    if (VAR_9 > 0) {
        VAR_8 = FUNC_11(VAR_10);
        *VAR_3 = FUNC_8(VAR_10);
    }

    if (VAR_2->seed_pool == ((void*)0))
        FUNC_10(VAR_10);
    return VAR_8;
}
