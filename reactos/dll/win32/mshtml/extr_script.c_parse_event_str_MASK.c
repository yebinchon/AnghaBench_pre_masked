
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;

__attribute__((used)) static BOOL FUNC_4(WCHAR *VAR_2, const WCHAR **VAR_3)
{
    WCHAR *VAR_4;

    FUNC_0("%s\n", FUNC_1(VAR_2));

    for(VAR_4 = VAR_2; FUNC_2(*VAR_4); VAR_4++);
    if(!*VAR_4) {
        *VAR_3 = ((void*)0);
        return VAR_1;
    }

    if(*VAR_4 != '(')
        return VAR_0;

    *VAR_4++ = 0;
    *VAR_3 = VAR_4;
    while(FUNC_2(*VAR_4) || FUNC_3(*VAR_4) || *VAR_4 == ',')
        VAR_4++;

    if(*VAR_4 != ')')
        return VAR_0;

    *VAR_4++ = 0;
    return !*VAR_4;
}
