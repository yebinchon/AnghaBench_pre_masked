
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {size_t data_size; int data_type; int * data; } ;
struct TYPE_9__ {int curr; size_t const total_blocks; size_t const secure_blocks; } ;
typedef int OSSL_PARAM_BLD_BLOCK ;
typedef TYPE_1__ OSSL_PARAM_BLD ;
typedef TYPE_2__ OSSL_PARAM ;


 size_t const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (size_t const) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (size_t const) ;
 int VAR_4 ;
 size_t FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,TYPE_2__*,int *,int *) ;

OSSL_PARAM *FUNC_6(OSSL_PARAM_BLD *VAR_5)
{
    OSSL_PARAM_BLD_BLOCK *VAR_6, *VAR_7 = ((void*)0);
    OSSL_PARAM *VAR_8, *VAR_9;
    const size_t VAR_10 = FUNC_4((1 + VAR_5->curr) * sizeof(*VAR_8));
    const size_t VAR_11 = VAR_0 * (VAR_10 + VAR_5->total_blocks);
    const size_t VAR_12 = VAR_0 * VAR_5->secure_blocks;

    if (VAR_12 > 0) {
        VAR_7 = FUNC_3(VAR_12);
        if (VAR_7 == ((void*)0)) {
            FUNC_0(VAR_1,
                      VAR_2);
            return ((void*)0);
        }
    }
    VAR_8 = FUNC_1(VAR_11);
    if (VAR_8 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_3);
        FUNC_2(VAR_7);
        return ((void*)0);
    }
    VAR_6 = VAR_10 + (OSSL_PARAM_BLD_BLOCK *)(VAR_8);
    VAR_9 = FUNC_5(VAR_5, VAR_8, VAR_6, VAR_7);
    VAR_9->data_size = VAR_12;
    VAR_9->data = VAR_7;
    VAR_9->data_type = VAR_4;
    return VAR_8;
}
