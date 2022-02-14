
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ossl_uintmax_t ;
struct TYPE_3__ {int top; void** nodes; int levels; } ;
typedef TYPE_1__ OPENSSL_SA ;


 int VAR_0 ;
 int VAR_1 ;

void *FUNC_0(const OPENSSL_SA *VAR_2, ossl_uintmax_t VAR_3)
{
    int VAR_4;
    void **VAR_5, *VAR_6 = ((void*)0);

    if (VAR_2 == ((void*)0))
        return ((void*)0);

    if (VAR_3 <= VAR_2->top) {
        VAR_5 = VAR_2->nodes;
        for (VAR_4 = VAR_2->levels - 1; VAR_5 != ((void*)0) && VAR_4 > 0; VAR_4--)
            VAR_5 = (void **)VAR_5[(VAR_3 >> (VAR_0 * VAR_4))
                           & VAR_1];
        VAR_6 = VAR_5 == ((void*)0) ? ((void*)0) : VAR_5[VAR_3 & VAR_1];
    }
    return VAR_6;
}
