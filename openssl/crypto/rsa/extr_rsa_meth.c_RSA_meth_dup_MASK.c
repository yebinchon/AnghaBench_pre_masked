
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * name; } ;
typedef TYPE_1__ RSA_METHOD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__ const*,int) ;

RSA_METHOD *FUNC_5(const RSA_METHOD *VAR_2)
{
    RSA_METHOD *VAR_3 = FUNC_1(sizeof(*VAR_3));

    if (VAR_3 != ((void*)0)) {
        FUNC_4(VAR_3, VAR_2, sizeof(*VAR_2));

        VAR_3->name = FUNC_2(VAR_2->name);
        if (VAR_3->name != ((void*)0))
            return VAR_3;

        FUNC_0(VAR_3);
    }

    FUNC_3(VAR_1, VAR_0);
    return ((void*)0);
}
