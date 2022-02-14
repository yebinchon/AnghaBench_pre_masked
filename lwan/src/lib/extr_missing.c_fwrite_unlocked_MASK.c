
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,void const*,size_t) ;

size_t FUNC_3(const void *VAR_2, size_t VAR_3, size_t VAR_4, FILE *VAR_5)
{
    size_t VAR_6 = VAR_3 * VAR_4;
    const size_t VAR_7 = VAR_6;

    if (!VAR_6)
        return 0;

    FUNC_0 (VAR_5);

    while (VAR_6) {
        ssize_t VAR_8 = FUNC_2(FUNC_1(VAR_5), VAR_2, VAR_6);
        if (VAR_8 < 0) {
            if (VAR_1 == VAR_0)
                continue;
            break;
        }

        VAR_6 -= (size_t)VAR_8;
    }

    return (VAR_7 - VAR_6) / VAR_3;
}
