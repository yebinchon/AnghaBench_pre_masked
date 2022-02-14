
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int const* start; int* token; int token_len; } ;
typedef scalar_t__ ULONG ;
typedef scalar_t__ SIZE_T ;
typedef int CHAR ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static
int
FUNC_0(
    struct parser *VAR_1,
    const CHAR *VAR_2)
{
    SIZE_T VAR_3 = VAR_2 - VAR_1->start;
    const CHAR *VAR_4 = VAR_1->start;
    CHAR *VAR_5 = VAR_1->token + VAR_1->token_len;

    if (VAR_3 > VAR_0 - VAR_1->token_len)
        VAR_3 = VAR_0 - VAR_1->token_len;

    VAR_1->token_len += (ULONG)VAR_3;
    for ( ; VAR_3 > 0; VAR_3--, VAR_5++, VAR_4++)
        *VAR_5 = *VAR_4 ? (CHAR)*VAR_4 : L' ';
    *VAR_5 = 0;
    VAR_1->start = VAR_2;

    return 0;
}
