
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(SSL *VAR_1, const unsigned char *VAR_2,
                         unsigned int VAR_3)
{
    unsigned int VAR_4;

    if (VAR_3 != VAR_0)
        return 0;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_2++) {
        if (*VAR_2 != VAR_4)
            return 0;
    }

    return 1;
}
