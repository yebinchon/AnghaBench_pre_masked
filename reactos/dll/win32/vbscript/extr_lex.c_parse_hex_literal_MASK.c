
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* ptr; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef char const WCHAR ;
typedef int LONG ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(parser_ctx_t *VAR_2, LONG *VAR_3)
{
    const WCHAR *VAR_4 = VAR_2->ptr;
    LONG VAR_5 = 0, VAR_6;

    while((VAR_6 = FUNC_1(*++VAR_2->ptr)) != -1)
        VAR_5 = VAR_5*16 + VAR_6;

    if(VAR_4 + 9 < VAR_2->ptr || (*VAR_2->ptr != '&' && FUNC_2(*VAR_2->ptr))) {
        FUNC_0("invalid literal\n");
        return 0;
    }

    if(*VAR_2->ptr == '&')
        VAR_2->ptr++;

    *VAR_3 = VAR_5;
    return (short)VAR_5 == VAR_5 ? VAR_1 : VAR_0;
}
