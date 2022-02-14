
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char) ;

__attribute__((used)) static ssize_t FUNC_2(char *VAR_1)
{
    if (FUNC_0(!VAR_1))
        return -VAR_0;

    char *VAR_2, *VAR_3;
    for (VAR_3 = VAR_2 = VAR_1; *VAR_2; VAR_2++) {
        if (*VAR_2 == '%') {
            char VAR_4 =
                (char)(FUNC_1(VAR_2[1]) << 4 | FUNC_1(VAR_2[2]));

            if (FUNC_0(!VAR_4))
                return -VAR_0;

            *VAR_3++ = VAR_4;
            VAR_2 += 2;
        } else if (*VAR_2 == '+') {
            *VAR_3++ = ' ';
        } else {
            *VAR_3++ = *VAR_2;
        }
    }

    *VAR_3 = '\0';
    return (ssize_t)(VAR_3 - VAR_1);
}
