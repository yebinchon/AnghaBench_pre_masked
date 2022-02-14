
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {char const* start; char* token; int token_len; } ;
typedef char WCHAR ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0( struct parser *VAR_1, const WCHAR *VAR_2 )
{
    int VAR_3 = VAR_2 - VAR_1->start;
    const WCHAR *VAR_4 = VAR_1->start;
    WCHAR *VAR_5 = VAR_1->token + VAR_1->token_len;

    if (VAR_3 > VAR_0 - VAR_1->token_len) VAR_3 = VAR_0 - VAR_1->token_len;

    VAR_1->token_len += VAR_3;
    for ( ; VAR_3 > 0; VAR_3--, VAR_5++, VAR_4++) *VAR_5 = *VAR_4 ? *VAR_4 : ' ';
    *VAR_5 = 0;
    VAR_1->start = VAR_2;
    return 0;
}
