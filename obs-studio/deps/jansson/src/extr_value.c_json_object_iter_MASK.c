
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {int hashtable; } ;
typedef TYPE_1__ json_object_t ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;

void *FUNC_3(json_t *VAR_0)
{
    json_object_t *VAR_1;

    if(!FUNC_1(VAR_0))
        return ((void*)0);

    VAR_1 = FUNC_2(VAR_0);
    return FUNC_0(&VAR_1->hashtable);
}
