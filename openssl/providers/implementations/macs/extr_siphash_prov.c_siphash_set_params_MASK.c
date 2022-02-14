
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct siphash_data_st {int siphash; } ;
struct TYPE_6__ {scalar_t__ data_type; scalar_t__ data_size; int data; } ;
typedef TYPE_1__ OSSL_PARAM ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__ const*,size_t*) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,size_t) ;

__attribute__((used)) static int FUNC_4(void *VAR_4, const OSSL_PARAM *VAR_5)
{
    struct siphash_data_st *VAR_6 = VAR_4;
    const OSSL_PARAM *VAR_7 = ((void*)0);

    if ((VAR_7 = FUNC_1(VAR_5, VAR_1)) != ((void*)0)) {
        size_t VAR_8;

        if (!FUNC_0(VAR_7, &VAR_8)
            || !FUNC_3(&VAR_6->siphash, VAR_8))
            return 0;
    }
    if ((VAR_7 = FUNC_1(VAR_5, VAR_0)) != ((void*)0))
        if (VAR_7->data_type != VAR_2
            || VAR_7->data_size != VAR_3
            || !FUNC_2(&VAR_6->siphash, VAR_7->data, 0, 0))
            return 0;
    return 1;
}
