
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int dummy; } ;
typedef char WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct parser*,int ) ;
 unsigned int FUNC_1 (char*) ;

__attribute__((used)) static WCHAR *FUNC_2(struct parser *VAR_3, WCHAR *VAR_4)
{
    WCHAR *VAR_5 = VAR_4;
    unsigned int VAR_6;

    while (*VAR_5 == ' ' || *VAR_5 == '\t') VAR_5++;
    if (*VAR_5 != '=') goto invalid;
    VAR_5++;
    while (*VAR_5 == ' ' || *VAR_5 == '\t') VAR_5++;


    VAR_6 = FUNC_1(VAR_5);
    while (VAR_6 > 0 && (VAR_5[VAR_6 - 1] == ' ' || VAR_5[VAR_6 - 1] == '\t')) VAR_6--;
    VAR_5[VAR_6] = 0;

    if (*VAR_5 == '-')
        FUNC_0(VAR_3, VAR_1);
    else
        FUNC_0(VAR_3, VAR_0);
    return VAR_5;

invalid:
    FUNC_0(VAR_3, VAR_2);
    return VAR_5;
}
