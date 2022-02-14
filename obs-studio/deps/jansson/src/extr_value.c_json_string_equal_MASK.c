
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {scalar_t__ length; int value; } ;
typedef TYPE_1__ json_string_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(json_t *VAR_0, json_t *VAR_1)
{
    json_string_t *VAR_2, *VAR_3;

    if(!FUNC_0(VAR_0) || !FUNC_0(VAR_1))
        return 0;

    VAR_2 = FUNC_1(VAR_0);
    VAR_3 = FUNC_1(VAR_1);
    return VAR_2->length == VAR_3->length && !FUNC_2(VAR_2->value, VAR_3->value, VAR_2->length);
}
