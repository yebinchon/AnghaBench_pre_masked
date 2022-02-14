
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const*,int) ;

__attribute__((used)) static int FUNC_3( const WCHAR *VAR_17, int *VAR_18 )
{
    int VAR_19;

    switch (*VAR_17)
    {
    case ' ':
    case '\t':
    case '\r':
    case '\n':
        for (VAR_19 = 1; FUNC_1( VAR_17[VAR_19] ); VAR_19++) {}
        *VAR_18 = VAR_13;
        return VAR_19;
    case '-':
        if (!VAR_17[1]) return -1;
        *VAR_18 = VAR_10;
        return 1;
    case '(':
        *VAR_18 = VAR_8;
        return 1;
    case ')':
        *VAR_18 = VAR_12;
        return 1;
    case '*':
        *VAR_18 = VAR_14;
        return 1;
    case '=':
        *VAR_18 = VAR_2;
        return 1;
    case '<':
        if (VAR_17[1] == '=' )
        {
            *VAR_18 = VAR_7;
            return 2;
        }
        else if (VAR_17[1] == '>')
        {
            *VAR_18 = VAR_11;
            return 2;
        }
        else
        {
            *VAR_18 = VAR_9;
            return 1;
        }
    case '>':
        if (VAR_17[1] == '=')
        {
            *VAR_18 = VAR_3;
            return 2;
        }
        else
        {
            *VAR_18 = VAR_4;
            return 1;
        }
    case '!':
        if (VAR_17[1] != '=')
        {
            *VAR_18 = VAR_5;
            return 2;
        }
        else
        {
            *VAR_18 = VAR_11;
            return 2;
        }
    case ',':
        *VAR_18 = VAR_0;
        return 1;
    case '\"':
    case '\'':
        for (VAR_19 = 1; VAR_17[VAR_19]; VAR_19++)
        {
            if (VAR_17[VAR_19] == VAR_17[0]) break;
        }
        if (VAR_17[VAR_19]) VAR_19++;
        *VAR_18 = VAR_15;
        return VAR_19;
    case '.':
        if (!FUNC_0( VAR_17[1] ))
        {
            *VAR_18 = VAR_1;
            return 1;
        }

    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        *VAR_18 = VAR_6;
        for (VAR_19 = 1; FUNC_0( VAR_17[VAR_19] ); VAR_19++) {}
        return VAR_19;
    default:
        if (!VAR_16[*VAR_17]) break;

        for (VAR_19 = 1; VAR_16[VAR_17[VAR_19]]; VAR_19++) {}
        *VAR_18 = FUNC_2( VAR_17, VAR_19 );
        return VAR_19;
    }
    *VAR_18 = VAR_5;
    return 1;
}
