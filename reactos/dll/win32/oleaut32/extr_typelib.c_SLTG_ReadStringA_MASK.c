
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static WORD FUNC_2(const char *VAR_0, char **VAR_1)
{
    WORD VAR_2;

    *VAR_1 = ((void*)0);
    VAR_2 = *(const WORD*)VAR_0;
    if(VAR_2 == 0xffff) return 2;
    *VAR_1 = FUNC_0(VAR_2 + 1);
    FUNC_1(*VAR_1, VAR_0 + 2, VAR_2);
    (*VAR_1)[VAR_2] = '\0';
    return VAR_2 + 2;
}
