
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_2__ {char* (* get_temp_buffer ) (int) ;int (* release_temp_buffer ) (char*,int) ;} ;


 int FUNC_0 (char const*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (int) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static const char *FUNC_7( const char *VAR_1, int VAR_2 )
{
    static const char VAR_3[16] = "0123456789abcdef";
    char *VAR_4, *VAR_5;
    size_t VAR_6;

    if (!((ULONG_PTR)VAR_1 >> 16))
    {
        if (!VAR_1) return "(null)";
        VAR_5 = VAR_0.get_temp_buffer( 6 );
        FUNC_2( VAR_5, "#%04x", FUNC_0(VAR_1) );
        return VAR_5;
    }
    if (VAR_2 == -1) VAR_2 = FUNC_3(VAR_1);
    if (VAR_2 < 0) VAR_2 = 0;
    VAR_6 = 10 + FUNC_1( 300, VAR_2 * 4 );
    VAR_4 = VAR_5 = VAR_0.get_temp_buffer( VAR_6 );
    *VAR_4++ = '"';
    while (VAR_2-- > 0 && VAR_4 <= VAR_5 + VAR_6 - 9)
    {
        unsigned char VAR_7 = *VAR_1++;
        switch (VAR_7)
        {
        case '\n': *VAR_4++ = '\\'; *VAR_4++ = 'n'; break;
        case '\r': *VAR_4++ = '\\'; *VAR_4++ = 'r'; break;
        case '\t': *VAR_4++ = '\\'; *VAR_4++ = 't'; break;
        case '"': *VAR_4++ = '\\'; *VAR_4++ = '"'; break;
        case '\\': *VAR_4++ = '\\'; *VAR_4++ = '\\'; break;
        default:
            if (VAR_7 >= ' ' && VAR_7 <= 126)
                *VAR_4++ = VAR_7;
            else
            {
                *VAR_4++ = '\\';
                *VAR_4++ = 'x';
                *VAR_4++ = VAR_3[(VAR_7 >> 4) & 0x0f];
                *VAR_4++ = VAR_3[VAR_7 & 0x0f];
            }
        }
    }
    *VAR_4++ = '"';
    if (VAR_2 > 0)
    {
        *VAR_4++ = '.';
        *VAR_4++ = '.';
        *VAR_4++ = '.';
    }
    *VAR_4++ = 0;
    VAR_0.release_temp_buffer( VAR_5, VAR_4 - VAR_5 );
    return VAR_5;
}
