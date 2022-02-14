
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int curr; size_t total_blocks; size_t secure_blocks; } ;
typedef int OSSL_PARAM_BLD_BLOCK ;
typedef TYPE_1__ OSSL_PARAM_BLD ;
typedef int OSSL_PARAM ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int *) ;

OSSL_PARAM *FUNC_2(OSSL_PARAM_BLD *VAR_6, OSSL_PARAM *VAR_7,
                                       size_t VAR_8, void *VAR_9,
                                       size_t VAR_10, void *VAR_11,
                                       size_t VAR_12)
{
    if (VAR_7 == ((void*)0) || VAR_9 == ((void*)0)) {
        FUNC_0(VAR_1,
                  VAR_5);
        return ((void*)0);
    }
    if (VAR_8 < VAR_6->curr + 1) {
        FUNC_0(VAR_1,
                  VAR_3);
        return ((void*)0);
    }
    if (VAR_10 < VAR_0 * VAR_6->total_blocks) {
        FUNC_0(VAR_1,
                  VAR_2);
        return ((void*)0);
    }
    if (VAR_6->secure_blocks > 0 && VAR_12 < VAR_0 * VAR_6->secure_blocks) {
        FUNC_0(VAR_1,
                  VAR_4);
        return ((void*)0);
    }
    FUNC_1(VAR_6, VAR_7, (OSSL_PARAM_BLD_BLOCK *)VAR_9,
                      (OSSL_PARAM_BLD_BLOCK *)VAR_11);
    return VAR_7;
}
