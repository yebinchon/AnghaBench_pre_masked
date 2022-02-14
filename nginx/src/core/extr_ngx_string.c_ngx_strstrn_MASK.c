
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;


 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,size_t) ;

u_char *
FUNC_1(u_char *VAR_0, char *VAR_1, size_t VAR_2)
{
    u_char VAR_3, VAR_4;

    VAR_4 = *(u_char *) VAR_1++;

    do {
        do {
            VAR_3 = *VAR_0++;

            if (VAR_3 == 0) {
                return ((void*)0);
            }

        } while (VAR_3 != VAR_4);

    } while (FUNC_0(VAR_0, (u_char *) VAR_1, VAR_2) != 0);

    return --VAR_0;
}
