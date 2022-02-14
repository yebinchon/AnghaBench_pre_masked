
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {char* data; int data_size; } ;
typedef char WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct parser*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct parser*,int ) ;
 int FUNC_3 (char*,char**) ;

__attribute__((used)) static WCHAR *FUNC_4(struct parser *VAR_2, WCHAR *VAR_3)
{
    WCHAR *VAR_4;

    VAR_2->data = VAR_3;

    if (!FUNC_3(VAR_2->data, &VAR_4))
        goto invalid;

    while (*VAR_4 == ' ' || *VAR_4 == '\t') VAR_4++;
    if (*VAR_4 && *VAR_4 != ';') goto invalid;

    VAR_2->data_size = (FUNC_1(VAR_2->data) + 1) * sizeof(WCHAR);

    FUNC_2(VAR_2, VAR_1);
    return VAR_4;

invalid:
    FUNC_0(VAR_2);
    FUNC_2(VAR_2, VAR_0);
    return VAR_4;
}
