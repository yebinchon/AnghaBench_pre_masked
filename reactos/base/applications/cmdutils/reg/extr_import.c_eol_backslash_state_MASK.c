
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int dummy; } ;
typedef char WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct parser*) ;
 int FUNC_1 (struct parser*,int ) ;

__attribute__((used)) static WCHAR *FUNC_2(struct parser *VAR_2, WCHAR *VAR_3)
{
    WCHAR *VAR_4 = VAR_3;

    while (*VAR_4 == ' ' || *VAR_4 == '\t') VAR_4++;
    if (*VAR_4 && *VAR_4 != ';') goto invalid;

    FUNC_1(VAR_2, VAR_0);
    return VAR_3;

invalid:
    FUNC_0(VAR_2);
    FUNC_1(VAR_2, VAR_1);
    return VAR_4;
}
