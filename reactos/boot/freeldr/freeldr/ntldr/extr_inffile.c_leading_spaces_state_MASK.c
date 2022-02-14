
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {char const* start; } ;
typedef char CHAR ;


 int VAR_0 ;
 int FUNC_0 (struct parser*,char const*) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (struct parser*) ;
 int FUNC_3 (struct parser*,int ) ;

__attribute__((used)) static
const CHAR*
FUNC_4(
    struct parser *VAR_1,
    const CHAR *VAR_2 )
{
    const CHAR *VAR_3;

    for (VAR_3 = VAR_2; !FUNC_0(VAR_1, VAR_3); VAR_3++)
    {
        if (*VAR_3 == '\\')
        {
            VAR_1->start = VAR_3;
            FUNC_3(VAR_1, VAR_0);
            return VAR_3;
        }
        if (!FUNC_1((unsigned char)*VAR_3))
            break;
    }
    VAR_1->start = VAR_3;
    FUNC_2(VAR_1);
    return VAR_3;
}
