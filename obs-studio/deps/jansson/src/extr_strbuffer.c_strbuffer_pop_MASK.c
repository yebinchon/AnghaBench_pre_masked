
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; char* value; } ;
typedef TYPE_1__ strbuffer_t ;



char FUNC_0(strbuffer_t *VAR_0)
{
    if(VAR_0->length > 0) {
        char VAR_1 = VAR_0->value[--VAR_0->length];
        VAR_0->value[VAR_0->length] = '\0';
        return VAR_1;
    }
    else
        return '\0';
}
