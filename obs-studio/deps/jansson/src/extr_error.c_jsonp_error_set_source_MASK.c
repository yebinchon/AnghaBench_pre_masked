
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ source; } ;
typedef TYPE_1__ json_error_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__,char const*,size_t) ;

void FUNC_2(json_error_t *VAR_1, const char *VAR_2)
{
    size_t VAR_3;

    if(!VAR_1 || !VAR_2)
        return;

    VAR_3 = FUNC_0(VAR_2);
    if(VAR_3 < VAR_0)
        FUNC_1(VAR_1->source, VAR_2, VAR_3 + 1);
    else {
        size_t VAR_4 = VAR_3 - VAR_0 + 4;
        FUNC_1(VAR_1->source, "...", 3);
        FUNC_1(VAR_1->source + 3, VAR_2 + VAR_4, VAR_3 - VAR_4 + 1);
    }
}
