
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_long ;
typedef char u_char ;


 scalar_t__ FUNC_0 (char const*,size_t*,size_t*,size_t*,size_t*) ;
 int FUNC_1 (char*,char*,int) ;

size_t
FUNC_2(u_char *VAR_0)
{
    u_char VAR_1[4];
    u_long VAR_2, VAR_3, VAR_4, VAR_5;

    if (VAR_0[2] == ':') {
        FUNC_1(VAR_1, VAR_0, 4);
        VAR_0 = VAR_1;
    }

    if (FUNC_0((const char *) VAR_0, &VAR_2, &VAR_3, &VAR_4, &VAR_5) == 0) {
        return 512;
    }

    return VAR_2 * VAR_3;
}
