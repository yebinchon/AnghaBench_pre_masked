
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;


 int FUNC_0 (int ,int,int *) ;
 scalar_t__ FUNC_1 (int) ;

const char *
FUNC_2 (
    const char *VAR_0,
    UINT64 *VAR_1)
{
    UINT64 VAR_2 = 0;


    while (FUNC_1 ((int) *VAR_0))
    {
        FUNC_0 (VAR_2, 10, &VAR_2);
        VAR_2 += *(VAR_0++) - '0';
    }

    *VAR_1 = VAR_2;
    return (VAR_0);
}
