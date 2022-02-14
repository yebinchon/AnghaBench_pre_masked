
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* data; int * key; } ;
typedef TYPE_1__ OSSL_PARAM ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(OSSL_PARAM *VAR_0)
{
    int VAR_1;

    if (VAR_0 != ((void*)0)) {
        for (VAR_1 = 0; VAR_0[VAR_1].key != ((void*)0); ++VAR_1)
            FUNC_0(VAR_0[VAR_1].data);
        FUNC_0(VAR_0);
    }
}
