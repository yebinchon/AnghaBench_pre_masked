
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,int *,int) ;

char FUNC_3 ( const char *VAR_0 )
{
    const size_t VAR_1 = FUNC_1 ( VAR_0 );

    if ( VAR_1 == 1 ) {
        return VAR_0[0];
    }

    if ( VAR_1 == 2 && VAR_0[0] == '\\' ) {
        switch ( VAR_0[1] )
        {

        case 'n': return '\n';

        case 'a': return '\a';

        case 'b': return '\b';

        case 't': return '\t';

        case 'v': return '\v';

        case 'f': return '\f';

        case 'r': return '\r';

        case '\\': return '\\';

        case '0': return '\0';
        default:
            break;
        }
    }
    if ( VAR_1 > 2 && VAR_0[0] == '\\' && VAR_0[1] == 'x' ) {
        return (char) FUNC_2 ( &VAR_0[2], ((void*)0), 16 );
    }
    FUNC_0 ( "Failed to parse character string: \"%s\"", VAR_0 );

    return '\n';
}
