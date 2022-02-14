
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ossl_uintmax_t ;
struct TYPE_3__ {int levels; void** nodes; int top; int nelem; } ;
typedef TYPE_1__ OPENSSL_SA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 () ;

int FUNC_1(OPENSSL_SA *VAR_3, ossl_uintmax_t VAR_4, void *VAR_5)
{
    int VAR_6, VAR_7 = 1;
    ossl_uintmax_t VAR_8 = VAR_4;
    void **VAR_9;

    if (VAR_3 == ((void*)0))
        return 0;

    for (VAR_7 = 1; VAR_7 < VAR_2; VAR_7++)
        if ((VAR_8 >>= VAR_0) == 0)
            break;

    for (;VAR_3->levels < VAR_7; VAR_3->levels++) {
        VAR_9 = FUNC_0();
        if (VAR_9 == ((void*)0))
            return 0;
        VAR_9[0] = VAR_3->nodes;
        VAR_3->nodes = VAR_9;
    }
    if (VAR_3->top < VAR_4)
        VAR_3->top = VAR_4;

    VAR_9 = VAR_3->nodes;
    for (VAR_7 = VAR_3->levels - 1; VAR_7 > 0; VAR_7--) {
        VAR_6 = (VAR_4 >> (VAR_0 * VAR_7)) & VAR_1;
        if (VAR_9[VAR_6] == ((void*)0) && (VAR_9[VAR_6] = FUNC_0()) == ((void*)0))
            return 0;
        VAR_9 = VAR_9[VAR_6];
    }
    VAR_9 += VAR_4 & VAR_1;
    if (VAR_5 == ((void*)0) && *VAR_9 != ((void*)0))
        VAR_3->nelem--;
    else if (VAR_5 != ((void*)0) && *VAR_9 == ((void*)0))
        VAR_3->nelem++;
    *VAR_9 = VAR_5;
    return 1;
}
