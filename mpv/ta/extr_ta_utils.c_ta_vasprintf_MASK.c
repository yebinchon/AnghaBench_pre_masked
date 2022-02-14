
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,void*) ;
 int FUNC_2 (char**,int ,char const*,int ) ;

char *FUNC_3(void *VAR_0, const char *VAR_1, va_list VAR_2)
{
    char *VAR_3 = ((void*)0);
    FUNC_2(&VAR_3, 0, VAR_1, VAR_2);
    if (!VAR_3 || !FUNC_1(VAR_3, VAR_0)) {
        FUNC_0(VAR_3);
        return ((void*)0);
    }
    return VAR_3;
}
