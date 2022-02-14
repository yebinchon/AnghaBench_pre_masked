
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * priv_key; int * pub_key; int p; } ;
typedef int * MP_t ;
typedef TYPE_1__ MDH ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,size_t) ;
 int VAR_0 ;
 int FUNC_3 (size_t) ;
 size_t FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static int
FUNC_5(MDH *VAR_1)
{
    size_t VAR_2 = 0;
    if (!VAR_1)
        return 0;

    while (!VAR_2)
    {
        MP_t VAR_3 = ((void*)0);

        if (!FUNC_0(VAR_1))
            return 0;

        FUNC_2(VAR_3, VAR_0, VAR_2);
        FUNC_3(VAR_2);

        VAR_2 = FUNC_4(VAR_1->pub_key, VAR_1->p, VAR_3);
        if (!VAR_2)
        {
            FUNC_1(VAR_1->pub_key);
            FUNC_1(VAR_1->priv_key);
            VAR_1->pub_key = VAR_1->priv_key = 0;
        }

        FUNC_1(VAR_3);
    }
    return 1;
}
