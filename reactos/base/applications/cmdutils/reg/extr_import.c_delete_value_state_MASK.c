
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int value_name; int hkey; } ;
typedef char WCHAR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct parser*,int ) ;

__attribute__((used)) static WCHAR *FUNC_2(struct parser *VAR_1, WCHAR *VAR_2)
{
    WCHAR *VAR_3 = VAR_2 + 1;

    while (*VAR_3 == ' ' || *VAR_3 == '\t') VAR_3++;
    if (*VAR_3 && *VAR_3 != ';') goto done;

    FUNC_0(VAR_1->hkey, VAR_1->value_name);

done:
    FUNC_1(VAR_1, VAR_0);
    return VAR_3;
}
