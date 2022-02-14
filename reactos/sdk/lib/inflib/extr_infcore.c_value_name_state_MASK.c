
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
 int FUNC_0 (struct parser*,int ) ;
 int FUNC_1 (struct parser*,int const*) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (struct parser*,int ) ;
 int FUNC_4 (struct parser*,int const*) ;
 int FUNC_5 (struct parser*,int ) ;

__attribute__((used)) static const WCHAR *FUNC_6( struct parser *VAR_7, const WCHAR *VAR_8 )
{
    const WCHAR *VAR_9, *VAR_10 = VAR_7->start;

    for (VAR_9 = VAR_8; !FUNC_1( VAR_7, VAR_9 ); VAR_9++)
    {
        switch(*VAR_9)
        {
        case ';':
            FUNC_4( VAR_7, VAR_10 );
            if (!FUNC_0( VAR_7, 0 )) return ((void*)0);
            FUNC_3( VAR_7, VAR_3 );
            FUNC_5( VAR_7, VAR_0 );
            return VAR_9 + 1;
        case ',':
            FUNC_4( VAR_7, VAR_10 );
            if (!FUNC_0( VAR_7, 0 )) return ((void*)0);
            VAR_7->start = VAR_9 + 1;
            FUNC_3( VAR_7, VAR_6 );
            FUNC_5( VAR_7, VAR_2 );
            return VAR_9 + 1;
        case '"':
            FUNC_4( VAR_7, VAR_10 );
            VAR_7->start = VAR_9 + 1;
            FUNC_3( VAR_7, VAR_6 );
            FUNC_5( VAR_7, VAR_4 );
            return VAR_9 + 1;
        case '\\':
            FUNC_4( VAR_7, VAR_10 );
            VAR_7->start = VAR_9;
            FUNC_3( VAR_7, VAR_6 );
            FUNC_5( VAR_7, VAR_1 );
            return VAR_9;
        default:
            if (!FUNC_2(*VAR_9)) VAR_10 = VAR_9 + 1;
            else
            {
                FUNC_4( VAR_7, VAR_9 );
                FUNC_3( VAR_7, VAR_6 );
                FUNC_5( VAR_7, VAR_5 );
                return VAR_9;
            }
            break;
        }
    }
    FUNC_4( VAR_7, VAR_10 );
    if (!FUNC_0( VAR_7, 0 )) return ((void*)0);
    FUNC_5( VAR_7, VAR_3 );
    return VAR_9;
}
