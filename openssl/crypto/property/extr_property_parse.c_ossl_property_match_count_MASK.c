
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ str_val; } ;
struct TYPE_8__ {int n; TYPE_1__* properties; } ;
struct TYPE_7__ {scalar_t__ oper; scalar_t__ name_idx; scalar_t__ type; int optional; TYPE_5__ v; } ;
typedef scalar_t__ PROPERTY_OPER ;
typedef TYPE_1__ PROPERTY_DEFINITION ;
typedef TYPE_2__ OSSL_PROPERTY_LIST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_5__*,TYPE_5__*,int) ;
 scalar_t__ VAR_5 ;

int FUNC_1(const OSSL_PROPERTY_LIST *VAR_6,
                              const OSSL_PROPERTY_LIST *VAR_7)
{
    const PROPERTY_DEFINITION *const VAR_8 = VAR_6->properties;
    const PROPERTY_DEFINITION *const VAR_9 = VAR_7->properties;
    int VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
    PROPERTY_OPER VAR_13;

    while (VAR_10 < VAR_6->n) {
        if ((VAR_13 = VAR_8[VAR_10].oper) == VAR_2) {
            VAR_10++;
            continue;
        }
        if (VAR_11 < VAR_7->n) {
            if (VAR_8[VAR_10].name_idx > VAR_9[VAR_11].name_idx) {
                VAR_11++;
                continue;
            }
            if (VAR_8[VAR_10].name_idx == VAR_9[VAR_11].name_idx) {
                const int VAR_14 = VAR_8[VAR_10].type == VAR_9[VAR_11].type
                               && FUNC_0(&VAR_8[VAR_10].v, &VAR_9[VAR_11].v, sizeof(VAR_8[VAR_10].v)) == 0;

                if ((VAR_14 && VAR_13 == VAR_0)
                    || (!VAR_14 && VAR_13 == VAR_1))
                    VAR_12++;
                else if (!VAR_8[VAR_10].optional)
                    return -1;
                VAR_10++;
                VAR_11++;
                continue;
            }
        }






        if (VAR_8[VAR_10].type == VAR_4) {
            if (VAR_13 == VAR_1)
                VAR_12++;
            else if (!VAR_8[VAR_10].optional)
                return -1;
        } else if (VAR_8[VAR_10].type != VAR_3
                   || (VAR_13 == VAR_0
                       && VAR_8[VAR_10].v.str_val != VAR_5)
                   || (VAR_13 == VAR_1
                       && VAR_8[VAR_10].v.str_val == VAR_5)) {
            if (!VAR_8[VAR_10].optional)
                return -1;
        } else {
            VAR_12++;
        }
        VAR_10++;
    }
    return VAR_12;
}
