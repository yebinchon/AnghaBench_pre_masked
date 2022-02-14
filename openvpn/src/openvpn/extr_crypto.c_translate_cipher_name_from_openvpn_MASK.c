
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* lib_name; } ;
typedef TYPE_1__ cipher_name_pair ;


 TYPE_1__* FUNC_0 (char const*) ;

const char *
FUNC_1(const char *VAR_0)
{
    const cipher_name_pair *VAR_1 = FUNC_0(VAR_0);

    if (((void*)0) == VAR_1)
    {
        return VAR_0;
    }

    return VAR_1->lib_name;
}
