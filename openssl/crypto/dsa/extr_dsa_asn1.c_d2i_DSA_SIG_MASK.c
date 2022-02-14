
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * s; int * r; } ;
typedef TYPE_1__ DSA_SIG ;


 void* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int *,unsigned char const**,size_t) ;

DSA_SIG *FUNC_4(DSA_SIG **VAR_0, const unsigned char **VAR_1, long VAR_2)
{
    DSA_SIG *VAR_3;

    if (VAR_2 < 0)
        return ((void*)0);
    if (VAR_0 != ((void*)0) && *VAR_0 != ((void*)0)) {
        VAR_3 = *VAR_0;
    } else {
        VAR_3 = FUNC_2();
        if (VAR_3 == ((void*)0))
            return ((void*)0);
    }
    if (VAR_3->r == ((void*)0))
        VAR_3->r = FUNC_0();
    if (VAR_3->s == ((void*)0))
        VAR_3->s = FUNC_0();
    if (FUNC_3(VAR_3->r, VAR_3->s, VAR_1, (size_t)VAR_2) == 0) {
        if (VAR_0 == ((void*)0) || *VAR_0 == ((void*)0))
            FUNC_1(VAR_3);
        return ((void*)0);
    }
    if (VAR_0 != ((void*)0) && *VAR_0 == ((void*)0))
        *VAR_0 = VAR_3;
    return VAR_3;
}
