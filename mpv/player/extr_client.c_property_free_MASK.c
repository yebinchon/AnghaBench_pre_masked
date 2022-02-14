
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct observe_property {int async_value; scalar_t__ type; int value; int async_updating; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    struct observe_property *VAR_1 = VAR_0;

    FUNC_0(!VAR_1->async_updating);

    if (VAR_1->type) {
        FUNC_1(VAR_1->type, &VAR_1->value);
        FUNC_1(VAR_1->type, &VAR_1->async_value);
    }
}
