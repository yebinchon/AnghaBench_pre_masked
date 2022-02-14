
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPTSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static BOOL
FUNC_1 (LPTSTR *VAR_3)
{
    if (**VAR_3 == FUNC_0('/') || **VAR_3 == FUNC_0('-') || **VAR_3 == VAR_2)
    {
        (*VAR_3)++;
        return VAR_1;
    }
    return VAR_0;
}
