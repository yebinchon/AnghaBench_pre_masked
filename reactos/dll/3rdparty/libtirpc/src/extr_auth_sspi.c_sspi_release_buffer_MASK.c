
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ length; int * value; } ;
typedef TYPE_1__ sspi_buffer_desc ;


 int FUNC_0 (int *) ;

void FUNC_1(sspi_buffer_desc *VAR_0)
{
    if (VAR_0->value)
        FUNC_0(VAR_0->value);
    VAR_0->value = ((void*)0);
    VAR_0->length = 0;
}
