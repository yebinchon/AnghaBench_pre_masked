
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int n; TYPE_1__* properties; } ;
struct TYPE_11__ {scalar_t__ name_idx; } ;
typedef TYPE_1__ PROPERTY_DEFINITION ;
typedef TYPE_2__ OSSL_PROPERTY_LIST ;


 TYPE_2__* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*,int) ;

OSSL_PROPERTY_LIST *FUNC_3(const OSSL_PROPERTY_LIST *VAR_0,
                                        const OSSL_PROPERTY_LIST *VAR_1)
{
    const PROPERTY_DEFINITION *const VAR_2 = VAR_0->properties;
    const PROPERTY_DEFINITION *const VAR_3 = VAR_1->properties;
    const PROPERTY_DEFINITION *VAR_4;
    OSSL_PROPERTY_LIST *VAR_5;
    int VAR_6, VAR_7, VAR_8;
    const int VAR_9 = VAR_0->n + VAR_1->n;

    VAR_5 = FUNC_0(sizeof(*VAR_5)
                       + (VAR_9 == 0 ? 0 : VAR_9 - 1) * sizeof(VAR_5->properties[0]));
    if (VAR_5 == ((void*)0))
        return ((void*)0);

    for (VAR_6 = VAR_7 = VAR_8 = 0; VAR_6 < VAR_0->n || VAR_7 < VAR_1->n; VAR_8++) {
        if (VAR_6 >= VAR_0->n) {
            VAR_4 = &VAR_3[VAR_7++];
        } else if (VAR_7 >= VAR_1->n) {
            VAR_4 = &VAR_2[VAR_6++];
        } else if (VAR_2[VAR_6].name_idx <= VAR_3[VAR_7].name_idx) {
            if (VAR_2[VAR_6].name_idx == VAR_3[VAR_7].name_idx)
                VAR_7++;
            VAR_4 = &VAR_2[VAR_6++];
        } else {
            VAR_4 = &VAR_3[VAR_7++];
        }
        FUNC_2(VAR_5->properties + VAR_8, VAR_4, sizeof(VAR_5->properties[0]));
    }
    VAR_5->n = VAR_8;
    if (VAR_8 != VAR_9)
        VAR_5 = FUNC_1(VAR_5, sizeof(*VAR_5) + (VAR_8 - 1) * sizeof(VAR_5->properties[0]));
    return VAR_5;
}
