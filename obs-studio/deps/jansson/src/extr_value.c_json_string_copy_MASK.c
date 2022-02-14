
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {int length; int value; } ;
typedef TYPE_1__ json_string_t ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (int const*) ;

__attribute__((used)) static json_t *FUNC_3(const json_t *VAR_0)
{
    json_string_t *VAR_1;

    if(!FUNC_0(VAR_0))
        return ((void*)0);

    VAR_1 = FUNC_2(VAR_0);
    return FUNC_1(VAR_1->value, VAR_1->length);
}
