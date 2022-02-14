
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int* start; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct parser*,int ) ;
 int FUNC_1 (struct parser*,int const*) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (struct parser*,int ) ;
 int FUNC_4 (struct parser*,int const*) ;
 int FUNC_5 (struct parser*,int ) ;

__attribute__((used)) static const WCHAR *FUNC_6( struct parser *VAR_8, const WCHAR *VAR_9 )
{
    const WCHAR *VAR_10, *VAR_11 = VAR_8->start;

    for (VAR_10 = VAR_9; !FUNC_1( VAR_8, VAR_10 ); VAR_10++)
    {
        switch(*VAR_10)
        {
        case ';':
            FUNC_4( VAR_8, VAR_11 );
            if (!FUNC_0( VAR_8, VAR_2 )) return ((void*)0);
            FUNC_3( VAR_8, VAR_4 );
            FUNC_5( VAR_8, VAR_0 );
            return VAR_10 + 1;
        case ',':
            FUNC_4( VAR_8, VAR_11 );
            if (!FUNC_0( VAR_8, VAR_2 )) return ((void*)0);
            VAR_8->start = VAR_10 + 1;
            FUNC_3( VAR_8, VAR_7 );
            FUNC_5( VAR_8, VAR_3 );
            return VAR_10 + 1;
        case '"':
            FUNC_4( VAR_8, VAR_10 );
            VAR_8->start = VAR_10 + 1;
            FUNC_3( VAR_8, VAR_7 );
            FUNC_5( VAR_8, VAR_5 );
            return VAR_10 + 1;
        case '\\':
            FUNC_4( VAR_8, VAR_11 );
            VAR_8->start = VAR_10;
            FUNC_3( VAR_8, VAR_7 );
            FUNC_5( VAR_8, VAR_1 );
            return VAR_10;
        default:
            if (!FUNC_2(*VAR_10)) VAR_11 = VAR_10 + 1;
            else
            {
                FUNC_4( VAR_8, VAR_10 );
                FUNC_3( VAR_8, VAR_7 );
                FUNC_5( VAR_8, VAR_6 );
                return VAR_10;
            }
            break;
        }
    }
    FUNC_4( VAR_8, VAR_11 );
    if (!FUNC_0( VAR_8, VAR_2 )) return ((void*)0);
    FUNC_5( VAR_8, VAR_4 );
    return VAR_10;
}
