
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* value; int size; scalar_t__ length; } ;
typedef TYPE_1__ strbuffer_t ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;

int FUNC_1(strbuffer_t *VAR_1)
{
    VAR_1->size = VAR_0;
    VAR_1->length = 0;

    VAR_1->value = FUNC_0(VAR_1->size);
    if(!VAR_1->value)
        return -1;


    VAR_1->value[0] = '\0';
    return 0;
}
