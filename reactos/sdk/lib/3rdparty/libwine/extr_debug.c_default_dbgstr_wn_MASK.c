
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WCHAR ;
typedef int ULONG_PTR ;
struct TYPE_2__ {char* (* get_temp_buffer ) (int) ;int (* release_temp_buffer ) (char*,int) ;} ;


 int FUNC_0 (int const*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static const char *FUNC_6( const WCHAR *VAR_1, int VAR_2 )
{
    char *VAR_3, *VAR_4;
    size_t VAR_5;

    if (!((ULONG_PTR)VAR_1 >> 16))
    {
        if (!VAR_1) return "(null)";
        VAR_4 = VAR_0.get_temp_buffer( 6 );
        FUNC_2( VAR_4, "#%04x", FUNC_0(VAR_1) );
        return VAR_4;
    }
    if (VAR_2 == -1)
    {
        const WCHAR *VAR_6 = VAR_1;
        while (*VAR_6) VAR_6++;
        VAR_2 = VAR_6 - VAR_1;
    }
    if (VAR_2 < 0) VAR_2 = 0;
    VAR_5 = 12 + FUNC_1( 300, VAR_2 * 5 );
    VAR_3 = VAR_4 = VAR_0.get_temp_buffer( VAR_5 );
    *VAR_3++ = 'L';
    *VAR_3++ = '"';
    while (VAR_2-- > 0 && VAR_3 <= VAR_4 + VAR_5 - 10)
    {
        WCHAR VAR_7 = *VAR_1++;
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
                FUNC_2(VAR_3,"%04x",VAR_7);
                VAR_3+=4;
            }
        }
    }
    *VAR_3++ = '"';
    if (VAR_2 > 0)
    {
        *VAR_3++ = '.';
        *VAR_3++ = '.';
        *VAR_3++ = '.';
    }
    *VAR_3++ = 0;
    VAR_0.release_temp_buffer( VAR_4, VAR_3 - VAR_4 );
    return VAR_4;
}
