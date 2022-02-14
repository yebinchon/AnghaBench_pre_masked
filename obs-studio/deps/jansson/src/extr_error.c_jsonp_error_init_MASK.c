
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* text; int line; int column; char* source; scalar_t__ position; } ;
typedef TYPE_1__ json_error_t ;


 int FUNC_0 (TYPE_1__*,char const*) ;

void FUNC_1(json_error_t *VAR_0, const char *VAR_1)
{
    if(VAR_0)
    {
        VAR_0->text[0] = '\0';
        VAR_0->line = -1;
        VAR_0->column = -1;
        VAR_0->position = 0;
        if(VAR_1)
            FUNC_0(VAR_0, VAR_1);
        else
            VAR_0->source[0] = '\0';
    }
}
