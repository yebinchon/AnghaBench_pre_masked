
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static HRESULT FUNC_0(char *VAR_2, int VAR_3, char *VAR_4)
{
    if (!VAR_4)
        return VAR_0;

    if (VAR_3 <= 0)
        return VAR_1;

    if (!VAR_2)
        return VAR_0;

    while (*VAR_4 && VAR_3-- > 1)
        *VAR_2++ = *VAR_4++;
    *VAR_2 = 0;

    return VAR_1;
}
