
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coro {int dummy; } ;


 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 (struct coro*,size_t const) ;
 int FUNC_2 (char*,char const*,size_t const) ;
 int FUNC_3 (char const*,size_t) ;

char *FUNC_4(struct coro *VAR_0, const char *VAR_1, size_t VAR_2)
{
    const size_t VAR_3 = FUNC_3(VAR_1, VAR_2) + 1;
    char *VAR_4 = FUNC_1(VAR_0, VAR_3);

    if (FUNC_0(VAR_4)) {
        FUNC_2(VAR_4, VAR_1, VAR_3);
        VAR_4[VAR_3 - 1] = '\0';
    }
    return VAR_4;
}
