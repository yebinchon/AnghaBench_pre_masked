
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ return_size; int * data; int * key; } ;
typedef TYPE_1__ OSSL_PARAM ;


 TYPE_1__* FUNC_0 (size_t) ;

__attribute__((used)) static OSSL_PARAM *FUNC_1(const OSSL_PARAM *VAR_0)
{
    size_t VAR_1;
    const OSSL_PARAM *VAR_2;
    OSSL_PARAM *VAR_3 = ((void*)0), *VAR_4;

    for (VAR_1 = 1, VAR_2 = VAR_0; VAR_2->key != ((void*)0); VAR_2++, VAR_1++)
        continue;

    VAR_3 = FUNC_0(VAR_1 * sizeof(*VAR_3));
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    for (VAR_2 = VAR_0, VAR_4 = VAR_3; ; VAR_2++, VAR_4++) {
        *VAR_4 = *VAR_2;
        if (VAR_2->key == ((void*)0))
            break;

        VAR_4->data = ((void*)0);
        VAR_4->return_size = 0;
    }

    return VAR_3;
}
