
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {scalar_t__ backslash; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct parser*,int **) ;
 int FUNC_1 (struct parser*) ;
 int FUNC_2 (struct parser*) ;
 int FUNC_3 (struct parser*,int ) ;

__attribute__((used)) static WCHAR *FUNC_4(struct parser *VAR_3, WCHAR *VAR_4)
{
    WCHAR *VAR_5 = VAR_4;

    if (!*VAR_5)
        goto set_value;

    if (!FUNC_0(VAR_3, &VAR_5))
        goto invalid;

    if (VAR_3->backslash)
    {
        FUNC_3(VAR_3, VAR_0);
        return VAR_5;
    }

    FUNC_2(VAR_3);

set_value:
    FUNC_3(VAR_3, VAR_2);
    return VAR_5;

invalid:
    FUNC_1(VAR_3);
    FUNC_3(VAR_3, VAR_1);
    return VAR_5;
}
