
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt {int dummy; } ;


 struct symt** FUNC_0 (long,long) ;
 long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static struct symt** FUNC_2(const char** VAR_0)
{
    long VAR_1, VAR_2;
    const char* VAR_3;
    char* VAR_4;

    VAR_3 = *VAR_0;
    if (*VAR_3 == '(')
    {
        ++VAR_3;
        VAR_1 = FUNC_1(VAR_3, &VAR_4, 10);
        VAR_3 = ++VAR_4;
        VAR_2 = FUNC_1(VAR_3, &VAR_4, 10);
        VAR_3 = ++VAR_4;
    }
    else
    {
        VAR_1 = 0;
        VAR_2 = FUNC_1(VAR_3, &VAR_4, 10);
        VAR_3 = VAR_4;
    }
    *VAR_0 = VAR_3;
    return FUNC_0(VAR_1, VAR_2);
}
