
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {double value; int json; } ;
typedef TYPE_1__ json_real_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 int FUNC_2 (int *,int ) ;
 TYPE_1__* FUNC_3 (int) ;

json_t *FUNC_4(double VAR_1)
{
    json_real_t *VAR_2;

    if(FUNC_1(VAR_1) || FUNC_0(VAR_1))
        return ((void*)0);

    VAR_2 = FUNC_3(sizeof(json_real_t));
    if(!VAR_2)
        return ((void*)0);
    FUNC_2(&VAR_2->json, VAR_0);

    VAR_2->value = VAR_1;
    return &VAR_2->json;
}
