
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {char* start; } ;
typedef char WCHAR ;


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
 int FUNC_0 (struct parser*,int ) ;
 int FUNC_1 (struct parser*,char const*) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (struct parser*,int ) ;
 int FUNC_4 (struct parser*,char const*) ;
 int FUNC_5 (struct parser*,int ) ;

__attribute__((used)) static const WCHAR *FUNC_6( struct parser *VAR_10, const WCHAR *VAR_11 )
{
    const WCHAR *VAR_12, *VAR_13 = VAR_10->start;

    for (VAR_12 = VAR_11; !FUNC_1( VAR_10, VAR_12 ); VAR_12++)
    {
        if (*VAR_12 == ',') break;
        switch(*VAR_12)
        {

         case '=':
            FUNC_4( VAR_10, VAR_13 );
            if (!FUNC_0( VAR_10, VAR_8 )) return ((void*)0);
            VAR_10->start = VAR_12 + 1;
            FUNC_3( VAR_10, VAR_9 );
            FUNC_5( VAR_10, VAR_4 );
            return VAR_12 + 1;
        case ';':
            FUNC_4( VAR_10, VAR_13 );
            if (!FUNC_0( VAR_10, VAR_2 )) return ((void*)0);
            FUNC_3( VAR_10, VAR_5 );
            FUNC_5( VAR_10, VAR_0 );
            return VAR_12 + 1;
        case '"':
            FUNC_4( VAR_10, VAR_12 );
            VAR_10->start = VAR_12 + 1;
            FUNC_3( VAR_10, VAR_3 );
            FUNC_5( VAR_10, VAR_6 );
            return VAR_12 + 1;
        case '\\':
            FUNC_4( VAR_10, VAR_13 );
            VAR_10->start = VAR_12;
            FUNC_3( VAR_10, VAR_3 );
            FUNC_5( VAR_10, VAR_1 );
            return VAR_12;
        default:
            if (!FUNC_2(*VAR_12)) VAR_13 = VAR_12 + 1;
            else
            {
                FUNC_4( VAR_10, VAR_12 );
                FUNC_3( VAR_10, VAR_3 );
                FUNC_5( VAR_10, VAR_7 );
                return VAR_12;
            }
            break;
        }
    }
    FUNC_4( VAR_10, VAR_13 );
    FUNC_5( VAR_10, VAR_9 );
    return VAR_12;
}
