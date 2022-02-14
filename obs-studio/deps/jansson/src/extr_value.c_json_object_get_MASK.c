
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {int hashtable; } ;
typedef TYPE_1__ json_object_t ;


 int * FUNC_0 (int *,char const*) ;
 int FUNC_1 (int const*) ;
 TYPE_1__* FUNC_2 (int const*) ;

json_t *FUNC_3(const json_t *VAR_0, const char *VAR_1)
{
    json_object_t *VAR_2;

    if(!VAR_1 || !FUNC_1(VAR_0))
        return ((void*)0);

    VAR_2 = FUNC_2(VAR_0);
    return FUNC_0(&VAR_2->hashtable, VAR_1);
}
