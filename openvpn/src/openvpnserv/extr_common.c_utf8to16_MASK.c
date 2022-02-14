
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*,int,int *,int) ;
 int * FUNC_1 (int) ;

wchar_t *
FUNC_2(const char *VAR_1)
{
    int VAR_2 = FUNC_0(VAR_0, 0, VAR_1, -1, ((void*)0), 0);
    wchar_t *VAR_3 = FUNC_1(VAR_2 * sizeof(wchar_t));
    if (!VAR_3)
    {
        return ((void*)0);
    }
    FUNC_0(VAR_0, 0, VAR_1, -1, VAR_3, VAR_2);
    return VAR_3;
}
