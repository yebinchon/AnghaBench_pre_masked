
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int const* start; int line_pos; } ;
typedef int CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct parser*) ;
 int FUNC_1 (struct parser*,int const*) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (struct parser*,int ) ;
 int FUNC_4 (struct parser*,int ) ;

__attribute__((used)) static
const CHAR*
FUNC_5(
    struct parser *VAR_4,
    const CHAR *VAR_5)
{
    const CHAR *VAR_6;

    for (VAR_6 = VAR_5; !FUNC_1(VAR_4, VAR_6); VAR_6++)
    {
        switch(*VAR_6)
        {
        case '\r':
            continue;

        case '\n':
            VAR_4->line_pos++;
            FUNC_0(VAR_4);
            break;

        case ';':
            FUNC_3(VAR_4, VAR_2);
            FUNC_4(VAR_4, VAR_0);
            return VAR_6 + 1;

        case '[':
            VAR_4->start = VAR_6 + 1;
            FUNC_4(VAR_4, VAR_3);
            return VAR_6 + 1;

        default:
            if (!FUNC_2((unsigned char)*VAR_6))
            {
                VAR_4->start = VAR_6;
                FUNC_4(VAR_4, VAR_1);
                return VAR_6;
            }
            break;
        }
    }
    FUNC_0(VAR_4);
    return ((void*)0);
}
