
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int SSL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ) ;

int FUNC_1(SSL *VAR_1, uint16_t VAR_2, const uint16_t *VAR_3,
                  size_t VAR_4, int VAR_5)
{
    size_t VAR_6;

    if (VAR_3 == ((void*)0) || VAR_4 == 0)
        return 0;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        uint16_t VAR_7 = VAR_3[VAR_6];

        if (VAR_2 == VAR_7
                && (!VAR_5
                    || FUNC_0(VAR_1, VAR_7, VAR_0))) {
            return 1;
        }
    }

    return 0;
}
