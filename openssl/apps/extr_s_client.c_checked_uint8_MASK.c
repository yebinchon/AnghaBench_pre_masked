
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint8_t ;
typedef int ossl_ssize_t ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 long FUNC_4 (char const*,char**,int) ;

__attribute__((used)) static ossl_ssize_t FUNC_5(const char **VAR_3, void *VAR_4)
{
    uint8_t *VAR_5 = (uint8_t *)VAR_4;
    const char *VAR_6 = *VAR_3;
    char *VAR_7;
    long VAR_8;
    int VAR_9;

    FUNC_3();
    VAR_8 = FUNC_4(VAR_6, &VAR_7, 10);
    VAR_9 = FUNC_2();

    if (((VAR_8 == VAR_2 || VAR_8 == VAR_1) && VAR_9 == VAR_0) ||
        VAR_7 == VAR_6 || !FUNC_1(FUNC_0(*VAR_7)) ||
        VAR_8 != (*VAR_5 = (uint8_t) VAR_8)) {
        return -1;
    }
    for (VAR_6 = VAR_7; FUNC_1(FUNC_0(*VAR_6)); ++VAR_6)
        continue;

    *VAR_3 = VAR_6;
    return 1;
}
