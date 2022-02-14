
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct blake2_mac_data_st {int params; void* key; } ;
struct TYPE_7__ {scalar_t__ data_size; int data; } ;
typedef TYPE_1__ OSSL_PARAM ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_1__ const*,void**,scalar_t__,size_t*) ;
 int FUNC_6 (TYPE_1__ const*,size_t*) ;
 TYPE_1__* FUNC_7 (TYPE_1__ const*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (void*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(void *VAR_13, const OSSL_PARAM VAR_14[])
{
    struct blake2_mac_data_st *VAR_15 = VAR_13;
    const OSSL_PARAM *VAR_16;

    if ((VAR_16 = FUNC_7(VAR_14, VAR_8)) != ((void*)0)) {
        size_t VAR_17;

        if (!FUNC_6(VAR_16, &VAR_17)
            || VAR_17 < 1
            || VAR_17 > VAR_1) {
            FUNC_4(VAR_4, VAR_12);
            return 0;
        }
        FUNC_0(&VAR_15->params, (uint8_t)VAR_17);
    }

    if ((VAR_16 = FUNC_7(VAR_14, VAR_6)) != ((void*)0)) {
        size_t VAR_18;
        void *VAR_19 = VAR_15->key;

        if (!FUNC_5(VAR_16, &VAR_19, VAR_0, &VAR_18)) {
            FUNC_4(VAR_4, VAR_10);
            return 0;
        }

        FUNC_8(VAR_15->key + VAR_18, 0, VAR_0 - VAR_18);

        FUNC_1(&VAR_15->params, (uint8_t)VAR_18);
    }

    if ((VAR_16 = FUNC_7(VAR_14, VAR_5))
        != ((void*)0)) {




        if (VAR_16->data_size > VAR_2) {
            FUNC_4(VAR_4, VAR_9);
            return 0;
        }
        FUNC_2(&VAR_15->params, VAR_16->data, VAR_16->data_size);
    }

    if ((VAR_16 = FUNC_7(VAR_14, VAR_7)) != ((void*)0)) {




        if (VAR_16->data_size > VAR_3) {
            FUNC_4(VAR_4, VAR_11);
            return 0;
        }
        FUNC_3(&VAR_15->params, VAR_16->data, VAR_16->data_size);
    }
    return 1;
}
