
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int ASN1_UTCTIME ;


 int * FUNC_0 (int *,struct tm*) ;
 int FUNC_1 (int*,int*,struct tm*,struct tm*) ;
 int FUNC_2 (struct tm*,int const*) ;

int FUNC_3(const ASN1_UTCTIME *VAR_0, time_t VAR_1)
{
    struct tm VAR_2, VAR_3;
    int VAR_4, VAR_5;

    if (!FUNC_2(&VAR_2, VAR_0))
        return -2;

    if (FUNC_0(&VAR_1, &VAR_3) == ((void*)0))
        return -2;

    if (!FUNC_1(&VAR_4, &VAR_5, &VAR_3, &VAR_2))
        return -2;

    if (VAR_4 > 0 || VAR_5 > 0)
        return 1;
    if (VAR_4 < 0 || VAR_5 < 0)
        return -1;
    return 0;
}
