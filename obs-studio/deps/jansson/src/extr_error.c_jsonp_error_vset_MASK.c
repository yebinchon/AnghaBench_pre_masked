
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_3__ {char* text; int line; int column; int position; } ;
typedef TYPE_1__ json_error_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char const*,int ) ;

void FUNC_1(json_error_t *VAR_1, int VAR_2, int VAR_3,
                      size_t VAR_4, const char *VAR_5, va_list VAR_6)
{
    if(!VAR_1)
        return;

    if(VAR_1->text[0] != '\0') {

        return;
    }

    VAR_1->line = VAR_2;
    VAR_1->column = VAR_3;
    VAR_1->position = (int)VAR_4;

    FUNC_0(VAR_1->text, VAR_0, VAR_5, VAR_6);
    VAR_1->text[VAR_0 - 1] = '\0';
}
