
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static BOOL FUNC_1( WCHAR VAR_2 )
{
    if (FUNC_0( VAR_2 )) return VAR_0;

    if (VAR_2 <= 31 || VAR_2 >= 127) return VAR_1;
    else
    {
        switch (VAR_2)
        {
        case ' ':
        case '"':
        case '#':
        case '%':
        case '<':
        case '>':
        case ']':
        case '\\':
        case '[':
        case '^':
        case '`':
        case '{':
        case '|':
        case '}':
        case '~':
            return VAR_1;
        default:
            return VAR_0;
        }
    }
}
