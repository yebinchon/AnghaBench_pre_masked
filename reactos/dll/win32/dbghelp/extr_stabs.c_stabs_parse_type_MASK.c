
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt {int dummy; } ;


 int FUNC_0 (char const) ;
 struct symt** FUNC_1 (char const**) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static struct symt* FUNC_3(const char* VAR_0)
{
    const char* VAR_1 = VAR_0 - 1;
    do
    {
        if ((VAR_1 = FUNC_2(VAR_1 + 1, ':')) == ((void*)0)) return ((void*)0);
    } while (*++VAR_1 == ':');







    while (*VAR_1 && *VAR_1 != '(' && !FUNC_0(*VAR_1))
        VAR_1++;




    return *FUNC_1(&VAR_1);
}
