
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tm const*,int ,int ,long*,int*) ;

int FUNC_1(int *VAR_1, int *VAR_2,
                        const struct tm *VAR_3, const struct tm *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    long VAR_8, VAR_9, VAR_10;
    if (!FUNC_0(VAR_3, 0, 0, &VAR_8, &VAR_5))
        return 0;
    if (!FUNC_0(VAR_4, 0, 0, &VAR_9, &VAR_6))
        return 0;
    VAR_10 = VAR_9 - VAR_8;
    VAR_7 = VAR_6 - VAR_5;

    if (VAR_10 > 0 && VAR_7 < 0) {
        VAR_10--;
        VAR_7 += VAR_0;
    }
    if (VAR_10 < 0 && VAR_7 > 0) {
        VAR_10++;
        VAR_7 -= VAR_0;
    }

    if (VAR_1)
        *VAR_1 = (int)VAR_10;
    if (VAR_2)
        *VAR_2 = VAR_7;

    return 1;

}
