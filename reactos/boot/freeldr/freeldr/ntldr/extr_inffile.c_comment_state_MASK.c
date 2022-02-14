
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int dummy; } ;
typedef int CHAR ;


 int FUNC_0 (struct parser*,int const*) ;
 int FUNC_1 (struct parser*) ;

__attribute__((used)) static
const CHAR*
FUNC_2(
    struct parser *VAR_0,
    const CHAR *VAR_1 )
{
    const CHAR *VAR_2 = VAR_1;

    while (!FUNC_0(VAR_0, VAR_2))
        VAR_2++;
    FUNC_1(VAR_0);
    return VAR_2;
}
