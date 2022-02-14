
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {int json; int value; } ;
typedef TYPE_1__ json_integer_t ;
typedef int json_int_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int) ;

json_t *FUNC_2(json_int_t VAR_1)
{
    json_integer_t *VAR_2 = FUNC_1(sizeof(json_integer_t));
    if(!VAR_2)
        return ((void*)0);
    FUNC_0(&VAR_2->json, VAR_0);

    VAR_2->value = VAR_1;
    return &VAR_2->json;
}
