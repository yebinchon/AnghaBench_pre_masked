
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_quad_t ;


 scalar_t__ FUNC_0 (int *,char*,int) ;
 char* FUNC_1 (char*,int*) ;

int
FUNC_2(uint32_t *VAR_0, char *VAR_1, int VAR_2)
{
    u_quad_t VAR_3;

    if (VAR_2 == 0)
        VAR_1 = FUNC_1 (VAR_1, &VAR_2);
    if (FUNC_0 (&VAR_3, VAR_1, VAR_2)) {
        *VAR_0 = VAR_3;
        return (1);
    }
    return (0);
}
