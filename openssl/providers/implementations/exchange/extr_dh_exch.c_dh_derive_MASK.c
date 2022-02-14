
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dh; scalar_t__ pad; int * dhpeer; } ;
typedef TYPE_1__ PROV_DH_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (unsigned char*,int const*,int *) ;
 int FUNC_1 (unsigned char*,int const*,int *) ;
 int FUNC_2 (int *,int const**,int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, unsigned char *VAR_1, size_t *VAR_2,
                     size_t VAR_3)
{
    PROV_DH_CTX *VAR_4 = (PROV_DH_CTX *)VAR_0;
    int VAR_5;
    size_t VAR_6;
    const BIGNUM *VAR_7 = ((void*)0);


    if (VAR_4->dh == ((void*)0) || VAR_4->dhpeer == ((void*)0))
        return 0;

    VAR_6 = (size_t)FUNC_3(VAR_4->dh);
    if (VAR_1 == ((void*)0)) {
        *VAR_2 = VAR_6;
        return 1;
    }
    if (VAR_3 < VAR_6)
        return 0;

    FUNC_2(VAR_4->dhpeer, &VAR_7, ((void*)0));
    VAR_5 = (VAR_4->pad) ? FUNC_1(VAR_1, VAR_7, VAR_4->dh)
                        : FUNC_0(VAR_1, VAR_7, VAR_4->dh);
    if (VAR_5 <= 0)
        return 0;

    *VAR_2 = VAR_5;
    return 1;
}
