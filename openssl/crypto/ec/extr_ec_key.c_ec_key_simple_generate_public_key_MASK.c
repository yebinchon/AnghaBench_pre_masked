
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int priv_key; int pub_key; int group; } ;
typedef TYPE_1__ EC_KEY ;


 int FUNC_0 (int ,int ,int ,int *,int *,int *) ;

int FUNC_1(EC_KEY *VAR_0)
{




    return FUNC_0(VAR_0->group, VAR_0->pub_key, VAR_0->priv_key, ((void*)0),
                        ((void*)0), ((void*)0));
}
