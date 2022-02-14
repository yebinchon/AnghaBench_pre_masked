
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * value; scalar_t__ length; scalar_t__ size; } ;
typedef TYPE_1__ strbuffer_t ;


 int FUNC_0 (int *) ;

void FUNC_1(strbuffer_t *VAR_0)
{
    if(VAR_0->value)
        FUNC_0(VAR_0->value);

    VAR_0->size = 0;
    VAR_0->length = 0;
    VAR_0->value = ((void*)0);
}
