
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int error; } ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct parser*) ;
 int FUNC_1 (struct parser*,char const*) ;
 int FUNC_2 (struct parser*,int ) ;
 int FUNC_3 (struct parser*,char const*) ;
 int FUNC_4 (struct parser*,int ) ;

__attribute__((used)) static
const CHAR*
FUNC_5(
    struct parser *VAR_3,
    const CHAR *VAR_4)
{
    const CHAR *VAR_5;

    for (VAR_5 = VAR_4; !FUNC_1(VAR_3, VAR_5); VAR_5++)
    {
        if (*VAR_5 == ']')
        {
            FUNC_3(VAR_3, VAR_5);
            if (FUNC_0(VAR_3) == ((void*)0))
                return ((void*)0);
            FUNC_2(VAR_3, VAR_1);
            FUNC_4(VAR_3, VAR_0);
            return VAR_5 + 1;
        }
    }
    VAR_3->error = VAR_2;
    return ((void*)0);
}
