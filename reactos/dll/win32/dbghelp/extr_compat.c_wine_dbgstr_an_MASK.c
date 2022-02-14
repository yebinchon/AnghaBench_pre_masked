
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char const*) ;

const char *FUNC_4( const char *VAR_0, int VAR_1 )
{
    static const char VAR_2[16] = "0123456789abcdef";
    char *VAR_3, *VAR_4;
    size_t VAR_5;
    static char VAR_6[256];

    if (!((ULONG_PTR)VAR_0 >> 16))
    {
        if (!VAR_0) return "(null)";
        VAR_4 = VAR_6;
        FUNC_2( VAR_4, "#%04x", FUNC_0(VAR_0) );
        return VAR_4;
    }
    if (VAR_1 == -1) VAR_1 = FUNC_3(VAR_0);
    if (VAR_1 < 0) VAR_1 = 0;
    VAR_5 = 10 + FUNC_1( 300, VAR_1 * 4 );
    VAR_3 = VAR_4 = VAR_6;
    *VAR_3++ = '"';
    while (VAR_1-- > 0 && VAR_3 <= VAR_4 + VAR_5 - 9)
    {
        unsigned char VAR_7 = *VAR_0++;
        switch (VAR_7)
        {
        case '\n': *VAR_3++ = '\\'; *VAR_3++ = 'n'; break;
        case '\r': *VAR_3++ = '\\'; *VAR_3++ = 'r'; break;
        case '\t': *VAR_3++ = '\\'; *VAR_3++ = 't'; break;
        case '"': *VAR_3++ = '\\'; *VAR_3++ = '"'; break;
        case '\\': *VAR_3++ = '\\'; *VAR_3++ = '\\'; break;
        default:
            if (VAR_7 >= ' ' && VAR_7 <= 126)
                *VAR_3++ = VAR_7;
            else
            {
                *VAR_3++ = '\\';
                *VAR_3++ = 'x';
                *VAR_3++ = VAR_2[(VAR_7 >> 4) & 0x0f];
                *VAR_3++ = VAR_2[VAR_7 & 0x0f];
            }
        }
    }
    *VAR_3++ = '"';
    if (VAR_1 > 0)
    {
        *VAR_3++ = '.';
        *VAR_3++ = '.';
        *VAR_3++ = '.';
    }
    *VAR_3++ = 0;
    return VAR_4;
}
