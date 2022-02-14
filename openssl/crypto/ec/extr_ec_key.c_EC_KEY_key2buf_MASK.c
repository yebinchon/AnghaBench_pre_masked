
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int point_conversion_form_t ;
struct TYPE_3__ {int * pub_key; int * group; } ;
typedef TYPE_1__ EC_KEY ;
typedef int BN_CTX ;


 size_t FUNC_0 (int *,int *,int ,unsigned char**,int *) ;

size_t FUNC_1(const EC_KEY *VAR_0, point_conversion_form_t VAR_1,
                        unsigned char **VAR_2, BN_CTX *VAR_3)
{
    if (VAR_0 == ((void*)0) || VAR_0->pub_key == ((void*)0) || VAR_0->group == ((void*)0))
        return 0;
    return FUNC_0(VAR_0->group, VAR_0->pub_key, VAR_1, VAR_2, VAR_3);
}
