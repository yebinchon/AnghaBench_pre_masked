
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int parse_type; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct parser*,int **) ;
 int FUNC_1 (struct parser*,int ) ;

__attribute__((used)) static WCHAR *FUNC_2(struct parser *VAR_5, WCHAR *VAR_6)
{
    WCHAR *VAR_7 = VAR_6;

    if (!FUNC_0(VAR_5, &VAR_7))
    {
        FUNC_1(VAR_5, VAR_2);
        return VAR_7;
    }

    switch (VAR_5->parse_type)
    {
    case 128:
        FUNC_1(VAR_5, VAR_3);
        break;
    case 129:
        FUNC_1(VAR_5, VAR_0);
        break;
    case 130:
        FUNC_1(VAR_5, VAR_1);
        break;
    default:
        FUNC_1(VAR_5, VAR_4);
    }

    return VAR_7;
}
