
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * derbuf; } ;
typedef TYPE_1__ NDEF_SUPPORT ;
typedef int BIO ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(BIO *VAR_0, unsigned char **VAR_1, int *VAR_2,
                            void *VAR_3)
{
    NDEF_SUPPORT *VAR_4;

    if (VAR_3 == ((void*)0))
        return 0;

    VAR_4 = *(NDEF_SUPPORT **)VAR_3;

    FUNC_0(VAR_4->derbuf);

    VAR_4->derbuf = ((void*)0);
    *VAR_1 = ((void*)0);
    *VAR_2 = 0;
    return 1;
}
