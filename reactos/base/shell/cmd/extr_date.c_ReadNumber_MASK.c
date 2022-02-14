
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* LPWORD ;
typedef int* LPTSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static BOOL
FUNC_2 (LPTSTR *VAR_2, LPWORD VAR_3)
{
    if (FUNC_1 (**VAR_2))
    {
        while (FUNC_1 (**VAR_2))
        {
            *VAR_3 = *VAR_3 * 10 + **VAR_2 - FUNC_0('0');
            (*VAR_2)++;
        }
        return VAR_1;
    }
    return VAR_0;
}
