
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ return_size; int * key; } ;
typedef TYPE_1__ OSSL_PARAM ;


 TYPE_1__* FUNC_0 (TYPE_1__*,size_t) ;

__attribute__((used)) static OSSL_PARAM *FUNC_1(OSSL_PARAM *VAR_0)
{
    OSSL_PARAM *VAR_1, *VAR_2;
    size_t VAR_3;

    for (VAR_3 = 0, VAR_1 = VAR_2 = VAR_0; VAR_2->key != ((void*)0); VAR_2++) {
        if (VAR_2->return_size == 0)
            continue;
        if (VAR_1 != VAR_2)
            *VAR_1 = *VAR_2;
        VAR_1++;
        VAR_3++;
    }
    *VAR_1 = *VAR_2;
    VAR_3++;

    VAR_1 = FUNC_0(VAR_0, VAR_3 * sizeof(*VAR_0));
    if (VAR_1 == ((void*)0))
        return VAR_0;
    return VAR_1;
}
